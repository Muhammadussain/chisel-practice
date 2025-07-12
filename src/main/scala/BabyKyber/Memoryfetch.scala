package BabyKyber

import chisel3._
import chisel3.util._

class MemFetch extends Module {
  val io = IO(new Bundle {
    val addr        = Input(UInt(32.W))
    val write_en    = Input(Bool())
    val read_en     = Input(Bool())
    val write_data  = Input(UInt(32.W))
    val read_data   = Output(UInt(32.W))
  })

  // === All named registers ===
  // secretkey[2][4]
  val secretkey = Seq.fill(2)(Seq.fill(4)(RegInit(0.U(32.W))))
  // result[2][4]
  val result    = Seq.fill(2)(Seq.fill(4)(RegInit(0.U(32.W))))
  // public_key[2][4][4]
  val public_key = Seq.fill(2)(Seq.fill(4)(Seq.fill(4)(RegInit(0.U(32.W)))))
  // A_reg[4][4]
  val A_reg     = Seq.fill(4)(Seq.fill(4)(RegInit(0.U(32.W))))
  // s_reg[2][4]$
  val s_reg     = Seq.fill(2)(Seq.fill(4)(RegInit(0.U(32.W))))
  // e_reg[2][4]
  val e_reg     = Seq.fill(2)(Seq.fill(4)(RegInit(0.U(32.W))))
  // ciphertext[2][2][4]
  val ciphertext = Seq.fill(2)(Seq.fill(2)(Seq.fill(4)(RegInit(0.U(32.W)))))
  // r[2][4]
  val r         = Seq.fill(2)(Seq.fill(4)(RegInit(0.U(32.W))))
  // e1[2][4]
  val e1        = Seq.fill(2)(Seq.fill(4)(RegInit(0.U(32.W))))
  // e2[4]
  val e2        = Seq.fill(4)(RegInit(0.U(32.W)))
  // decimal_value
  val decimal_value = RegInit(0.U(32.W))
  // m_b (4 bits)
  val m_b       = RegInit(0.U(4.W))

  // === Address Map ===
  val read_data_reg = WireDefault(0.U(32.W))
  val addrWord = (io.addr >> 2).asUInt // Word address (32-bit aligned)

