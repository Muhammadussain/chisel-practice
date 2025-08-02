package BabyKyber

import chisel3._
import chiseltest._
import org.scalatest.FlatSpec
import org.scalatest.Matchers
import chiseltest.internal.VerilatorBackendAnnotation
import chiseltest.experimental.TestOptionBuilder._

class BabyKyberTopTests extends FlatSpec with ChiselScalatestTester with Matchers {

  // Helper function to perform write operation with detailed logging
  def writeRegister(c: BabyKyberTop, addr: Long, data: Long, description: String): Unit = {
    println(s"[WRITE] $description")
    println(s"        Address: 0x${addr.toHexString}, Data: $data (0x${data.toHexString})")
    
    c.io.req.valid.poke(true.B)
    c.io.req.bits.isWrite.poke(true.B)
    c.io.req.bits.addrRequest.poke(addr.U)
    c.io.req.bits.dataRequest.poke(data.U)
    c.clock.step(1)
    c.io.req.valid.poke(false.B)
    
    // Check if write was successful
    val writeSuccess = c.io.rsp.valid.peek().litToBoolean
    println(s"        Write Status: ${if (writeSuccess) "SUCCESS" else "FAILED"}")
    if (writeSuccess) {
      val response = c.io.rsp.bits.dataResponse.peek().litValue
      println(s"        Response: $response")
    }
    println()
  }

  // Helper function to perform read operation with detailed logging
  def readRegister(c: BabyKyberTop, addr: Long, description: String): Long = {
    println(s"[READ]  $description")
    println(s"        Address: 0x${addr.toHexString}")
    
    c.io.req.valid.poke(true.B)
    c.io.req.bits.isWrite.poke(false.B)
    c.io.req.bits.addrRequest.poke(addr.U)
    c.clock.step(1)
    c.io.req.valid.poke(false.B)
    
    val readSuccess = c.io.rsp.valid.peek().litToBoolean
    val value: Long = if (readSuccess) c.io.rsp.bits.dataResponse.peek().litValue.toLong else 0L
    println(s"        Read Status: ${if (readSuccess) "SUCCESS" else "FAILED"}")
    println(s"        Value: $value (0x${value.toHexString})")
    println()
    
    value
  }

  // Helper function to wait for done signal with timeout
  def waitForDone(c: BabyKyberTop, doneSignal: () => Boolean, operation: String, timeout: Int = 1000): Boolean = {
    println(s"[WAIT]  Waiting for $operation to complete...")
    var cycles = 0
    while (!doneSignal() && cycles < timeout) {
      c.clock.step(1)
      cycles += 1
      if (cycles % 50 == 0) {
        println(s"        Still waiting... ($cycles cycles)")
      }
    }
    val success = doneSignal()
    println(s"        $operation ${if (success) "COMPLETED" else "TIMEOUT"} after $cycles cycles")
    println()
    success
  }

