// package BabyKyber

// import chisel3._
// import chisel3.util._
// class kyber extends Module {
//   val io = IO(new Bundle {
//     val addr        = Input(UInt(32.W))
//     val write_en    = Input(Bool())
//     val read_en     = Input(Bool())
//     val write_data  = Input(UInt(32.W))
//     val read_data   = Output(UInt(32.W))

//     val dmemReq     = Decoupled(new RequestIO)
//     val dmemRes     = Flipped(Decoupled(new ResponseIO))
//   })

//   val mem_fetch_module = Module(new MemFetch)

//   // Wire external signals to internal module
//   mem_fetch_module.io.addr       := io.addr
//   mem_fetch_module.io.write_en   := io.write_en
//   mem_fetch_module.io.read_en    := io.read_en
//   mem_fetch_module.io.write_data := io.write_data
//   io.read_data                   := mem_fetch_module.io.read_data

//   // Memory channel connection
//   io.dmemReq <> mem_fetch_module.io.dccmReq
//   mem_fetch_module.io.dccmRsp <> io.dmemRes
// }

// // package BabyKyber

// // import chisel3._
// // import chisel3.util._
// // import chisel3.experimental._
// // import chisel3.util.experimental._

// // class kyber extends Module{

// //     val io=(new Bundle{
// //     val dmemReq=Decoupled(new RequestIO)
// //     val dmemRes=Flipped(Decoupled(new ResponseIO))

// //     })
// //     val mem_fetch_module = Module(new MemFetch)
// //     val MemoryFetch        = mem_fetch_module.io

// //      MemoryFetch.addr:= DontCare
// //      MemoryFetch.read_en:= DontCare
// //      MemoryFetch.write_en:= DontCare

// //     io.dmemReq<>MemoryFetch.dccmReq
// //     MemoryFetch.dccmRsp <> io.dmemRes   // ✅ correct name


 

// // }
