package BabyKyber

import chisel3._
import chisel3.util._

class MemFetch extends Module {
  val io = IO(new Bundle {
    val addr = Input(UInt(32.W))
    val writeData = Input(UInt(32.W))
    val memRead = Input(Bool())
    val memWrite = Input(Bool())
    val readData = Output(UInt(32.W))
  })

  // Define the memory arrays
  val secretkey = RegInit(VecInit(Seq.fill(2)(VecInit(Seq.fill(4)(0.U(32.W))))))
  val result = RegInit(VecInit(Seq.fill(2)(VecInit(Seq.fill(4)(0.U(32.W))))))
  val public_key = RegInit(VecInit(Seq.fill(2)(VecInit(Seq.fill(4)(VecInit(Seq.fill(4)(0.U(32.W))))))))
  val A_reg = RegInit(VecInit(Seq.fill(4)(VecInit(Seq.fill(4)(0.U(32.W))))))
  val s_reg = RegInit(VecInit(Seq.fill(2)(VecInit(Seq.fill(4)(0.U(32.W))))))
  val e_reg = RegInit(VecInit(Seq.fill(2)(VecInit(Seq.fill(4)(0.U(32.W))))))
  val ciphertext = RegInit(VecInit(Seq.fill(2)(VecInit(Seq.fill(2)(VecInit(Seq.fill(4)(0.U(32.W))))))))
  val r = RegInit(VecInit(Seq.fill(2)(VecInit(Seq.fill(4)(0.U(32.W))))))
  val e1 = RegInit(VecInit(Seq.fill(2)(VecInit(Seq.fill(4)(0.U(32.W))))))
  val e2 = RegInit(VecInit(Seq.fill(4)(0.U(32.W))))
  val decimal_value = RegInit(0.U(32.W))
  val m_b = RegInit(0.U(4.W)) // 4-bit register

  // Convert byte address to word index: (addr - 0x300000) / 4
  val addrWord = ((io.addr - "h300000".U) >> 2).asUInt
  io.readData := 0.U