  "BabyKyberTop" should "perform key generation, encryption, and decryption with detailed logging" in {
    test(new BabyKyberTop).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      println("="*80)
      println("           BABY KYBER TOP BLACKBOX FUNCTIONALITY TEST")
      println("="*80)
      
      // Reset the design
      println("[INIT]  Resetting the design...")
      c.reset.poke(true.B)
      c.clock.step(1)
      c.reset.poke(false.B)

      // Initialize inputs
      println("[INIT]  Initializing control signals...")
      c.io.enable.poke(false.B)
      c.io.key_enable.poke(false.B)
      c.io.encryption_enable.poke(false.B)
      c.io.decryption_enable.poke(false.B)
      c.io.req.valid.poke(false.B)
      c.io.req.bits.isWrite.poke(false.B)
      c.io.req.bits.dataRequest.poke(0.U)
      c.io.req.bits.addrRequest.poke(0.U)
      c.io.req.bits.activeByteLane.poke(0.U)
      c.clock.step(1)

      // Enable the accelerator
      println("[INIT]  Enabling BabyKyber accelerator...")
      c.io.enable.poke(true.B)
      c.io.req.bits.activeByteLane.poke(0xFF.U)
      println()

      // ========== KEY GENERATION PHASE ==========
      println("+"*80)
      println("                        KEY GENERATION PHASE")
      println("+"*80)
      
      // Write A_t matrix (4x4)
      println("[KEYGEN] Writing A_t matrix (4x4)...")
      val a_matrix_data = Seq(
        (0x40007000, 1, "A_t[0][0]"), (0x40007004, 2, "A_t[0][1]"), 
        (0x40007008, 3, "A_t[0][2]"), (0x40007012, 4, "A_t[0][3]"),
        (0x40007016, 5, "A_t[1][0]"), (0x40007020, 6, "A_t[1][1]"), 
        (0x40007024, 7, "A_t[1][2]"), (0x40007028, 8, "A_t[1][3]"),
        (0x40007032, 9, "A_t[2][0]"), (0x40007036, 10, "A_t[2][1]"), 
        (0x40007040, 11, "A_t[2][2]"), (0x40007044, 12, "A_t[2][3]"),
        (0x40007048, 13, "A_t[3][0]"), (0x40007052, 14, "A_t[3][1]"), 
        (0x40007056, 15, "A_t[3][2]"), (0x40007060, 16, "A_t[3][3]")
      )
      
      for ((addr, data, desc) <- a_matrix_data) {
        writeRegister(c, addr, data, s"A_t matrix element: $desc")
      }

      // Write s vector
      println("[KEYGEN] Writing s vector...")
      val s_vector_data = Seq(
        (0x40007064, 17, "s[0][0]"), (0x40007068, 18, "s[0][1]"), 
        (0x40007072, 19, "s[0][2]"), (0x40007076, 20, "s[0][3]"),
        (0x40007080, 21, "s[1][0]"), (0x40007084, 22, "s[1][1]"), 
        (0x40007088, 23, "s[1][2]"), (0x40007092, 24, "s[1][3]")
      )
      
      for ((addr, data, desc) <- s_vector_data) {
        writeRegister(c, addr, data, s"s vector element: $desc")
      }

      // Write e vector
      println("[KEYGEN] Writing e vector...")
      val e_vector_data = Seq(
        (0x40007096, 25, "e[0][0]"), (0x40007100, 26, "e[0][1]"), 
        (0x40007104, 27, "e[0][2]"), (0x40007108, 28, "e[0][3]"),
        (0x40007112, 29, "e[1][0]"), (0x40007116, 30, "e[1][1]"), 
        (0x40007120, 31, "e[1][2]"), (0x40007124, 32, "e[1][3]")
      )
      
      for ((addr, data, desc) <- e_vector_data) {
        writeRegister(c, addr, data, s"e vector element: $desc")
      }

      // Trigger Key Generation
      writeRegister(c, 0x40007356, 0, "KEY GENERATION TRIGGER")

      // Enable key generation and wait for completion
      println("[KEYGEN] Enabling key generation...")
      c.io.key_enable.poke(true.B)
      c.clock.step(1)
      c.io.key_enable.poke(false.B)
      
      val keyGenSuccess = waitForDone(c, () => c.io.key_done.peek().litToBoolean, "Key Generation")
      
      if (keyGenSuccess) {
        println("[KEYGEN] Reading back public key...")
        val public_key_addrs = Seq(
          (0x40007000, "PK[0][0][0]"), (0x40007004, "PK[0][0][1]"), (0x40007008, "PK[0][0][2]"), (0x40007012, "PK[0][0][3]"),
          (0x40007016, "PK[0][1][0]"), (0x40007020, "PK[0][1][1]"), (0x40007024, "PK[0][1][2]"), (0x40007028, "PK[0][1][3]"),
          (0x40007032, "PK[0][2][0]"), (0x40007036, "PK[0][2][1]"), (0x40007040, "PK[0][2][2]"), (0x40007044, "PK[0][2][3]"),
          (0x40007048, "PK[0][3][0]"), (0x40007052, "PK[0][3][1]"), (0x40007056, "PK[0][3][2]"), (0x40007060, "PK[0][3][3]"),
          (0x40007064, "PK[1][0][0]"), (0x40007068, "PK[1][0][1]"), (0x40007072, "PK[1][0][2]"), (0x40007076, "PK[1][0][3]"),
          (0x40007080, "PK[1][1][0]"), (0x40007084, "PK[1][1][1]"), (0x40007088, "PK[1][1][2]"), (0x40007092, "PK[1][1][3]")
        )
        
        for ((addr, desc) <- public_key_addrs) {
          readRegister(c, addr, s"Public Key element: $desc")
        }
      }

      // ========== ENCRYPTION PHASE ==========
      println("+"*80)
      println("                        ENCRYPTION PHASE")
      println("+"*80)

      // Write message and encryption parameters
      writeRegister(c, 0x40007128, 42, "MESSAGE to encrypt")
      
      println("[ENCRYPT] Writing public key for encryption...")
      val encrypt_pk_data = Seq(
        (0x40007132, 1, "PK[0][0][0]"), (0x40007136, 2, "PK[0][0][1]"), (0x40007140, 3, "PK[0][0][2]"), (0x40007144, 4, "PK[0][0][3]"),
        (0x40007148, 5, "PK[0][1][0]"), (0x40007152, 6, "PK[0][1][1]"), (0x40007156, 7, "PK[0][1][2]"), (0x40007160, 8, "PK[0][1][3]"),
        (0x40007164, 9, "PK[0][2][0]"), (0x40007168, 10, "PK[0][2][1]"), (0x40007172, 11, "PK[0][2][2]"), (0x40007176, 12, "PK[0][2][3]"),
        (0x40007180, 13, "PK[0][3][0]"), (0x40007184, 14, "PK[0][3][1]"), (0x40007188, 15, "PK[0][3][2]"), (0x40007192, 16, "PK[0][3][3]"),
        (0x40007196, 17, "PK[1][0][0]"), (0x40007200, 18, "PK[1][0][1]"), (0x40007204, 19, "PK[1][0][2]"), (0x40007208, 20, "PK[1][0][3]"),
        (0x40007212, 21, "PK[1][1][0]"), (0x40007216, 22, "PK[1][1][1]"), (0x40007220, 23, "PK[1][1][2]"), (0x40007224, 24, "PK[1][1][3]")
      )
      
      for ((addr, data, desc) <- encrypt_pk_data) {
        writeRegister(c, addr, data, s"Encryption PK element: $desc")
      }

      println("[ENCRYPT] Writing r vector...")
      val r_vector_data = Seq(
        (0x40007228, 25, "r[0][0]"), (0x40007232, 26, "r[0][1]"), (0x40007236, 27, "r[0][2]"), (0x40007240, 28, "r[0][3]"),
        (0x40007244, 29, "r[1][0]"), (0x40007248, 30, "r[1][1]"), (0x40007252, 31, "r[1][2]"), (0x40007256, 32, "r[1][3]")
      )
      
      for ((addr, data, desc) <- r_vector_data) {
        writeRegister(c, addr, data, s"r vector element: $desc")
      }

      println("[ENCRYPT] Writing e1 vector...")
      val e1_vector_data = Seq(
        (0x40007260, 33, "e1[0][0]"), (0x40007264, 34, "e1[0][1]"), (0x40007268, 35, "e1[0][2]"), (0x40007272, 36, "e1[0][3]"),
        (0x40007276, 37, "e1[1][0]"), (0x40007280, 38, "e1[1][1]"), (0x40007284, 39, "e1[1][2]"), (0x40007288, 40, "e1[1][3]")
      )
      
      for ((addr, data, desc) <- e1_vector_data) {
        writeRegister(c, addr, data, s"e1 vector element: $desc")
      }

      println("[ENCRYPT] Writing e2 vector...")
      val e2_vector_data = Seq(
        (0x40007292, 41, "e2[0]"), (0x40007296, 42, "e2[1]"), (0x40007300, 43, "e2[2]"), (0x40007304, 44, "e2[3]")
      )
      
      for ((addr, data, desc) <- e2_vector_data) {
        writeRegister(c, addr, data, s"e2 vector element: $desc")
      }

      // Trigger Encryption
      writeRegister(c, 0x40007360, 0, "ENCRYPTION TRIGGER")

      // Enable encryption and wait for completion
      println("[ENCRYPT] Enabling encryption...")
      c.io.encryption_enable.poke(true.B)
      c.clock.step(1)
      c.io.encryption_enable.poke(false.B)
      
      val encryptSuccess = waitForDone(c, () => c.io.encryption_done.peek().litToBoolean, "Encryption")
      
      if (encryptSuccess) {
        println("[ENCRYPT] Reading back ciphertext...")
        val ciphertext_addrs = Seq(
          (0x40007096, "CT[0][0][0]"), (0x40007100, "CT[0][0][1]"), (0x40007104, "CT[0][0][2]"), (0x40007108, "CT[0][0][3]"),
          (0x40007112, "CT[0][1][0]"), (0x40007116, "CT[0][1][1]"), (0x40007120, "CT[0][1][2]"), (0x40007124, "CT[0][1][3]"),
          (0x40007128, "CT[1][0]"), (0x40007132, "CT[1][1]"), (0x40007136, "CT[1][2]"), (0x40007140, "CT[1][3]")
        )
        
        for ((addr, desc) <- ciphertext_addrs) {
          readRegister(c, addr, s"Ciphertext element: $desc")
        }
      }

      // ========== DECRYPTION PHASE ==========
      println("+"*80)
      println("                        DECRYPTION PHASE")
      println("+"*80)

      println("[DECRYPT] Writing ciphertext for decryption...")
      val decrypt_ct_data = Seq(
        (0x40007308, 1, "CT[0][0][0]"), (0x40007312, 2, "CT[0][0][1]"), (0x40007316, 3, "CT[0][0][2]"), (0x40007320, 4, "CT[0][0][3]"),
        (0x40007324, 5, "CT[0][1][0]"), (0x40007328, 6, "CT[0][1][1]"), (0x40007332, 7, "CT[0][1][2]"), (0x40007336, 8, "CT[0][1][3]"),
        (0x40007340, 9, "CT[1][0]"), (0x40007344, 10, "CT[1][1]"), (0x40007348, 11, "CT[1][2]"), (0x40007352, 12, "CT[1][3]")
      )
      
      for ((addr, data, desc) <- decrypt_ct_data) {
        writeRegister(c, addr, data, s"Decryption CT element: $desc")
      }

      // Trigger Decryption
      writeRegister(c, 0x40007364, 0, "DECRYPTION TRIGGER")

      // Enable decryption and wait for completion
      println("[DECRYPT] Enabling decryption...")
      c.io.decryption_enable.poke(true.B)
      c.clock.step(1)
      c.io.decryption_enable.poke(false.B)
      
      val decryptSuccess = waitForDone(c, () => c.io.decryption_done.peek().litToBoolean, "Decryption")
      
      if (decryptSuccess) {
        println("[DECRYPT] Reading back decrypted message...")
        val decryptedMsg = readRegister(c, 0x40007144, "DECRYPTED MESSAGE")
        
        println("="*80)
        println(s"FINAL RESULT: Decrypted message = $decryptedMsg")
        println("="*80)
      }

      println("="*80)
      println("           BABY KYBER BLACKBOX TEST COMPLETED")
      println("="*80)
    }
  }
}