package BabyKyber

import chisel3._
import chiseltest._
import org.scalatest.flatspec.AnyFlatSpec
import chiseltest.simulator.WriteVcdAnnotation
import org.scalatest.matchers.should.Matchers

class MemFetchTest extends AnyFlatSpec with ChiselScalatestTester with Matchers {
  behavior of "MemFetch"

  it should "handle write and read operations correctly" in {
    test(new MemFetch).withAnnotations(Seq(WriteVcdAnnotation)) { c =>
      def write(addr: BigInt, data: BigInt): Unit = {
        c.io.addr.poke(addr.U) // Use byte address directly
        c.io.writeData.poke(data.U)
        c.io.memWrite.poke(true.B)
        c.io.memRead.poke(false.B)
        c.clock.step()
        c.io.memWrite.poke(false.B)
      }

      def read(addr: BigInt): BigInt = {
        c.io.addr.poke(addr.U) // Use byte address directly
        c.io.memRead.poke(true.B)
        c.io.memWrite.poke(false.B)
        c.clock.step()
        val out = c.io.readData.peek().litValue
        c.io.memRead.poke(false.B)
        out
      }

      // Test secretkey[0][0] at address 0x300000
      println("Testing secretkey[0][0] at 0x300000")
      write(BigInt("300000", 16), BigInt("DEADBEEF", 16))
      c.clock.step() // Ensure write is committed
      val readValue = read(BigInt("300000", 16))
      println(s"Read value at 0x300000: 0x${readValue.toString(16)}")
      readValue shouldBe BigInt("DEADBEEF", 16)

      // Test result[1][3] at address 0x30003C
      write(BigInt("30003C", 16), BigInt("12345678", 16))
      c.clock.step()
      read(BigInt("30003C", 16)) shouldBe BigInt("12345678", 16)

      // Test public_key[1][3][3] at address 0x3000BC
      write(BigInt("3000BC", 16), BigInt("CAFEBABE", 16))
      c.clock.step()
      read(BigInt("3000BC", 16)) shouldBe BigInt("CAFEBABE", 16)

      // Test A_reg[3][3] at address 0x3000FC
      write(BigInt("3000FC", 16), BigInt("ABCD1234", 16))
      c.clock.step()
      read(BigInt("3000FC", 16)) shouldBe BigInt("ABCD1234", 16)

      // Test s_reg[1][3] at address 0x30011C
      write(BigInt("30011C", 16), BigInt("5555AAAA", 16))
      c.clock.step()
      read(BigInt("30011C", 16)) shouldBe BigInt("5555AAAA", 16)

      // Test e_reg[1][3] at address 0x30013C
      write(BigInt("30013C", 16), BigInt("7777BBBB", 16))
      c.clock.step()
      read(BigInt("30013C", 16)) shouldBe BigInt("7777BBBB", 16)

      // Test ciphertext[1][1][3] at address 0x30017C
      write(BigInt("30017C", 16), BigInt("8888CCCC", 16))
      c.clock.step()
      read(BigInt("30017C", 16)) shouldBe BigInt("8888CCCC", 16)

      // Test r[1][3] at address 0x30019C
      write(BigInt("30019C", 16), BigInt("9999DDDD", 16))
      c.clock.step()
      read(BigInt("30019C", 16)) shouldBe BigInt("9999DDDD", 16)

      // Test e1[1][3] at address 0x3001BC
      write(BigInt("3001BC", 16), BigInt("AAAAEEEE", 16))
      c.clock.step()
      read(BigInt("3001BC", 16)) shouldBe BigInt("AAAAEEEE", 16)

      // Test e2[3] at address 0x3001CC
      write(BigInt("3001CC", 16), BigInt("0000AAAA", 16))
      c.clock.step()
      read(BigInt("3001CC", 16)) shouldBe BigInt("0000AAAA", 16)

      // Test decimal_value at address 0x3001D0
      write(BigInt("3001D0", 16), BigInt("FFFF1111", 16))
      c.clock.step()
      read(BigInt("3001D0", 16)) shouldBe BigInt("FFFF1111", 16)

      // Test m_b at address 0x3001D4, 4-bit register
      write(BigInt("3001D4", 16), BigInt("0000000F", 16))
      c.clock.step()
      read(BigInt("3001D4", 16)) shouldBe BigInt("0000000F", 16)

      // Test sequential writes/reads for secretkey[0][0..3] (0x300000–0x30000C)
      for (i <- 0 until 4) {
        val addr = BigInt("300000", 16) + (i * 4)
        val value = BigInt(0x1000 + i)
        write(addr, value)
        c.clock.step()
        read(addr) shouldBe value
      }

      // Test sequential writes/reads for public_key[0][0][0..3] (0x300040–0x30004C)
      for (i <- 0 until 4) {
        val addr = BigInt("300040", 16) + (i * 4)
        val value = BigInt(0x2000 + i)
        write(addr, value)
        c.clock.step()
        read(addr) shouldBe value
      }

      // Test invalid address (should return 0)
      read(BigInt("3001D8", 16)) shouldBe BigInt(0)
    }
  }
}