  when(io.memWrite) {
    switch(addrWord) {
      // secretkey[2][4]: 0x300000 to 0x30001C
      is(0.U)  { secretkey(0)(0) := io.writeData }
      is(1.U)  { secretkey(0)(1) := io.writeData }
      is(2.U)  { secretkey(0)(2) := io.writeData }
      is(3.U)  { secretkey(0)(3) := io.writeData }
      is(4.U)  { secretkey(1)(0) := io.writeData }
      is(5.U)  { secretkey(1)(1) := io.writeData }
      is(6.U)  { secretkey(1)(2) := io.writeData }
      is(7.U)  { secretkey(1)(3) := io.writeData }

      // result[2][4]: 0x300020 to 0x30003C
      is(8.U)  { result(0)(0) := io.writeData }
      is(9.U)  { result(0)(1) := io.writeData }
      is(10.U) { result(0)(2) := io.writeData }
      is(11.U) { result(0)(3) := io.writeData }
      is(12.U) { result(1)(0) := io.writeData }
      is(13.U) { result(1)(1) := io.writeData }
      is(14.U) { result(1)(2) := io.writeData }
      is(15.U) { result(1)(3) := io.writeData }

      // public_key[2][4][4]: 0x300040 to 0x3000BC
      is(16.U)  { public_key(0)(0)(0) := io.writeData }
      is(17.U)  { public_key(0)(0)(1) := io.writeData }
      is(18.U)  { public_key(0)(0)(2) := io.writeData }
      is(19.U)  { public_key(0)(0)(3) := io.writeData }
      is(20.U)  { public_key(0)(1)(0) := io.writeData }
      is(21.U)  { public_key(0)(1)(1) := io.writeData }
      is(22.U)  { public_key(0)(1)(2) := io.writeData }
      is(23.U)  { public_key(0)(1)(3) := io.writeData }
      is(24.U)  { public_key(0)(2)(0) := io.writeData }
      is(25.U)  { public_key(0)(2)(1) := io.writeData }
      is(26.U)  { public_key(0)(2)(2) := io.writeData }
      is(27.U)  { public_key(0)(2)(3) := io.writeData }
      is(28.U)  { public_key(0)(3)(0) := io.writeData }
      is(29.U)  { public_key(0)(3)(1) := io.writeData }
      is(30.U)  { public_key(0)(3)(2) := io.writeData }
      is(31.U)  { public_key(0)(3)(3) := io.writeData }
      is(32.U)  { public_key(1)(0)(0) := io.writeData }
      is(33.U)  { public_key(1)(0)(1) := io.writeData }
      is(34.U)  { public_key(1)(0)(2) := io.writeData }
      is(35.U)  { public_key(1)(0)(3) := io.writeData }
      is(36.U)  { public_key(1)(1)(0) := io.writeData }
      is(37.U)  { public_key(1)(1)(1) := io.writeData }
      is(38.U)  { public_key(1)(1)(2) := io.writeData }
      is(39.U)  { public_key(1)(1)(3) := io.writeData }
      is(40.U)  { public_key(1)(2)(0) := io.writeData }
      is(41.U)  { public_key(1)(2)(1) := io.writeData }
      is(42.U)  { public_key(1)(2)(2) := io.writeData }
      is(43.U)  { public_key(1)(2)(3) := io.writeData }
      is(44.U)  { public_key(1)(3)(0) := io.writeData }
      is(45.U)  { public_key(1)(3)(1) := io.writeData }
      is(46.U)  { public_key(1)(3)(2) := io.writeData }
      is(47.U)  { public_key(1)(3)(3) := io.writeData }

      // A_reg[4][4]: 0x3000C0 to 0x3000FC
      is(48.U)  { A_reg(0)(0) := io.writeData }
      is(49.U)  { A_reg(0)(1) := io.writeData }
      is(50.U)  { A_reg(0)(2) := io.writeData }
      is(51.U)  { A_reg(0)(3) := io.writeData }
      is(52.U)  { A_reg(1)(0) := io.writeData }
      is(53.U)  { A_reg(1)(1) := io.writeData }
      is(54.U)  { A_reg(1)(2) := io.writeData }
      is(55.U)  { A_reg(1)(3) := io.writeData }
      is(56.U)  { A_reg(2)(0) := io.writeData }
      is(57.U)  { A_reg(2)(1) := io.writeData }
      is(58.U)  { A_reg(2)(2) := io.writeData }
      is(59.U)  { A_reg(2)(3) := io.writeData }
      is(60.U)  { A_reg(3)(0) := io.writeData }
      is(61.U)  { A_reg(3)(1) := io.writeData }
      is(62.U)  { A_reg(3)(2) := io.writeData }
      is(63.U)  { A_reg(3)(3) := io.writeData }

      // s_reg[2][4]: 0x300100 to 0x30011C
      is(64.U)  { s_reg(0)(0) := io.writeData }
      is(65.U)  { s_reg(0)(1) := io.writeData }
      is(66.U)  { s_reg(0)(2) := io.writeData }
      is(67.U)  { s_reg(0)(3) := io.writeData }
      is(68.U)  { s_reg(1)(0) := io.writeData }
      is(69.U)  { s_reg(1)(1) := io.writeData }
      is(70.U)  { s_reg(1)(2) := io.writeData }
      is(71.U)  { s_reg(1)(3) := io.writeData }

      // e_reg[2][4]: 0x300120 to 0x30013C
      is(72.U)  { e_reg(0)(0) := io.writeData }
      is(73.U)  { e_reg(0)(1) := io.writeData }
      is(74.U)  { e_reg(0)(2) := io.writeData }
      is(75.U)  { e_reg(0)(3) := io.writeData }
      is(76.U)  { e_reg(1)(0) := io.writeData }
      is(77.U)  { e_reg(1)(1) := io.writeData }
      is(78.U)  { e_reg(1)(2) := io.writeData }
      is(79.U)  { e_reg(1)(3) := io.writeData }

      // ciphertext[2][2][4]: 0x300140 to 0x30017C
      is(80.U)  { ciphertext(0)(0)(0) := io.writeData }
      is(81.U)  { ciphertext(0)(0)(1) := io.writeData }
      is(82.U)  { ciphertext(0)(0)(2) := io.writeData }
      is(83.U)  { ciphertext(0)(0)(3) := io.writeData }
      is(84.U)  { ciphertext(0)(1)(0) := io.writeData }
      is(85.U)  { ciphertext(0)(1)(1) := io.writeData }
      is(86.U)  { ciphertext(0)(1)(2) := io.writeData }
      is(87.U)  { ciphertext(0)(1)(3) := io.writeData }
      is(88.U)  { ciphertext(1)(0)(0) := io.writeData }
      is(89.U)  { ciphertext(1)(0)(1) := io.writeData }
      is(90.U)  { ciphertext(1)(0)(2) := io.writeData }
      is(91.U)  { ciphertext(1)(0)(3) := io.writeData }
      is(92.U)  { ciphertext(1)(1)(0) := io.writeData }
      is(93.U)  { ciphertext(1)(1)(1) := io.writeData }
      is(94.U)  { ciphertext(1)(1)(2) := io.writeData }
      is(95.U)  { ciphertext(1)(1)(3) := io.writeData }

      // r[2][4]: 0x300180 to 0x30019C
      is(96.U)  { r(0)(0) := io.writeData }
      is(97.U)  { r(0)(1) := io.writeData }
      is(98.U)  { r(0)(2) := io.writeData }
      is(99.U)  { r(0)(3) := io.writeData }
      is(100.U) { r(1)(0) := io.writeData }
      is(101.U) { r(1)(1) := io.writeData }
      is(102.U) { r(1)(2) := io.writeData }
      is(103.U) { r(1)(3) := io.writeData }

      // e1[2][4]: 0x3001A0 to 0x3001BC
      is(104.U) { e1(0)(0) := io.writeData }
      is(105.U) { e1(0)(1) := io.writeData }
      is(106.U) { e1(0)(2) := io.writeData }
      is(107.U) { e1(0)(3) := io.writeData }
      is(108.U) { e1(1)(0) := io.writeData }
      is(109.U) { e1(1)(1) := io.writeData }
      is(110.U) { e1(1)(2) := io.writeData }
      is(111.U) { e1(1)(3) := io.writeData }

      // e2[4]: 0x3001C0 to 0x3001CC
      is(112.U) { e2(0) := io.writeData }
      is(113.U) { e2(1) := io.writeData }
      is(114.U) { e2(2) := io.writeData }
      is(115.U) { e2(3) := io.writeData }

      // decimal_value: 0x3001D0
      is(116.U) { decimal_value := io.writeData }

      // m_b: 0x3001D4
      is(117.U) { m_b := io.writeData(3, 0) }
    }
  }

