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
      def write(addr: Int, data: BigInt): Unit = {
        c.io.addr.poke((addr * 4).U) // word-aligned address
        c.io.write_data.poke(data.U)
        c.io.write_en.poke(true.B)
        c.clock.step()
        c.io.write_en.poke(false.B)
      }

      def read(addr: Int): UInt = {
        c.io.addr.poke((addr * 4).U)
        c.io.read_en.poke(true.B)
        c.clock.step()
        val out = c.io.read_data.peek()
        c.io.read_en.poke(false.B)
        out
      }

      write(0, BigInt("DEADBEEF", 16))
      read(0).litValue shouldBe BigInt("DEADBEEF", 16)

      write(15, BigInt("12345678", 16))
      read(15).litValue shouldBe BigInt("12345678", 16)

      write(47, BigInt("CAFEBABE", 16))
      read(47).litValue shouldBe BigInt("CAFEBABE", 16)

      write(63, BigInt("ABCD1234", 16))
      read(63).litValue shouldBe BigInt("ABCD1234", 16)

      write(115, BigInt("0000AAAA", 16))
      read(115).litValue shouldBe BigInt("0000AAAA", 16)

      write(117, BigInt("0000000F", 16))
      read(117).litValue shouldBe BigInt("0000000F", 16)

      for (i <- 0 until 4) {
        val addr = 1 + i
        val value = BigInt(0x10 + i)
        write(addr, value)
        read(addr).litValue shouldBe value
      }
    }
  }
}

