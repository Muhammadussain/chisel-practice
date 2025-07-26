package BabyKyber

import chisel3._
import chiseltest._
import org.scalatest.FlatSpec
import org.scalatest.Matchers
import chiseltest.internal.VerilatorBackendAnnotation
import chiseltest.experimental.TestOptionBuilder._

class BabyKyberTopTests extends FlatSpec with ChiselScalatestTester with Matchers {

  "BabyKyberTop" should "perform key generation, encryption, and decryption" in {
    test(new BabyKyberTop).withAnnotations(Seq(VerilatorBackendAnnotation)) { c =>
      // Reset the design
      c.reset.poke(true.B)
      c.clock.step(1)
      c.reset.poke(false.B)

      // Initialize inputs
      c.io.enable.poke(false.B)
      c.io.key_enable.poke(false.B)
      c.io.encryption_enable.poke(false.B)
      c.io.decryption_enable.poke(false.B)
      c.io.req.valid.poke(false.B)
      c.io.req.bits.isWrite.poke(false.B)
      c.io.req.bits.dataRequest.poke(0.U)
      c.io.req.bits.addrRequest.poke(0.U)
      c.io.req.bits.activeByteLane.poke(0.U)
      c.clock.step(4)

      // Enable the accelerator
      c.io.enable.poke(true.B)
      c.io.req.bits.activeByteLane.poke(0xFF.U)

      // --- Key Generation ---
      // Step 1: Write Keygen Inputs
      val keygen_inputs = Seq(
        // A_t matrix (4x4)
        (0x40007000, 1), (0x40007004, 2), (0x40007008, 3), (0x40007012, 4),
        (0x40007016, 5), (0x40007020, 6), (0x40007024, 7), (0x40007028, 8),
        (0x40007032, 9), (0x40007036, 10), (0x40007040, 11), (0x40007044, 12),
        (0x40007048, 13), (0x40007052, 14), (0x40007056, 15), (0x40007060, 16),
        // s matrix
        (0x40007064, 17), (0x40007068, 18), (0x40007072, 19), (0x40007076, 20),
        (0x40007080, 21), (0x40007084, 22), (0x40007088, 23), (0x40007092, 24),
        // e matrix
        (0x40007096, 25), (0x40007100, 26), (0x40007104, 27), (0x40007108, 28),
        (0x40007112, 29), (0x40007116, 30), (0x40007120, 31), (0x40007124, 32)
      )

      c.io.req.valid.poke(true.B)
      c.io.req.bits.isWrite.poke(true.B)
      for ((addr, data) <- keygen_inputs) {
        c.io.req.bits.addrRequest.poke(addr.U)
        c.io.req.bits.dataRequest.poke(data.U)
        c.clock.step(1)
        c.io.rsp.valid.expect(true.B)
        c.io.rsp.bits.dataResponse.expect(1.U)
      }

      // Step 2: Trigger Keygen by writing to 0x40007356
      c.io.req.bits.addrRequest.poke(0x40007356.U)
      c.io.req.bits.dataRequest.poke(0.U) // Dummy write to trigger
      c.clock.step(1)

      // Step 3: Assert key_enable and wait for key_done
      c.io.key_enable.poke(true.B)
      c.clock.step(1)
      while (!c.io.key_done.peek().litToBoolean) {
        c.clock.step(1)
      }

      // Step 4: Read Public Key
      val public_key_addrs = Seq(
        0x40007000, 0x40007004, 0x40007008, 0x40007012,
        0x40007016, 0x40007020, 0x40007024, 0x40007028,
        0x40007032, 0x40007036, 0x40007040, 0x40007044,
        0x40007048, 0x40007052, 0x40007056, 0x40007060,
        0x40007064, 0x40007068, 0x40007072, 0x40007076,
        0x40007080, 0x40007084, 0x40007088, 0x40007092
      )
      c.io.req.bits.isWrite.poke(false.B)
      for (addr <- public_key_addrs) {
        c.io.req.bits.addrRequest.poke(addr.U)
        c.clock.step(1)
        c.io.rsp.valid.expect(true.B)
        println(s"Public Key Addr 0x${addr.toHexString} = ${c.io.rsp.bits.dataResponse.peek().litValue}")
      }

      // --- Encryption ---
      // Step 1: Write Encryption Inputs
      val encrypt_inputs = Seq(
        (0x40007128, 42), // message
        // public_key (using values written earlier, just for completeness)
        (0x40007132, 1), (0x40007136, 2), (0x40007140, 3), (0x40007144, 4),
        (0x40007148, 5), (0x40007152, 6), (0x40007156, 7), (0x40007160, 8),
        (0x40007164, 9), (0x40007168, 10), (0x40007172, 11), (0x40007176, 12),
        (0x40007180, 13), (0x40007184, 14), (0x40007188, 15), (0x40007192, 16),
        (0x40007196, 17), (0x40007200, 18), (0x40007204, 19), (0x40007208, 20),
        (0x40007212, 21), (0x40007216, 22), (0x40007220, 23), (0x40007224, 24),
        // r
        (0x40007228, 25), (0x40007232, 26), (0x40007236, 27), (0x40007240, 28),
        (0x40007244, 29), (0x40007248, 30), (0x40007252, 31), (0x40007256, 32),
        // e1
        (0x40007260, 33), (0x40007264, 34), (0x40007268, 35), (0x40007272, 36),
        (0x40007276, 37), (0x40007280, 38), (0x40007284, 39), (0x40007288, 40),
        // e2
        (0x40007292, 41), (0x40007296, 42), (0x40007300, 43), (0x40007304, 44)
      )

      c.io.req.bits.isWrite.poke(true.B)
      for ((addr, data) <- encrypt_inputs) {
        c.io.req.bits.addrRequest.poke(addr.U)
        c.io.req.bits.dataRequest.poke(data.U)
        c.clock.step(1)
        c.io.rsp.valid.expect(true.B)
        c.io.rsp.bits.dataResponse.expect(1.U)
      }

      // Step 2: Trigger Encryption by writing to 0x40007360
      c.io.req.bits.addrRequest.poke(0x40007360.U)
      c.io.req.bits.dataRequest.poke(0.U) // Dummy write to trigger
      c.clock.step(1)

      // Step 3: Assert encryption_enable and wait for encryption_done
      c.io.encryption_enable.poke(true.B)
      c.clock.step(1)
      while (!c.io.encryption_done.peek().litToBoolean) {
        c.clock.step(1)
      }

      // Step 4: Read Ciphertext
      val ciphertext_addrs = Seq(
        0x40007096, 0x40007100, 0x40007104, 0x40007108,
        0x40007112, 0x40007116, 0x40007120, 0x40007124,
        0x40007128, 0x40007132, 0x40007136, 0x40007140
      )
      c.io.req.bits.isWrite.poke(false.B)
      for (addr <- ciphertext_addrs) {
        c.io.req.bits.addrRequest.poke(addr.U)
        c.clock.step(1)
        c.io.rsp.valid.expect(true.B)
        println(s"Ciphertext Addr 0x${addr.toHexString} = ${c.io.rsp.bits.dataResponse.peek().litValue}")
      }

      // --- Decryption ---
      // Step 1: Write Decryption Inputs (Ciphertext)
      val decrypt_inputs = Seq(
        (0x40007308, 1), (0x40007312, 2), (0x40007316, 3), (0x40007320, 4),
        (0x40007324, 5), (0x40007328, 6), (0x40007332, 7), (0x40007336, 8),
        (0x40007340, 9), (0x40007344, 10), (0x40007348, 11), (0x40007352, 12)
      )

      c.io.req.bits.isWrite.poke(true.B)
      for ((addr, data) <- decrypt_inputs) {
        c.io.req.bits.addrRequest.poke(addr.U)
        c.io.req.bits.dataRequest.poke(data.U)
        c.clock.step(1)
        c.io.rsp.valid.expect(true.B)
        c.io.rsp.bits.dataResponse.expect(1.U)
      }

      // Step 2: Trigger Decryption by writing to 0x40007364
      c.io.req.bits.addrRequest.poke(0x40007364.U)
      c.io.req.bits.dataRequest.poke(0.U) // Dummy write to trigger
      c.clock.step(1)

      // Step 3: Assert decryption_enable and wait for decryption_done
      c.io.decryption_enable.poke(true.B)
      c.clock.step(1)
      while (!c.io.decryption_done.peek().litToBoolean) {
        c.clock.step(1)
      }

      // Step 4: Read Decrypted Message
      c.io.req.bits.isWrite.poke(false.B)
      c.io.req.bits.addrRequest.poke(0x40007144.U)
      c.clock.step(1)
      c.io.rsp.valid.expect(true.B)
      println(s"Decrypted message: ${c.io.rsp.bits.dataResponse.peek().litValue}")

      // Run clock for 1000 additional cycles
      c.clock.step(100)
    }
  }
}