  when(io.memRead) {
    switch(addrWord) {
      // secretkey[2][4]: 0x300000 to 0x30001C
      is(0.U)  { io.readData := secretkey(0)(0) }
      is(1.U)  { io.readData := secretkey(0)(1) }
      is(2.U)  { io.readData := secretkey(0)(2) }
      is(3.U)  { io.readData := secretkey(0)(3) }
      is(4.U)  { io.readData := secretkey(1)(0) }
      is(5.U)  { io.readData := secretkey(1)(1) }
      is(6.U)  { io.readData := secretkey(1)(2) }
      is(7.U)  { io.readData := secretkey(1)(3) }

      // result[2][4]: 0x300020 to 0x30003C
      is(8.U)  { io.readData := result(0)(0) }
      is(9.U)  { io.readData := result(0)(1) }
      is(10.U) { io.readData := result(0)(2) }
      is(11.U) { io.readData := result(0)(3) }
      is(12.U) { io.readData := result(1)(0) }
      is(13.U) { io.readData := result(1)(1) }
      is(14.U) { io.readData := result(1)(2) }
      is(15.U) { io.readData := result(1)(3) }

      // public_key[2][4][4]: 0x300040 to 0x3000BC
      is(16.U)  { io.readData := public_key(0)(0)(0) }
      is(17.U)  { io.readData := public_key(0)(0)(1) }
      is(18.U)  { io.readData := public_key(0)(0)(2) }
      is(19.U)  { io.readData := public_key(0)(0)(3) }
      is(20.U)  { io.readData := public_key(0)(1)(0) }
      is(21.U)  { io.readData := public_key(0)(1)(1) }
      is(22.U)  { io.readData := public_key(0)(1)(2) }
      is(23.U)  { io.readData := public_key(0)(1)(3) }
      is(24.U)  { io.readData := public_key(0)(2)(0) }
      is(25.U)  { io.readData := public_key(0)(2)(1) }
      is(26.U)  { io.readData := public_key(0)(2)(2) }
      is(27.U)  { io.readData := public_key(0)(2)(3) }
      is(28.U)  { io.readData := public_key(0)(3)(0) }
      is(29.U)  { io.readData := public_key(0)(3)(1) }
      is(30.U)  { io.readData := public_key(0)(3)(2) }
      is(31.U)  { io.readData := public_key(0)(3)(3) }
      is(32.U)  { io.readData := public_key(1)(0)(0) }
      is(33.U)  { io.readData := public_key(1)(0)(1) }
      is(34.U)  { io.readData := public_key(1)(0)(2) }
      is(35.U)  { io.readData := public_key(1)(0)(3) }
      is(36.U)  { io.readData := public_key(1)(1)(0) }
      is(37.U)  { io.readData := public_key(1)(1)(1) }
      is(38.U)  { io.readData := public_key(1)(1)(2) }
      is(39.U)  { io.readData := public_key(1)(1)(3) }
      is(40.U)  { io.readData := public_key(1)(2)(0) }
      is(41.U)  { io.readData := public_key(1)(2)(1) }
      is(42.U)  { io.readData := public_key(1)(2)(2) }
      is(43.U)  { io.readData := public_key(1)(2)(3) }
      is(44.U)  { io.readData := public_key(1)(3)(0) }
      is(45.U)  { io.readData := public_key(1)(3)(1) }
      is(46.U)  { io.readData := public_key(1)(3)(2) }
      is(47.U)  { io.readData := public_key(1)(3)(3) }

      // A_reg[4][4]: 0x3000C0 to 0x3000FC
      is(48.U)  { io.readData := A_reg(0)(0) }
      is(49.U)  { io.readData := A_reg(0)(1) }
      is(50.U)  { io.readData := A_reg(0)(2) }
      is(51.U)  { io.readData := A_reg(0)(3) }
      is(52.U)  { io.readData := A_reg(1)(0) }
      is(53.U)  { io.readData := A_reg(1)(1) }
      is(54.U)  { io.readData := A_reg(1)(2) }
      is(55.U)  { io.readData := A_reg(1)(3) }
      is(56.U)  { io.readData := A_reg(2)(0) }
      is(57.U)  { io.readData := A_reg(2)(1) }
      is(58.U)  { io.readData := A_reg(2)(2) }
      is(59.U)  { io.readData := A_reg(2)(3) }
      is(60.U)  { io.readData := A_reg(3)(0) }
      is(61.U)  { io.readData := A_reg(3)(1) }
      is(62.U)  { io.readData := A_reg(3)(2) }
      is(63.U)  { io.readData := A_reg(3)(3) }

      // s_reg[2][4]: 0x300100 to 0x30011C
      is(64.U)  { io.readData := s_reg(0)(0) }
      is(65.U)  { io.readData := s_reg(0)(1) }
      is(66.U)  { io.readData := s_reg(0)(2) }
      is(67.U)  { io.readData := s_reg(0)(3) }
      is(68.U)  { io.readData := s_reg(1)(0) }
      is(69.U)  { io.readData := s_reg(1)(1) }
      is(70.U)  { io.readData := s_reg(1)(2) }
      is(71.U)  { io.readData := s_reg(1)(3) }

      // e_reg[2][4]: 0x300120 to 0x30013C
      is(72.U)  { io.readData := e_reg(0)(0) }
      is(73.U)  { io.readData := e_reg(0)(1) }
      is(74.U)  { io.readData := e_reg(0)(2) }
      is(75.U)  { io.readData := e_reg(0)(3) }
      is(76.U)  { io.readData := e_reg(1)(0) }
      is(77.U)  { io.readData := e_reg(1)(1) }
      is(78.U)  { io.readData := e_reg(1)(2) }
      is(79.U)  { io.readData := e_reg(1)(3) }

      // ciphertext[2][2][4]: 0x300140 to 0x30017C
      is(80.U)  { io.readData := ciphertext(0)(0)(0) }
      is(81.U)  { io.readData := ciphertext(0)(0)(1) }
      is(82.U)  { io.readData := ciphertext(0)(0)(2) }
      is(83.U)  { io.readData := ciphertext(0)(0)(3) }
      is(84.U)  { io.readData := ciphertext(0)(1)(0) }
      is(85.U)  { io.readData := ciphertext(0)(1)(1) }
      is(86.U)  { io.readData := ciphertext(0)(1)(2) }
      is(87.U)  { io.readData := ciphertext(0)(1)(3) }
      is(88.U)  { io.readData := ciphertext(1)(0)(0) }
      is(89.U)  { io.readData := ciphertext(1)(0)(1) }
      is(90.U)  { io.readData := ciphertext(1)(0)(2) }
      is(91.U)  { io.readData := ciphertext(1)(0)(3) }
      is(92.U)  { io.readData := ciphertext(1)(1)(0) }
      is(93.U)  { io.readData := ciphertext(1)(1)(1) }
      is(94.U)  { io.readData := ciphertext(1)(1)(2) }
      is(95.U)  { io.readData := ciphertext(1)(1)(3) }

      // r[2][4]: 0x300180 to 0x30019C
      is(96.U)  { io.readData := r(0)(0) }
      is(97.U)  { io.readData := r(0)(1) }
      is(98.U)  { io.readData := r(0)(2) }
      is(99.U)  { io.readData := r(0)(3) }
      is(100.U) { io.readData := r(1)(0) }
      is(101.U) { io.readData := r(1)(1) }
      is(102.U) { io.readData := r(1)(2) }
      is(103.U) { io.readData := r(1)(3) }

      // e1[2][4]: 0x3001A0 to 0x3001BC
      is(104.U) { io.readData := e1(0)(0) }
      is(105.U) { io.readData := e1(0)(1) }
      is(106.U) { io.readData := e1(0)(2) }
      is(107.U) { io.readData := e1(0)(3) }
      is(108.U) { io.readData := e1(1)(0) }
      is(109.U) { io.readData := e1(1)(1) }
      is(110.U) { io.readData := e1(1)(2) }
      is(111.U) { io.readData := e1(1)(3) }

      // e2[4]: 0x3001C0 to 0x3001CC
      is(112.U) { io.readData := e2(0) }
      is(113.U) { io.readData := e2(1) }
      is(114.U) { io.readData := e2(2) }
      is(115.U) { io.readData := e2(3) }

      // decimal_value: 0x3001D0
      is(116.U) { io.readData := decimal_value }

      // m_b: 0x3001D4
      is(117.U) { io.readData := m_b }
    }
  }
}

// Object to generate Verilog
object MemFetch extends App {
  (new chisel3.stage.ChiselStage).emitVerilog(new MemFetch, Array("--target-dir", "generated"))
}