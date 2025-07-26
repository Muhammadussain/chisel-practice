module BabyKyberTop(
  input         clock,
  input         reset,
  output        io_req_ready,
  input         io_req_valid,
  input  [31:0] io_req_bits_addrRequest,
  input  [31:0] io_req_bits_dataRequest,
  input  [3:0]  io_req_bits_activeByteLane,
  input         io_req_bits_isWrite,
  input         io_rsp_ready,
  output        io_rsp_valid,
  output [31:0] io_rsp_bits_dataResponse
);
  wire  bkyber_clk; // @[BabyKyberTop.scala 23:24]
  wire  bkyber_rst_n; // @[BabyKyberTop.scala 23:24]
  wire  bkyber_enable; // @[BabyKyberTop.scala 23:24]
  wire [31:0] bkyber_data_Req; // @[BabyKyberTop.scala 23:24]
  wire [31:0] bkyber_addr_Req; // @[BabyKyberTop.scala 23:24]
  wire  bkyber_wen_Req; // @[BabyKyberTop.scala 23:24]
  wire [7:0] bkyber_bytelane_Req; // @[BabyKyberTop.scala 23:24]
  wire [31:0] bkyber_data_Resp; // @[BabyKyberTop.scala 23:24]
  wire  _T_2 = io_req_valid & ~io_req_bits_isWrite; // @[BabyKyberTop.scala 49:29]
  wire [31:0] _GEN_3 = bkyber_data_Resp; // @[BabyKyberTop.scala 49:54 BabyKyberTop.scala 55:15]
  Top bkyber ( // @[BabyKyberTop.scala 23:24]
    .clk(bkyber_clk),
    .rst_n(bkyber_rst_n),
    .enable(bkyber_enable),
    .data_Req(bkyber_data_Req),
    .addr_Req(bkyber_addr_Req),
    .wen_Req(bkyber_wen_Req),
    .bytelane_Req(bkyber_bytelane_Req),
    .data_Resp(bkyber_data_Resp)
  );
  assign io_req_ready = 1'h1; // @[BabyKyberTop.scala 18:18]
  assign io_rsp_valid = io_req_valid & io_req_bits_isWrite ? 1'h0 : _T_2; // @[BabyKyberTop.scala 39:47]
  assign io_rsp_bits_dataResponse = io_req_valid & io_req_bits_isWrite ? $signed(bkyber_data_Resp) : $signed(_GEN_3); // @[BabyKyberTop.scala 39:47 BabyKyberTop.scala 46:15]
  assign bkyber_clk = clock; // @[BabyKyberTop.scala 25:36]
  assign bkyber_rst_n = io_req_valid & io_req_bits_isWrite | reset; // @[BabyKyberTop.scala 39:47 BabyKyberTop.scala 41:25 BabyKyberTop.scala 30:21]
  assign bkyber_enable = 1'h1; // @[BabyKyberTop.scala 31:22]
  assign bkyber_data_Req = io_req_bits_dataRequest; // @[BabyKyberTop.scala 39:47 BabyKyberTop.scala 42:28]
  assign bkyber_addr_Req = io_req_bits_addrRequest; // @[BabyKyberTop.scala 39:47 BabyKyberTop.scala 43:28]
  assign bkyber_wen_Req = io_req_valid & io_req_bits_isWrite & io_req_bits_isWrite; // @[BabyKyberTop.scala 39:47 BabyKyberTop.scala 44:27]
  assign bkyber_bytelane_Req = {{4{io_req_bits_activeByteLane[3]}},io_req_bits_activeByteLane}; // @[BabyKyberTop.scala 39:47 BabyKyberTop.scala 45:32]
endmodule
