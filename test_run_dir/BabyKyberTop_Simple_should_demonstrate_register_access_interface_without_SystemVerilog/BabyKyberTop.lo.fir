circuit BabyKyberTop :
  extmodule Top :
    input clk : UInt<1>
    input rst_n : UInt<1>
    input enable : UInt<1>
    input key_enable : UInt<1>
    input encryption_enable : UInt<1>
    input decryption_enable : UInt<1>
    input data_Req : SInt<32>
    input addr_Req : SInt<32>
    input wen_Req : UInt<1>
    input bytelane_Req : UInt<8>
    output data_Resp : SInt<32>
    output key_done : UInt<1>
    output encryption_done : UInt<1>
    output decryption_done : UInt<1>
    defname = Top

  module BabyKyberTop :
    input clock : Clock
    input reset : UInt<1>
    output io_req_ready : UInt<1>
    input io_req_valid : UInt<1>
    input io_req_bits_addrRequest : UInt<32>
    input io_req_bits_dataRequest : UInt<32>
    input io_req_bits_activeByteLane : UInt<4>
    input io_req_bits_isWrite : UInt<1>
    input io_rsp_ready : UInt<1>
    output io_rsp_valid : UInt<1>
    output io_rsp_bits_dataResponse : UInt<32>
    input io_enable : UInt<1>
    input io_key_enable : UInt<1>
    input io_encryption_enable : UInt<1>
    input io_decryption_enable : UInt<1>
    output io_key_done : UInt<1>
    output io_encryption_done : UInt<1>
    output io_decryption_done : UInt<1>

    inst bkyber of Top @[BabyKyberTop.scala 33:22]
    reg validReg : UInt<1>, clock with :
      reset => (UInt<1>("h0"), validReg) @[BabyKyberTop.scala 26:25]
    node _bkyber_io_clk_T = asUInt(clock) @[BabyKyberTop.scala 36:32]
    node _bkyber_io_clk_T_1 = bits(_bkyber_io_clk_T, 0, 0) @[BabyKyberTop.scala 36:34]
    node _bkyber_io_rst_n_T = bits(reset, 0, 0) @[BabyKyberTop.scala 37:35]
    node _bkyber_io_rst_n_T_1 = eq(_bkyber_io_rst_n_T, UInt<1>("h0")) @[BabyKyberTop.scala 37:22]
    node _T = and(io_req_valid, io_req_bits_isWrite) @[BabyKyberTop.scala 55:21]
    node _bkyber_io_data_Req_T = asSInt(io_req_bits_dataRequest) @[BabyKyberTop.scala 57:51]
    node _bkyber_io_addr_Req_T = asSInt(io_req_bits_addrRequest) @[BabyKyberTop.scala 58:51]
    node _T_1 = eq(io_req_bits_isWrite, UInt<1>("h0")) @[BabyKyberTop.scala 65:30]
    node _T_2 = and(io_req_valid, _T_1) @[BabyKyberTop.scala 65:27]
    node _bkyber_io_addr_Req_T_1 = asSInt(io_req_bits_addrRequest) @[BabyKyberTop.scala 69:47]
    node _GEN_0 = mux(_T_2, UInt<1>("h1"), UInt<1>("h0")) @[BabyKyberTop.scala 65:52 BabyKyberTop.scala 67:14 BabyKyberTop.scala 72:14]
    node _GEN_1 = validif(_T_2, UInt<1>("h0")) @[BabyKyberTop.scala 65:52 BabyKyberTop.scala 68:23]
    node _GEN_2 = validif(_T_2, _bkyber_io_addr_Req_T_1) @[BabyKyberTop.scala 65:52 BabyKyberTop.scala 69:20]
    node _GEN_3 = validif(_T_2, bkyber.data_Resp) @[BabyKyberTop.scala 65:52 BabyKyberTop.scala 70:11]
    node _GEN_4 = validif(_T, _bkyber_io_data_Req_T) @[BabyKyberTop.scala 55:45 BabyKyberTop.scala 57:24]
    node _GEN_5 = mux(_T, _bkyber_io_addr_Req_T, _GEN_2) @[BabyKyberTop.scala 55:45 BabyKyberTop.scala 58:24]
    node _GEN_6 = mux(_T, io_req_bits_isWrite, _GEN_1) @[BabyKyberTop.scala 55:45 BabyKyberTop.scala 61:23]
    node _GEN_7 = validif(_T, io_req_bits_activeByteLane) @[BabyKyberTop.scala 55:45 BabyKyberTop.scala 62:28]
    node _GEN_8 = mux(_T, bkyber.data_Resp, _GEN_3) @[BabyKyberTop.scala 55:45 BabyKyberTop.scala 63:11]
    node _GEN_9 = mux(_T, UInt<1>("h1"), _GEN_0) @[BabyKyberTop.scala 55:45 BabyKyberTop.scala 64:14]
    node rdata = _GEN_8 @[BabyKyberTop.scala 30:19]
    node _io_rsp_bits_dataResponse_T = asUInt(rdata) @[BabyKyberTop.scala 76:35]
    io_req_ready <= UInt<1>("h1") @[BabyKyberTop.scala 28:16]
    io_rsp_valid <= validReg @[BabyKyberTop.scala 27:16]
    io_rsp_bits_dataResponse <= _io_rsp_bits_dataResponse_T @[BabyKyberTop.scala 76:26]
    io_key_done <= bkyber.key_done @[BabyKyberTop.scala 50:15]
    io_encryption_done <= bkyber.encryption_done @[BabyKyberTop.scala 51:22]
    io_decryption_done <= bkyber.decryption_done @[BabyKyberTop.scala 52:22]
    validReg <= mux(reset, UInt<1>("h0"), _GEN_9) @[BabyKyberTop.scala 26:25 BabyKyberTop.scala 26:25]
    bkyber.clk <= _bkyber_io_clk_T_1 @[BabyKyberTop.scala 36:17]
    bkyber.rst_n <= _bkyber_io_rst_n_T_1 @[BabyKyberTop.scala 37:19]
    bkyber.enable <= io_enable @[BabyKyberTop.scala 40:20]
    bkyber.key_enable <= io_key_enable @[BabyKyberTop.scala 41:24]
    bkyber.encryption_enable <= io_encryption_enable @[BabyKyberTop.scala 42:31]
    bkyber.decryption_enable <= io_decryption_enable @[BabyKyberTop.scala 43:31]
    bkyber.data_Req <= _GEN_4
    bkyber.addr_Req <= _GEN_5
    bkyber.wen_Req <= _GEN_6
    bkyber.bytelane_Req <= _GEN_7
