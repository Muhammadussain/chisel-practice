// package BabyKyber

// import chisel3._
// import chisel3.util._

// class MemFetch extends Module {
//   val io = IO(new Bundle {
//     val addr        = Input(UInt(32.W))
//     val write_en    = Input(Bool())
//     val read_en     = Input(Bool())
//     val write_data  = Input(UInt(32.W))
//     val read_data   = Output(UInt(32.W))

//     val dccmReq     = Decoupled(new RequestIO)
//     val dccmRsp     = Flipped(Decoupled(new ResponseIO))
//   })

//   io.dccmRsp.ready := true.B

//   io.dccmReq.valid := true.B
//   io.dccmReq.bits.activeByteLane := "b1111".U   
//   io.dccmReq.bits.isWrite := io.write_en
//   io.dccmReq.bits.addrRequest := ((io.addr.asUInt & "h00001fff".U) >> 2)
//   io.dccmReq.bits.dataRequest := Mux(io.write_en, io.write_data, 0.U)

 
//   val read_data_reg = RegInit(0.U(32.W))  

//   when(io.dccmRsp.valid && io.read_en) {
//     read_data_reg := io.dccmRsp.bits.dataResponse
//   }

//   io.read_data := read_data_reg
// }