  // Write logic
  when(io.write_en) {
    switch(addrWord) {
      // secretkey[2][4]: addresses 0–7
      is(0.U)  { secretkey(0)(0) := io.write_data }
      is(1.U)  { secretkey(0)(1) := io.write_data }
      is(2.U)  { secretkey(0)(2) := io.write_data }
      is(3.U)  { secretkey(0)(3) := io.write_data }
      is(4.U)  { secretkey(1)(0) := io.write_data }
      is(5.U)  { secretkey(1)(1) := io.write_data }
      is(6.U)  { secretkey(1)(2) := io.write_data }
      is(7.U)  { secretkey(1)(3) := io.write_data }

      // result[2][4]: addresses 8–15
      is(8.U)  { result(0)(0) := io.write_data }
      is(9.U)  { result(0)(1) := io.write_data }
      is(10.U) { result(0)(2) := io.write_data }
      is(11.U) { result(0)(3) := io.write_data }
      is(12.U) { result(1)(0) := io.write_data }
      is(13.U) { result(1)(1) := io.write_data }
      is(14.U) { result(1)(2) := io.write_data }
      is(15.U) { result(1)(3) := io.write_data }

      // public_key[2][4][4]: addresses 16–47
      is(16.U) { public_key(0)(0)(0) := io.write_data }
      is(17.U) { public_key(0)(0)(1) := io.write_data }
      is(18.U) { public_key(0)(0)(2) := io.write_data }
      is(19.U) { public_key(0)(0)(3) := io.write_data }
      is(20.U) { public_key(0)(1)(0) := io.write_data }
      is(21.U) { public_key(0)(1)(1) := io.write_data }
      is(22.U) { public_key(0)(1)(2) := io.write_data }
      is(23.U) { public_key(0)(1)(3) := io.write_data }
      is(24.U) { public_key(0)(2)(0) := io.write_data }
      is(25.U) { public_key(0)(2)(1) := io.write_data }
      is(26.U) { public_key(0)(2)(2) := io.write_data }
      is(27.U) { public_key(0)(2)(3) := io.write_data }
      is(28.U) { public_key(0)(3)(0) := io.write_data }
      is(29.U) { public_key(0)(3)(1) := io.write_data }
      is(30.U) { public_key(0)(3)(2) := io.write_data }
      is(31.U) { public_key(0)(3)(3) := io.write_data }
      is(32.U) { public_key(1)(0)(0) := io.write_data }
      is(33.U) { public_key(1)(0)(1) := io.write_data }
      is(34.U) { public_key(1)(0)(2) := io.write_data }
      is(35.U) { public_key(1)(0)(3) := io.write_data }
      is(36.U) { public_key(1)(1)(0) := io.write_data }
      is(37.U) { public_key(1)(1)(1) := io.write_data }
      is(38.U) { public_key(1)(1)(2) := io.write_data }
      is(39.U) { public_key(1)(1)(3) := io.write_data }
      is(40.U) { public_key(1)(2)(0) := io.write_data }
      is(41.U) { public_key(1)(2)(1) := io.write_data }
      is(42.U) { public_key(1)(2)(2) := io.write_data }
      is(43.U) { public_key(1)(2)(3) := io.write_data }
      is(44.U) { public_key(1)(3)(0) := io.write_data }
      is(45.U) { public_key(1)(3)(1) := io.write_data }
      is(46.U) { public_key(1)(3)(2) := io.write_data }
      is(47.U) { public_key(1)(3)(3) := io.write_data }

      // A_reg[4][4]: addresses 48–63
      is(48.U) { A_reg(0)(0) := io.write_data }
      is(49.U) { A_reg(0)(1) := io.write_data }
      is(50.U) { A_reg(0)(2) := io.write_data }
      is(51.U) { A_reg(0)(3) := io.write_data }
      is(52.U) { A_reg(1)(0) := io.write_data }
      is(53.U) { A_reg(1)(1) := io.write_data }
      is(54.U) { A_reg(1)(2) := io.write_data }
      is(55.U) { A_reg(1)(3) := io.write_data }
      is(56.U) { A_reg(2)(0) := io.write_data }
      is(57.U) { A_reg(2)(1) := io.write_data }
      is(58.U) { A_reg(2)(2) := io.write_data }
      is(59.U) { A_reg(2)(3) := io.write_data }
      is(60.U) { A_reg(3)(0) := io.write_data }
      is(61.U) { A_reg(3)(1) := io.write_data }
      is(62.U) { A_reg(3)(2) := io.write_data }
      is(63.U) { A_reg(3)(3) := io.write_data }

      // s_reg[2][4]: addresses 64–71
      is(64.U) { s_reg(0)(0) := io.write_data }
      is(65.U) { s_reg(0)(1) := io.write_data }
      is(66.U) { s_reg(0)(2) := io.write_data }
      is(67.U) { s_reg(0)(3) := io.write_data }
      is(68.U) { s_reg(1)(0) := io.write_data }
      is(69.U) { s_reg(1)(1) := io.write_data }
      is(70.U) { s_reg(1)(2) := io.write_data }
      is(71.U) { s_reg(1)(3) := io.write_data }

      // e_reg[2][4]: addresses 72–79
      is(72.U) { e_reg(0)(0) := io.write_data }
      is(73.U) { e_reg(0)(1) := io.write_data }
      is(74.U) { e_reg(0)(2) := io.write_data }
      is(75.U) { e_reg(0)(3) := io.write_data }
      is(76.U) { e_reg(1)(0) := io.write_data }
      is(77.U) { e_reg(1)(1) := io.write_data }
      is(78.U) { e_reg(1)(2) := io.write_data }
      is(79.U) { e_reg(1)(3) := io.write_data }

      // ciphertext[2][2][4]: addresses 80–95
      is(80.U) { ciphertext(0)(0)(0) := io.write_data }
      is(81.U) { ciphertext(0)(0)(1) := io.write_data }
      is(82.U) { ciphertext(0)(0)(2) := io.write_data }
      is(83.U) { ciphertext(0)(0)(3) := io.write_data }
      is(84.U) { ciphertext(0)(1)(0) := io.write_data }
      is(85.U) { ciphertext(0)(1)(1) := io.write_data }
      is(86.U) { ciphertext(0)(1)(2) := io.write_data }
      is(87.U) { ciphertext(0)(1)(3) := io.write_data }
      is(88.U) { ciphertext(1)(0)(0) := io.write_data }
      is(89.U) { ciphertext(1)(0)(1) := io.write_data }
      is(90.U) { ciphertext(1)(0)(2) := io.write_data }
      is(91.U) { ciphertext(1)(0)(3) := io.write_data }
      is(92.U) { ciphertext(1)(1)(0) := io.write_data }
      is(93.U) { ciphertext(1)(1)(1) := io.write_data }
      is(94.U) { ciphertext(1)(1)(2) := io.write_data }
      is(95.U) { ciphertext(1)(1)(3) := io.write_data }

      // r[2][4]: addresses 96–103
      is(96.U)  { r(0)(0) := io.write_data }
      is(97.U)  { r(0)(1) := io.write_data }
      is(98.U)  { r(0)(2) := io.write_data }
      is(99.U)  { r(0)(3) := io.write_data }
      is(100.U) { r(1)(0) := io.write_data }
      is(101.U) { r(1)(1) := io.write_data }
      is(102.U) { r(1)(2) := io.write_data }
      is(103.U) { r(1)(3) := io.write_data }

      // e1[2][4]: addresses 104–111
      is(104.U) { e1(0)(0) := io.write_data }
      is(105.U) { e1(0)(1) := io.write_data }
      is(106.U) { e1(0)(2) := io.write_data }
      is(107.U) { e1(0)(3) := io.write_data }
      is(108.U) { e1(1)(0) := io.write_data }
      is(109.U) { e1(1)(1) := io.write_data }
      is(110.U) { e1(1)(2) := io.write_data }
      is(111.U) { e1(1)(3) := io.write_data }

      // e2[4]: addresses 112–115
      is(112.U) { e2(0) := io.write_data }
      is(113.U) { e2(1) := io.write_data }
      is(114.U) { e2(2) := io.write_data }
      is(115.U) { e2(3) := io.write_data }

      // decimal_value: address 116
      is(116.U) { decimal_value := io.write_data }
      // m_b: address 117 (4 bits)
      is(117.U) { m_b := io.write_data(3, 0) }
    }
  }

