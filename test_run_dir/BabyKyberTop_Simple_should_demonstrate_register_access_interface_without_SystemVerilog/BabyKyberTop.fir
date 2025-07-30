;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
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
    output io : {flip req : {flip ready : UInt<1>, valid : UInt<1>, bits : {addrRequest : UInt<32>, dataRequest : UInt<32>, activeByteLane : UInt<4>, isWrite : UInt<1>}}, rsp : {flip ready : UInt<1>, valid : UInt<1>, bits : {dataResponse : UInt<32>}}, flip enable : UInt<1>, flip key_enable : UInt<1>, flip encryption_enable : UInt<1>, flip decryption_enable : UInt<1>, key_done : UInt<1>, encryption_done : UInt<1>, decryption_done : UInt<1>}
    
    reg validReg : UInt<1>, clock with : (reset => (reset, UInt<1>("h00"))) @[BabyKyberTop.scala 26:25]
    io.rsp.valid <= validReg @[BabyKyberTop.scala 27:16]
    io.req.ready <= UInt<1>("h01") @[BabyKyberTop.scala 28:16]
    wire rdata : SInt<32> @[BabyKyberTop.scala 30:19]
    inst bkyber of Top @[BabyKyberTop.scala 33:22]
    bkyber.decryption_done is invalid
    bkyber.encryption_done is invalid
    bkyber.key_done is invalid
    bkyber.data_Resp is invalid
    bkyber.bytelane_Req is invalid
    bkyber.wen_Req is invalid
    bkyber.addr_Req is invalid
    bkyber.data_Req is invalid
    bkyber.decryption_enable is invalid
    bkyber.encryption_enable is invalid
    bkyber.key_enable is invalid
    bkyber.enable is invalid
    bkyber.rst_n is invalid
    bkyber.clk is invalid
    node _bkyber_io_clk_T = asUInt(clock) @[BabyKyberTop.scala 36:32]
    node _bkyber_io_clk_T_1 = bits(_bkyber_io_clk_T, 0, 0) @[BabyKyberTop.scala 36:34]
    bkyber.clk <= _bkyber_io_clk_T_1 @[BabyKyberTop.scala 36:17]
    node _bkyber_io_rst_n_T = bits(reset, 0, 0) @[BabyKyberTop.scala 37:35]
    node _bkyber_io_rst_n_T_1 = eq(_bkyber_io_rst_n_T, UInt<1>("h00")) @[BabyKyberTop.scala 37:22]
    bkyber.rst_n <= _bkyber_io_rst_n_T_1 @[BabyKyberTop.scala 37:19]
    bkyber.enable <= io.enable @[BabyKyberTop.scala 40:20]
    bkyber.key_enable <= io.key_enable @[BabyKyberTop.scala 41:24]
    bkyber.encryption_enable <= io.encryption_enable @[BabyKyberTop.scala 42:31]
    bkyber.decryption_enable <= io.decryption_enable @[BabyKyberTop.scala 43:31]
    bkyber.data_Req is invalid @[BabyKyberTop.scala 46:22]
    bkyber.addr_Req is invalid @[BabyKyberTop.scala 47:22]
    bkyber.wen_Req is invalid @[BabyKyberTop.scala 48:21]
    bkyber.bytelane_Req is invalid @[BabyKyberTop.scala 49:26]
    io.key_done <= bkyber.key_done @[BabyKyberTop.scala 50:15]
    io.encryption_done <= bkyber.encryption_done @[BabyKyberTop.scala 51:22]
    io.decryption_done <= bkyber.decryption_done @[BabyKyberTop.scala 52:22]
    node _T = and(io.req.valid, io.req.bits.isWrite) @[BabyKyberTop.scala 55:21]
    when _T : @[BabyKyberTop.scala 55:45]
      node _bkyber_io_data_Req_T = asSInt(io.req.bits.dataRequest) @[BabyKyberTop.scala 57:51]
      bkyber.data_Req <= _bkyber_io_data_Req_T @[BabyKyberTop.scala 57:24]
      node _bkyber_io_addr_Req_T = asSInt(io.req.bits.addrRequest) @[BabyKyberTop.scala 58:51]
      bkyber.addr_Req <= _bkyber_io_addr_Req_T @[BabyKyberTop.scala 58:24]
      bkyber.wen_Req <= io.req.bits.isWrite @[BabyKyberTop.scala 61:23]
      bkyber.bytelane_Req <= io.req.bits.activeByteLane @[BabyKyberTop.scala 62:28]
      rdata <= bkyber.data_Resp @[BabyKyberTop.scala 63:11]
      validReg <= UInt<1>("h01") @[BabyKyberTop.scala 64:14]
      skip @[BabyKyberTop.scala 55:45]
    else : @[BabyKyberTop.scala 65:52]
      node _T_1 = eq(io.req.bits.isWrite, UInt<1>("h00")) @[BabyKyberTop.scala 65:30]
      node _T_2 = and(io.req.valid, _T_1) @[BabyKyberTop.scala 65:27]
      when _T_2 : @[BabyKyberTop.scala 65:52]
        validReg <= UInt<1>("h01") @[BabyKyberTop.scala 67:14]
        bkyber.wen_Req <= UInt<1>("h00") @[BabyKyberTop.scala 68:23]
        node _bkyber_io_addr_Req_T_1 = asSInt(io.req.bits.addrRequest) @[BabyKyberTop.scala 69:47]
        bkyber.addr_Req <= _bkyber_io_addr_Req_T_1 @[BabyKyberTop.scala 69:20]
        rdata <= bkyber.data_Resp @[BabyKyberTop.scala 70:11]
        skip @[BabyKyberTop.scala 65:52]
      else : @[BabyKyberTop.scala 71:15]
        validReg <= UInt<1>("h00") @[BabyKyberTop.scala 72:14]
        rdata is invalid @[BabyKyberTop.scala 73:11]
        skip @[BabyKyberTop.scala 71:15]
    node _io_rsp_bits_dataResponse_T = asUInt(rdata) @[BabyKyberTop.scala 76:35]
    io.rsp.bits.dataResponse <= _io_rsp_bits_dataResponse_T @[BabyKyberTop.scala 76:26]
    
