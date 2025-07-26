;buildInfoPackage: chisel3, version: 3.4.3, scalaVersion: 2.12.12, sbtVersion: 1.3.10
circuit kyber : 
  module MemFetch : 
    input clock : Clock
    input reset : Reset
    output io : {flip addr : UInt<32>, flip write_en : UInt<1>, flip read_en : UInt<1>, flip write_data : UInt<32>, read_data : UInt<32>, dccmReq : {flip ready : UInt<1>, valid : UInt<1>, bits : {addrRequest : UInt<32>, dataRequest : UInt<32>, activeByteLane : UInt<4>, isWrite : UInt<1>}}, flip dccmRsp : {flip ready : UInt<1>, valid : UInt<1>, bits : {dataResponse : UInt<32>}}}
    
    io.dccmRsp.ready <= UInt<1>("h01") @[Memoryfetch.scala 18:20]
    io.dccmReq.valid <= UInt<1>("h01") @[Memoryfetch.scala 20:20]
    io.dccmReq.bits.activeByteLane <= UInt<4>("h0f") @[Memoryfetch.scala 21:34]
    io.dccmReq.bits.isWrite <= io.write_en @[Memoryfetch.scala 22:27]
    node _io_dccmReq_bits_addrRequest_T = and(io.addr, UInt<13>("h01fff")) @[Memoryfetch.scala 23:51]
    node _io_dccmReq_bits_addrRequest_T_1 = shr(_io_dccmReq_bits_addrRequest_T, 2) @[Memoryfetch.scala 23:68]
    io.dccmReq.bits.addrRequest <= _io_dccmReq_bits_addrRequest_T_1 @[Memoryfetch.scala 23:31]
    node _io_dccmReq_bits_dataRequest_T = mux(io.write_en, io.write_data, UInt<1>("h00")) @[Memoryfetch.scala 24:37]
    io.dccmReq.bits.dataRequest <= _io_dccmReq_bits_dataRequest_T @[Memoryfetch.scala 24:31]
    reg read_data_reg : UInt<32>, clock with : (reset => (reset, UInt<32>("h00"))) @[Memoryfetch.scala 27:30]
    node _T = and(io.dccmRsp.valid, io.read_en) @[Memoryfetch.scala 29:25]
    when _T : @[Memoryfetch.scala 29:40]
      read_data_reg <= io.dccmRsp.bits.dataResponse @[Memoryfetch.scala 30:19]
      skip @[Memoryfetch.scala 29:40]
    io.read_data <= read_data_reg @[Memoryfetch.scala 33:16]
    
  module kyber : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip addr : UInt<32>, flip write_en : UInt<1>, flip read_en : UInt<1>, flip write_data : UInt<32>, read_data : UInt<32>, dmemReq : {flip ready : UInt<1>, valid : UInt<1>, bits : {addrRequest : UInt<32>, dataRequest : UInt<32>, activeByteLane : UInt<4>, isWrite : UInt<1>}}, flip dmemRes : {flip ready : UInt<1>, valid : UInt<1>, bits : {dataResponse : UInt<32>}}}
    
    inst mem_fetch_module of MemFetch @[kyberconfiguraiton.scala 17:32]
    mem_fetch_module.clock <= clock
    mem_fetch_module.reset <= reset
    mem_fetch_module.io.addr <= io.addr @[kyberconfiguraiton.scala 20:34]
    mem_fetch_module.io.write_en <= io.write_en @[kyberconfiguraiton.scala 21:34]
    mem_fetch_module.io.read_en <= io.read_en @[kyberconfiguraiton.scala 22:34]
    mem_fetch_module.io.write_data <= io.write_data @[kyberconfiguraiton.scala 23:34]
    io.read_data <= mem_fetch_module.io.read_data @[kyberconfiguraiton.scala 24:34]
    io.dmemReq.bits.isWrite <= mem_fetch_module.io.dccmReq.bits.isWrite @[kyberconfiguraiton.scala 27:14]
    io.dmemReq.bits.activeByteLane <= mem_fetch_module.io.dccmReq.bits.activeByteLane @[kyberconfiguraiton.scala 27:14]
    io.dmemReq.bits.dataRequest <= mem_fetch_module.io.dccmReq.bits.dataRequest @[kyberconfiguraiton.scala 27:14]
    io.dmemReq.bits.addrRequest <= mem_fetch_module.io.dccmReq.bits.addrRequest @[kyberconfiguraiton.scala 27:14]
    io.dmemReq.valid <= mem_fetch_module.io.dccmReq.valid @[kyberconfiguraiton.scala 27:14]
    mem_fetch_module.io.dccmReq.ready <= io.dmemReq.ready @[kyberconfiguraiton.scala 27:14]
    mem_fetch_module.io.dccmRsp.bits.dataResponse <= io.dmemRes.bits.dataResponse @[kyberconfiguraiton.scala 28:31]
    mem_fetch_module.io.dccmRsp.valid <= io.dmemRes.valid @[kyberconfiguraiton.scala 28:31]
    io.dmemRes.ready <= mem_fetch_module.io.dccmRsp.ready @[kyberconfiguraiton.scala 28:31]
    
