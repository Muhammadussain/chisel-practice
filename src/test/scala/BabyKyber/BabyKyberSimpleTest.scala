package BabyKyber

import chisel3._
import chiseltest._
import org.scalatest.FlatSpec
import org.scalatest.Matchers

class BabyKyberSimpleTests extends FlatSpec with ChiselScalatestTester with Matchers {

  // Helper function to print register write operations
  def writeRegister(c: BabyKyberTop, addr: Long, data: Long, description: String): Unit = {
    println(f"[WRITE] $description%s: Addr=0x$addr%08X, Data=$data%d (0x$data%08X)")
    c.io.req.valid.poke(true.B)
    c.io.req.bits.isWrite.poke(true.B)
    c.io.req.bits.addrRequest.poke(addr.U)
    c.io.req.bits.dataRequest.poke(data.U)
    c.io.req.bits.activeByteLane.poke(0xFF.U)
    c.clock.step(1)
    
    // Check if response is valid
    if (c.io.rsp.valid.peek().litToBoolean) {
      val response = c.io.rsp.bits.dataResponse.peek().litValue.toLong
      println(f"[WRITE_RESP] Response=$response%d (0x$response%08X) ✓")
    } else {
      println("[WRITE_RESP] No response received ✗")
    }
  }

  // Helper function to print register read operations
  def readRegister(c: BabyKyberTop, addr: Long, description: String): Long = {
    println(f"[READ]  $description%s: Addr=0x$addr%08X")
    c.io.req.valid.poke(true.B)
    c.io.req.bits.isWrite.poke(false.B)
    c.io.req.bits.addrRequest.poke(addr.U)
    c.io.req.bits.activeByteLane.poke(0xFF.U)
    c.clock.step(1)
    
    val data = if (c.io.rsp.valid.peek().litToBoolean) {
      val value = c.io.rsp.bits.dataResponse.peek().litValue.toLong
      println(f"[READ_RESP] Data=$value%d (0x$value%08X) ✓")
      value
    } else {
      println("[READ_RESP] No response received ✗")
      0L
    }
    data
  }

  "BabyKyberTop Simple" should "demonstrate register access interface without SystemVerilog" in {
    test(new BabyKyberTop) { c =>
      println("="*80)
      println("BABYKTYBER SIMPLE INTERFACE TEST")
      println("Testing register access without relying on SystemVerilog BlackBox")
      println("="*80)
      
      // Reset the design
      println("\n[RESET] Resetting the design...")
      c.reset.poke(true.B)
      c.clock.step(2)
      c.reset.poke(false.B)
      c.clock.step(2)

      // Initialize inputs
      println("[INIT] Initializing control signals...")
      c.io.enable.poke(true.B)
      c.io.key_enable.poke(false.B)
      c.io.encryption_enable.poke(false.B)
      c.io.decryption_enable.poke(false.B)
      c.io.req.valid.poke(false.B)
      c.io.req.bits.isWrite.poke(false.B)
      c.io.req.bits.dataRequest.poke(0.U)
      c.io.req.bits.addrRequest.poke(0.U)
      c.io.req.bits.activeByteLane.poke(0xFF.U)
      c.clock.step(4)

      println("\n" + "="*50)
      println("TESTING REGISTER WRITE OPERATIONS")
      println("="*50)

      // Test writing to various register addresses
      val test_registers = Array(
        (0x40007000L, 0x12345678L, "Test Register 1"),
        (0x40007004L, 0xABCDEF00L, "Test Register 2"),
        (0x40007008L, 0x55AA55AAL, "Test Register 3"),
        (0x4000700CL, 0xDEADBEEFL, "Test Register 4"),
        (0x40007010L, 0xCAFEBABEL, "Test Register 5")
      )

      for ((addr, data, desc) <- test_registers) {
        writeRegister(c, addr, data, desc)
        c.clock.step(2) // Add some delay between operations
      }

      println("\n" + "="*50)
      println("TESTING REGISTER READ OPERATIONS")
      println("="*50)

      // Test reading from the same addresses
      for ((addr, expected_data, desc) <- test_registers) {
        val read_data = readRegister(c, addr, desc + " (Read Back)")
        println(f"Expected: 0x$expected_data%08X, Got: 0x$read_data%08X")
        c.clock.step(2) // Add some delay between operations
      }

      println("\n" + "="*50)
      println("TESTING CONTROL SIGNAL INTERFACE")
      println("="*50)

      // Test control signals
      println("[CTRL] Testing key generation enable...")
      c.io.key_enable.poke(true.B)
      c.clock.step(5)
      println(f"[CTRL] key_done = ${c.io.key_done.peek().litToBoolean}")
      c.io.key_enable.poke(false.B)

      println("[CTRL] Testing encryption enable...")
      c.io.encryption_enable.poke(true.B)
      c.clock.step(5)
      println(f"[CTRL] encryption_done = ${c.io.encryption_done.peek().litToBoolean}")
      c.io.encryption_enable.poke(false.B)

      println("[CTRL] Testing decryption enable...")
      c.io.decryption_enable.poke(true.B)
      c.clock.step(5)
      println(f"[CTRL] decryption_done = ${c.io.decryption_done.peek().litToBoolean}")
      c.io.decryption_enable.poke(false.B)

      println("\n" + "="*50)
      println("TESTING MEMORY ACCESS PATTERNS")
      println("="*50)

      // Test sequential writes to simulate matrix loading
      println("[PATTERN] Simulating A_t matrix write pattern...")
      for (i <- 0 until 16) {
        val addr = 0x40007000L + (i * 4)
        val data = i + 1
        writeRegister(c, addr, data, f"A_t[$i]")
      }

      println("\n[PATTERN] Reading back A_t matrix...")
      for (i <- 0 until 16) {
        val addr = 0x40007000L + (i * 4)
        readRegister(c, addr, f"A_t[$i] readback")
      }

      println("\n" + "="*50)
      println("TESTING BURST OPERATIONS")
      println("="*50)

      // Test rapid consecutive operations
      println("[BURST] Performing rapid write burst...")
      c.io.req.valid.poke(true.B)
      c.io.req.bits.isWrite.poke(true.B)
      c.io.req.bits.activeByteLane.poke(0xFF.U)
      
      for (i <- 0 until 8) {
        val addr = 0x40008000L + (i * 4)
        val data = 0x1000 + i
        println(f"[BURST_WRITE] Burst[$i]: Addr=0x$addr%08X, Data=0x$data%04X")
        c.io.req.bits.addrRequest.poke(addr.U)
        c.io.req.bits.dataRequest.poke(data.U)
        c.clock.step(1)
      }

      println("\n[BURST] Performing rapid read burst...")
      c.io.req.bits.isWrite.poke(false.B)
      
      for (i <- 0 until 8) {
        val addr = 0x40008000L + (i * 4)
        println(f"[BURST_READ] Burst[$i]: Addr=0x$addr%08X")
        c.io.req.bits.addrRequest.poke(addr.U)
        c.clock.step(1)
        if (c.io.rsp.valid.peek().litToBoolean) {
          val data = c.io.rsp.bits.dataResponse.peek().litValue.toLong
          println(f"[BURST_READ_RESP] Data=0x$data%08X")
        }
      }

      // Final cleanup
      c.io.req.valid.poke(false.B)
      c.clock.step(10)

      println("\n" + "="*80)
      println("SIMPLE INTERFACE TEST COMPLETED")
      println("This test demonstrates the register access interface")
      println("without requiring the SystemVerilog BlackBox implementation")
      println("="*80)
    }
  }
}
