// package BabyKyber
// import chisel3._
// import chiseltest._
// import org.scalatest._
// import chiseltest.internal.VerilatorBackendAnnotation
// import chisel3.experimental.BundleLiterals._
// import chiseltest.experimental.TestOptionBuilder._
// import chiseltest.internal.VerilatorBackendAnnotation
// // import org.scalatest.flatspec.AnyFlatSpec

// class KyberTopTester extends FreeSpec with ChiselScalatestTester {
//   "KyberTop Test" in {
//     test(new kyber).withAnnotations(Seq(VerilatorBackendAnnotation)) {dut =>
//       // Sample memory model: addr -> data
//       val mockMemory = scala.collection.mutable.Map[Int, Int]()

//       // Helper: Simulate memory response on a clock
//       def simulateMemory(): Unit = {
//         if (dut.io.dmemReq.valid.peek().litToBoolean && dut.io.dmemReq.ready.peek().litToBoolean) {
//           val addr = dut.io.dmemReq.bits.addrRequest.peek().litValue.toInt
//           val isWrite = dut.io.dmemReq.bits.isWrite.peek().litToBoolean
//           val data = dut.io.dmemReq.bits.dataRequest.peek().litValue.toInt

//           if (isWrite) {
//             mockMemory(addr) = data
//           } else {
//             // simulate memory response on next cycle
//             dut.io.dmemRes.valid.poke(true.B)
//             dut.io.dmemRes.bits.dataResponse.poke(mockMemory.getOrElse(addr, 0).U)
//           }
//         } else {
//           dut.io.dmemRes.valid.poke(false.B)
//           dut.io.dmemRes.bits.dataResponse.poke(0.U)
//         }
//       }

//       // STEP 1: simulate a write from memfetch
//       dut.io.dmemReq.ready.poke(true.B)

//       val testAddr = 4
//       val testData = 42

//       // poke internal memfetch signals
//       dut.mem_fetch_module.io.addr.poke(testAddr.U)
//       dut.mem_fetch_module.io.write_en.poke(true.B)
//       dut.mem_fetch_module.io.read_en.poke(false.B)
//       dut.clock.step()
//       simulateMemory()

//       // STEP 2: simulate a read from same addr
//       dut.mem_fetch_module.io.addr.poke(testAddr.U)
//       dut.mem_fetch_module.io.write_en.poke(false.B)
//       dut.mem_fetch_module.io.read_en.poke(true.B)

//       dut.clock.step()
//       simulateMemory()
//       dut.clock.step()

//       // STEP 3: check read_data inside Memfetch
//       val readVal = dut.mem_fetch_module.io.read_data.peek().litValue
//       assert(readVal == testData, s"Expected $testData but got $readVal")
//     }
//   }
// }