  // Read logic
  when(io.read_en) {
    switch(addrWord) {
      // secretkey[2][4]: addresses 0–7
      is(0.U)  { read_data_reg := secretkey(0)(0) }
      is(1.U)  { read_data_reg := secretkey(0)(1) }
      is(2.U)  { read_data_reg := secretkey(0)(2) }
      is(3.U)  { read_data_reg := secretkey(0)(3) }
      is(4.U)  { read_data_reg := secretkey(1)(0) }
      is(5.U)  { read_data_reg := secretkey(1)(1) }
      is(6.U)  { read_data_reg := secretkey(1)(2) }
      is(7.U)  { read_data_reg := secretkey(1)(3) }

      // result[2][4]: addresses 8–15
      is(8.U)  { read_data_reg := result(0)(0) }
      is(9.U)  { read_data_reg := result(0)(1) }
      is(10.U) { read_data_reg := result(0)(2) }
      is(11.U) { read_data_reg := result(0)(3) }
      is(12.U) { read_data_reg := result(1)(0) }
      is(13.U) { read_data_reg := result(1)(1) }
      is(14.U) { read_data_reg := result(1)(2) }
      is(15.U) { read_data_reg := result(1)(3) }

      // public_key[2][4][4]: addresses 16–47
      is(16.U) { read_data_reg := public_key(0)(0)(0) }
      is(17.U) { read_data_reg := public_key(0)(0)(1) }
      is(18.U) { read_data_reg := public_key(0)(0)(2) }
      is(19.U) { read_data_reg := public_key(0)(0)(3) }
      is(20.U) { read_data_reg := public_key(0)(1)(0) }
      is(21.U) { read_data_reg := public_key(0)(1)(1) }
      is(22.U) { read_data_reg := public_key(0)(1)(2) }
      is(23.U) { read_data_reg := public_key(0)(1)(3) }
      is(24.U) { read_data_reg := public_key(0)(2)(0) }
      is(25.U) { read_data_reg := public_key(0)(2)(1) }
      is(26.U) { read_data_reg := public_key(0)(2)(2) }
      is(27.U) { read_data_reg := public_key(0)(2)(3) }
      is(28.U) { read_data_reg := public_key(0)(3)(0) }
      is(29.U) { read_data_reg := public_key(0)(3)(1) }
      is(30.U) { read_data_reg := public_key(0)(3)(2) }
      is(31.U) { read_data_reg := public_key(0)(3)(3) }
      is(32.U) { read_data_reg := public_key(1)(0)(0) }
      is(33.U) { read_data_reg := public_key(1)(0)(1) }
      is(34.U) { read_data_reg := public_key(1)(0)(2) }
      is(35.U) { read_data_reg := public_key(1)(0)(3) }
      is(36.U) { read_data_reg := public_key(1)(1)(0) }
      is(37.U) { read_data_reg := public_key(1)(1)(1) }
      is(38.U) { read_data_reg := public_key(1)(1)(2) }
      is(39.U) { read_data_reg := public_key(1)(1)(3) }
      is(40.U) { read_data_reg := public_key(1)(2)(0) }
      is(41.U) { read_data_reg := public_key(1)(2)(1) }
      is(42.U) { read_data_reg := public_key(1)(2)(2) }
      is(43.U) { read_data_reg := public_key(1)(2)(3) }
      is(44.U) { read_data_reg := public_key(1)(3)(0) }
      is(45.U) { read_data_reg := public_key(1)(3)(1) }
      is(46.U) { read_data_reg := public_key(1)(3)(2) }
      is(47.U) { read_data_reg := public_key(1)(3)(3) }

      // A_reg[4][4]: addresses 48–63
      is(48.U) { read_data_reg := A_reg(0)(0) }
      is(49.U) { read_data_reg := A_reg(0)(1) }
      is(50.U) { read_data_reg := A_reg(0)(2) }
      is(51.U) { read_data_reg := A_reg(0)(3) }
      is(52.U) { read_data_reg := A_reg(1)(0) }
      is(53.U) { read_data_reg := A_reg(1)(1) }
      is(54.U) { read_data_reg := A_reg(1)(2) }
      is(55.U) { read_data_reg := A_reg(1)(3) }
      is(56.U) { read_data_reg := A_reg(2)(0) }
      is(57.U) { read_data_reg := A_reg(2)(1) }
      is(58.U) { read_data_reg := A_reg(2)(2) }
      is(59.U) { read_data_reg := A_reg(2)(3) }
      is(60.U) { read_data_reg := A_reg(3)(0) }
      is(61.U) { read_data_reg := A_reg(3)(1) }
      is(62.U) { read_data_reg := A_reg(3)(2) }
      is(63.U) { read_data_reg := A_reg(3)(3) }

      // s_reg[2][4]: addresses 64–71
      is(64.U) { read_data_reg := s_reg(0)(0) }
      is(65.U) { read_data_reg := s_reg(0)(1) }
      is(66.U) { read_data_reg := s_reg(0)(2) }
      is(67.U) { read_data_reg := s_reg(0)(3) }
      is(68.U) { read_data_reg := s_reg(1)(0) }
      is(69.U) { read_data_reg := s_reg(1)(1) }
      is(70.U) { read_data_reg := s_reg(1)(2) }
      is(71.U) { read_data_reg := s_reg(1)(3) }

      // e_reg[2][4]: addresses 72–79
      is(72.U) { read_data_reg := e_reg(0)(0) }
      is(73.U) { read_data_reg := e_reg(0)(1) }
      is(74.U) { read_data_reg := e_reg(0)(2) }
      is(75.U) { read_data_reg := e_reg(0)(3) }
      is(76.U) { read_data_reg := e_reg(1)(0) }
      is(77.U) { read_data_reg := e_reg(1)(1) }
      is(78.U) { read_data_reg := e_reg(1)(2) }
      is(79.U) { read_data_reg := e_reg(1)(3) }

      // ciphertext[2][2][4]: addresses 80–95
      is(80.U) { read_data_reg := ciphertext(0)(0)(0) }
      is(81.U) { read_data_reg := ciphertext(0)(0)(1) }
      is(82.U) { read_data_reg := ciphertext(0)(0)(2) }
      is(83.U) { read_data_reg := ciphertext(0)(0)(3) }
      is(84.U) { read_data_reg := ciphertext(0)(1)(0) }
      is(85.U) { read_data_reg := ciphertext(0)(1)(1) }
      is(86.U) { read_data_reg := ciphertext(0)(1)(2) }
      is(87.U) { read_data_reg := ciphertext(0)(1)(3) }
      is(88.U) { read_data_reg := ciphertext(1)(0)(0) }
      is(89.U) { read_data_reg := ciphertext(1)(0)(1) }
      is(90.U) { read_data_reg := ciphertext(1)(0)(2) }
      is(91.U) { read_data_reg := ciphertext(1)(0)(3) }
      is(92.U) { read_data_reg := ciphertext(1)(1)(0) }
      is(93.U) { read_data_reg := ciphertext(1)(1)(1) }
      is(94.U) { read_data_reg := ciphertext(1)(1)(2) }
      is(95.U) { read_data_reg := ciphertext(1)(1)(3) }

      // r[2][4]: addresses 96–103
      is(96.U)  { read_data_reg := r(0)(0) }
      is(97.U)  { read_data_reg := r(0)(1) }
      is(98.U)  { read_data_reg := r(0)(2) }
      is(99.U)  { read_data_reg := r(0)(3) }
      is(100.U) { read_data_reg := r(1)(0) }
      is(101.U) { read_data_reg := r(1)(1) }
      is(102.U) { read_data_reg := r(1)(2) }
      is(103.U) { read_data_reg := r(1)(3) }

      // e1[2][4]: addresses 104–111
      is(104.U) { read_data_reg := e1(0)(0) }
      is(105.U) { read_data_reg := e1(0)(1) }
      is(106.U) { read_data_reg := e1(0)(2) }
      is(107.U) { read_data_reg := e1(0)(3) }
      is(108.U) { read_data_reg := e1(1)(0) }
      is(109.U) { read_data_reg := e1(1)(1) }
      is(110.U) { read_data_reg := e1(1)(2) }
      is(111.U) { read_data_reg := e1(1)(3) }

      // e2[4]: addresses 112–115
      is(112.U) { read_data_reg := e2(0) }
      is(113.U) { read_data_reg := e2(1) }
      is(114.U) { read_data_reg := e2(2) }
      is(115.U) { read_data_reg := e2(3) }

      // decimal_value: address 116
      is(116.U) { read_data_reg := decimal_value }
      // m_b: address 117 (extend 4-bit to 32-bit)
      is(117.U) { read_data_reg := m_b }
    }
  }

  io.read_data := read_data_reg
}

// Object to generate Verilog
object MemFetch extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new MemFetch, Array("--target-dir", "generated"))
}
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
