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
  output [31:0] io_rsp_bits_dataResponse,
  input         io_enable,
  input         io_key_enable,
  input         io_encryption_enable,
  input         io_decryption_enable,
  output        io_key_done,
  output        io_encryption_done,
  output        io_decryption_done
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  bkyber_clk; // @[BabyKyberTop.scala 33:22]
  wire  bkyber_rst_n; // @[BabyKyberTop.scala 33:22]
  wire  bkyber_enable; // @[BabyKyberTop.scala 33:22]
  wire  bkyber_key_enable; // @[BabyKyberTop.scala 33:22]
  wire  bkyber_encryption_enable; // @[BabyKyberTop.scala 33:22]
  wire  bkyber_decryption_enable; // @[BabyKyberTop.scala 33:22]
  wire [31:0] bkyber_data_Req; // @[BabyKyberTop.scala 33:22]
  wire [31:0] bkyber_addr_Req; // @[BabyKyberTop.scala 33:22]
  wire  bkyber_wen_Req; // @[BabyKyberTop.scala 33:22]
  wire [7:0] bkyber_bytelane_Req; // @[BabyKyberTop.scala 33:22]
  wire [31:0] bkyber_data_Resp; // @[BabyKyberTop.scala 33:22]
  wire  bkyber_key_done; // @[BabyKyberTop.scala 33:22]
  wire  bkyber_encryption_done; // @[BabyKyberTop.scala 33:22]
  wire  bkyber_decryption_done; // @[BabyKyberTop.scala 33:22]
  reg  validReg; // @[BabyKyberTop.scala 26:25]
  wire  _T_2 = io_req_valid & ~io_req_bits_isWrite; // @[BabyKyberTop.scala 65:27]
  wire [31:0] _GEN_3 = bkyber_data_Resp; // @[BabyKyberTop.scala 65:52 BabyKyberTop.scala 70:11]
  wire  _GEN_9 = io_req_valid & io_req_bits_isWrite | _T_2; // @[BabyKyberTop.scala 55:45 BabyKyberTop.scala 64:14]
  Top bkyber ( // @[BabyKyberTop.scala 33:22]
    .clk(bkyber_clk),
    .rst_n(bkyber_rst_n),
    .enable(bkyber_enable),
    .key_enable(bkyber_key_enable),
    .encryption_enable(bkyber_encryption_enable),
    .decryption_enable(bkyber_decryption_enable),
    .data_Req(bkyber_data_Req),
    .addr_Req(bkyber_addr_Req),
    .wen_Req(bkyber_wen_Req),
    .bytelane_Req(bkyber_bytelane_Req),
    .data_Resp(bkyber_data_Resp),
    .key_done(bkyber_key_done),
    .encryption_done(bkyber_encryption_done),
    .decryption_done(bkyber_decryption_done)
  );
  assign io_req_ready = 1'h1; // @[BabyKyberTop.scala 28:16]
  assign io_rsp_valid = validReg; // @[BabyKyberTop.scala 27:16]
  assign io_rsp_bits_dataResponse = io_req_valid & io_req_bits_isWrite ? $signed(bkyber_data_Resp) : $signed(_GEN_3); // @[BabyKyberTop.scala 76:35]
  assign io_key_done = bkyber_key_done; // @[BabyKyberTop.scala 50:15]
  assign io_encryption_done = bkyber_encryption_done; // @[BabyKyberTop.scala 51:22]
  assign io_decryption_done = bkyber_decryption_done; // @[BabyKyberTop.scala 52:22]
  assign bkyber_clk = clock; // @[BabyKyberTop.scala 36:32]
  assign bkyber_rst_n = ~reset; // @[BabyKyberTop.scala 37:22]
  assign bkyber_enable = io_enable; // @[BabyKyberTop.scala 40:20]
  assign bkyber_key_enable = io_key_enable; // @[BabyKyberTop.scala 41:24]
  assign bkyber_encryption_enable = io_encryption_enable; // @[BabyKyberTop.scala 42:31]
  assign bkyber_decryption_enable = io_decryption_enable; // @[BabyKyberTop.scala 43:31]
  assign bkyber_data_Req = io_req_bits_dataRequest; // @[BabyKyberTop.scala 57:51]
  assign bkyber_addr_Req = io_req_valid & io_req_bits_isWrite ? $signed(io_req_bits_addrRequest) : $signed(
    io_req_bits_addrRequest); // @[BabyKyberTop.scala 55:45 BabyKyberTop.scala 58:24]
  assign bkyber_wen_Req = io_req_valid & io_req_bits_isWrite & io_req_bits_isWrite; // @[BabyKyberTop.scala 55:45 BabyKyberTop.scala 61:23]
  assign bkyber_bytelane_Req = {{4'd0}, io_req_bits_activeByteLane}; // @[BabyKyberTop.scala 55:45 BabyKyberTop.scala 62:28]
  always @(posedge clock) begin
    if (reset) begin // @[BabyKyberTop.scala 26:25]
      validReg <= 1'h0; // @[BabyKyberTop.scala 26:25]
    end else begin
      validReg <= _GEN_9;
    end
  end
// Register and memory initialization
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE_MEM_INIT
  integer initvar;
`endif
`ifndef SYNTHESIS
`ifdef FIRRTL_BEFORE_INITIAL
`FIRRTL_BEFORE_INITIAL
`endif
initial begin
  `ifdef RANDOMIZE
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      `ifdef RANDOMIZE_DELAY
        #`RANDOMIZE_DELAY begin end
      `else
        #0.002 begin end
      `endif
    `endif
`ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  validReg = _RAND_0[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
