module WishboneHost(
  input         clock,
  input         reset,
  input         io_wbMasterTransmitter_ready,
  output        io_wbMasterTransmitter_valid,
  output        io_wbMasterTransmitter_bits_cyc,
  output        io_wbMasterTransmitter_bits_stb,
  output        io_wbMasterTransmitter_bits_we,
  output [31:0] io_wbMasterTransmitter_bits_adr,
  output [31:0] io_wbMasterTransmitter_bits_dat,
  output [3:0]  io_wbMasterTransmitter_bits_sel,
  output        io_wbSlaveReceiver_ready,
  input         io_wbSlaveReceiver_bits_ack,
  input  [31:0] io_wbSlaveReceiver_bits_dat,
  output        io_reqIn_ready,
  input         io_reqIn_valid,
  input  [31:0] io_reqIn_bits_addrRequest,
  input  [31:0] io_reqIn_bits_dataRequest,
  input  [3:0]  io_reqIn_bits_activeByteLane,
  input         io_reqIn_bits_isWrite,
  output        io_rspOut_valid,
  output [31:0] io_rspOut_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
  reg [31:0] _RAND_1;
  reg [31:0] _RAND_2;
  reg [31:0] _RAND_3;
  reg [31:0] _RAND_4;
  reg [31:0] _RAND_5;
  reg [31:0] _RAND_6;
  reg [31:0] _RAND_7;
  reg [31:0] _RAND_8;
  reg [31:0] _RAND_9;
  reg [31:0] _RAND_10;
`endif // RANDOMIZE_REG_INIT
  reg  startWBTransaction; // @[WishboneHost.scala 39:35]
  reg [31:0] dataReg; // @[WishboneHost.scala 41:24]
  reg  respReg; // @[WishboneHost.scala 42:24]
  reg  stbReg; // @[WishboneHost.scala 45:23]
  reg  cycReg; // @[WishboneHost.scala 46:23]
  reg  weReg; // @[WishboneHost.scala 47:22]
  reg [31:0] datReg; // @[WishboneHost.scala 48:23]
  reg [31:0] adrReg; // @[WishboneHost.scala 49:23]
  reg [3:0] selReg; // @[WishboneHost.scala 50:23]
  reg  stateReg; // @[WishboneHost.scala 55:25]
  reg  readyReg; // @[WishboneHost.scala 61:25]
  wire  _T_2 = io_reqIn_valid & io_wbMasterTransmitter_ready; // @[WishboneHost.scala 18:37]
  wire  _GEN_0 = _T_2 ? 1'h0 : readyReg; // @[WishboneHost.scala 62:14 WishboneHost.scala 63:14 WishboneHost.scala 61:25]
  wire  _GEN_1 = stateReg | _GEN_0; // @[WishboneHost.scala 65:33 WishboneHost.scala 66:14]
  wire  _GEN_2 = io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | startWBTransaction; // @[WishboneHost.scala 84:92 WishboneHost.scala 85:26 WishboneHost.scala 39:35]
  wire  _GEN_3 = io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | stbReg; // @[WishboneHost.scala 84:92 WishboneHost.scala 86:14 WishboneHost.scala 45:23]
  wire  _GEN_4 = io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | cycReg; // @[WishboneHost.scala 84:92 WishboneHost.scala 87:14 WishboneHost.scala 46:23]
  wire  _GEN_9 = ~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | _GEN_2; // @[WishboneHost.scala 76:86 WishboneHost.scala 77:26]
  wire  _GEN_10 = ~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | _GEN_3; // @[WishboneHost.scala 76:86 WishboneHost.scala 78:14]
  wire  _GEN_11 = ~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid | _GEN_4; // @[WishboneHost.scala 76:86 WishboneHost.scala 79:14]
  wire  _GEN_27 = io_wbSlaveReceiver_bits_ack | respReg; // @[WishboneHost.scala 105:71 WishboneHost.scala 107:15]
  assign io_wbMasterTransmitter_valid = io_wbMasterTransmitter_bits_stb; // @[WishboneHost.scala 23:32]
  assign io_wbMasterTransmitter_bits_cyc = ~startWBTransaction ? 1'h0 : cycReg; // @[WishboneHost.scala 101:31 WishboneHost.scala 102:118 WishboneHost.scala 95:37]
  assign io_wbMasterTransmitter_bits_stb = ~startWBTransaction ? 1'h0 : stbReg; // @[WishboneHost.scala 101:31 WishboneHost.scala 102:118 WishboneHost.scala 94:37]
  assign io_wbMasterTransmitter_bits_we = ~startWBTransaction ? 1'h0 : weReg; // @[WishboneHost.scala 101:31 WishboneHost.scala 102:118 WishboneHost.scala 96:36]
  assign io_wbMasterTransmitter_bits_adr = ~startWBTransaction ? 32'h0 : adrReg; // @[WishboneHost.scala 101:31 WishboneHost.scala 102:118 WishboneHost.scala 97:37]
  assign io_wbMasterTransmitter_bits_dat = ~startWBTransaction ? 32'h0 : datReg; // @[WishboneHost.scala 101:31 WishboneHost.scala 102:118 WishboneHost.scala 98:37]
  assign io_wbMasterTransmitter_bits_sel = ~startWBTransaction ? 4'h0 : selReg; // @[WishboneHost.scala 101:31 WishboneHost.scala 102:118 WishboneHost.scala 99:37]
  assign io_wbSlaveReceiver_ready = 1'h1; // @[WishboneHost.scala 26:28]
  assign io_reqIn_ready = readyReg; // @[WishboneHost.scala 75:20]
  assign io_rspOut_valid = respReg; // @[WishboneHost.scala 127:21]
  assign io_rspOut_bits_dataResponse = dataReg; // @[WishboneHost.scala 128:33]
  always @(posedge clock) begin
    if (reset) begin // @[WishboneHost.scala 39:35]
      startWBTransaction <= 1'h0; // @[WishboneHost.scala 39:35]
    end else if (io_wbSlaveReceiver_bits_ack) begin // @[WishboneHost.scala 105:71]
      startWBTransaction <= 1'h0; // @[WishboneHost.scala 110:26]
    end else begin
      startWBTransaction <= _GEN_9;
    end
    if (reset) begin // @[WishboneHost.scala 41:24]
      dataReg <= 32'h0; // @[WishboneHost.scala 41:24]
    end else if (io_wbSlaveReceiver_bits_ack) begin // @[WishboneHost.scala 105:71]
      dataReg <= io_wbSlaveReceiver_bits_dat; // @[WishboneHost.scala 106:15]
    end
    if (reset) begin // @[WishboneHost.scala 42:24]
      respReg <= 1'h0; // @[WishboneHost.scala 42:24]
    end else if (~stateReg) begin // @[WishboneHost.scala 118:29]
      respReg <= _GEN_27;
    end else if (stateReg) begin // @[WishboneHost.scala 120:42]
      respReg <= 1'h0; // @[WishboneHost.scala 121:15]
    end else begin
      respReg <= _GEN_27;
    end
    if (reset) begin // @[WishboneHost.scala 45:23]
      stbReg <= 1'h0; // @[WishboneHost.scala 45:23]
    end else begin
      stbReg <= _GEN_10;
    end
    if (reset) begin // @[WishboneHost.scala 46:23]
      cycReg <= 1'h0; // @[WishboneHost.scala 46:23]
    end else begin
      cycReg <= _GEN_11;
    end
    if (reset) begin // @[WishboneHost.scala 47:22]
      weReg <= 1'h0; // @[WishboneHost.scala 47:22]
    end else if (~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 76:86]
      weReg <= io_reqIn_bits_isWrite; // @[WishboneHost.scala 80:13]
    end else if (io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 84:92]
      weReg <= io_reqIn_bits_isWrite; // @[WishboneHost.scala 88:13]
    end
    if (reset) begin // @[WishboneHost.scala 48:23]
      datReg <= 32'h0; // @[WishboneHost.scala 48:23]
    end else if (~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 76:86]
      datReg <= 32'h0; // @[WishboneHost.scala 82:14]
    end else if (io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 84:92]
      datReg <= io_reqIn_bits_dataRequest; // @[WishboneHost.scala 90:14]
    end
    if (reset) begin // @[WishboneHost.scala 49:23]
      adrReg <= 32'h0; // @[WishboneHost.scala 49:23]
    end else if (~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 76:86]
      adrReg <= io_reqIn_bits_addrRequest; // @[WishboneHost.scala 81:14]
    end else if (io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 84:92]
      adrReg <= io_reqIn_bits_addrRequest; // @[WishboneHost.scala 89:14]
    end
    if (reset) begin // @[WishboneHost.scala 50:23]
      selReg <= 4'h0; // @[WishboneHost.scala 50:23]
    end else if (~io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 76:86]
      selReg <= io_reqIn_bits_activeByteLane; // @[WishboneHost.scala 83:14]
    end else if (io_reqIn_bits_isWrite & readyReg & io_reqIn_valid) begin // @[WishboneHost.scala 84:92]
      selReg <= io_reqIn_bits_activeByteLane; // @[WishboneHost.scala 91:14]
    end
    if (reset) begin // @[WishboneHost.scala 55:25]
      stateReg <= 1'h0; // @[WishboneHost.scala 55:25]
    end else if (~stateReg) begin // @[WishboneHost.scala 118:29]
      stateReg <= io_wbSlaveReceiver_bits_ack; // @[WishboneHost.scala 119:16]
    end else if (stateReg) begin // @[WishboneHost.scala 120:42]
      stateReg <= 1'h0; // @[WishboneHost.scala 122:16]
    end
    readyReg <= reset | _GEN_1; // @[WishboneHost.scala 61:25 WishboneHost.scala 61:25]
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
  startWBTransaction = _RAND_0[0:0];
  _RAND_1 = {1{`RANDOM}};
  dataReg = _RAND_1[31:0];
  _RAND_2 = {1{`RANDOM}};
  respReg = _RAND_2[0:0];
  _RAND_3 = {1{`RANDOM}};
  stbReg = _RAND_3[0:0];
  _RAND_4 = {1{`RANDOM}};
  cycReg = _RAND_4[0:0];
  _RAND_5 = {1{`RANDOM}};
  weReg = _RAND_5[0:0];
  _RAND_6 = {1{`RANDOM}};
  datReg = _RAND_6[31:0];
  _RAND_7 = {1{`RANDOM}};
  adrReg = _RAND_7[31:0];
  _RAND_8 = {1{`RANDOM}};
  selReg = _RAND_8[3:0];
  _RAND_9 = {1{`RANDOM}};
  stateReg = _RAND_9[0:0];
  _RAND_10 = {1{`RANDOM}};
  readyReg = _RAND_10[0:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module WishboneDevice(
  input         io_wbSlaveTransmitter_ready,
  output        io_wbSlaveTransmitter_bits_ack,
  output [31:0] io_wbSlaveTransmitter_bits_dat,
  output        io_wbMasterReceiver_ready,
  input         io_wbMasterReceiver_valid,
  input         io_wbMasterReceiver_bits_cyc,
  input         io_wbMasterReceiver_bits_stb,
  input         io_wbMasterReceiver_bits_we,
  input  [31:0] io_wbMasterReceiver_bits_adr,
  input  [31:0] io_wbMasterReceiver_bits_dat,
  input  [3:0]  io_wbMasterReceiver_bits_sel,
  output        io_reqOut_valid,
  output [31:0] io_reqOut_bits_addrRequest,
  output [31:0] io_reqOut_bits_dataRequest,
  output [3:0]  io_reqOut_bits_activeByteLane,
  output        io_reqOut_bits_isWrite,
  input         io_rspIn_valid,
  input  [31:0] io_rspIn_bits_dataResponse
);
  wire  _T_1 = io_wbMasterReceiver_valid & io_wbMasterReceiver_bits_cyc & io_wbMasterReceiver_bits_stb; // @[WishboneDevice.scala 16:80]
  assign io_wbSlaveTransmitter_bits_ack = _T_1 & io_rspIn_valid; // @[WishboneDevice.scala 25:16 WishboneDevice.scala 88:9]
  assign io_wbSlaveTransmitter_bits_dat = io_rspIn_bits_dataResponse; // @[WishboneDevice.scala 36:52 WishboneDevice.scala 41:40]
  assign io_wbMasterReceiver_ready = 1'h1; // @[WishboneDevice.scala 19:29]
  assign io_reqOut_valid = io_wbMasterReceiver_valid & io_wbMasterReceiver_bits_cyc & io_wbMasterReceiver_bits_stb; // @[WishboneDevice.scala 16:80]
  assign io_reqOut_bits_addrRequest = io_wbMasterReceiver_bits_adr; // @[WishboneDevice.scala 26:40 WishboneDevice.scala 32:34 WishboneDevice.scala 56:34]
  assign io_reqOut_bits_dataRequest = io_wbMasterReceiver_bits_dat; // @[WishboneDevice.scala 26:40 WishboneDevice.scala 57:34]
  assign io_reqOut_bits_activeByteLane = io_wbMasterReceiver_bits_sel; // @[WishboneDevice.scala 26:40 WishboneDevice.scala 34:37 WishboneDevice.scala 58:37]
  assign io_reqOut_bits_isWrite = ~io_wbMasterReceiver_bits_we ? 1'h0 : io_wbMasterReceiver_bits_we; // @[WishboneDevice.scala 26:40 WishboneDevice.scala 35:30 WishboneDevice.scala 59:30]
endmodule
module BabyKyberTop(
  input         clock,
  input         reset,
  input         io_req_valid,
  input  [31:0] io_req_bits_addrRequest,
  input  [31:0] io_req_bits_dataRequest,
  input  [3:0]  io_req_bits_activeByteLane,
  input         io_req_bits_isWrite,
  output        io_rsp_valid,
  output [31:0] io_rsp_bits_dataResponse,
  input         io_enable,
  input         io_key_enable,
  input         io_encryption_enable,
  input         io_decryption_enable,
  output        io_cio_babykyber_intr_key,
  output        io_cio_babykyber_intr_encrypt,
  output        io_cio_babykyber_intr_decrypt
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire  bkyber_clk; // @[BabyKyber.scala 39:22]
  wire  bkyber_rst_n; // @[BabyKyber.scala 39:22]
  wire  bkyber_enable; // @[BabyKyber.scala 39:22]
  wire  bkyber_key_enable; // @[BabyKyber.scala 39:22]
  wire  bkyber_encryption_enable; // @[BabyKyber.scala 39:22]
  wire  bkyber_decryption_enable; // @[BabyKyber.scala 39:22]
  wire [31:0] bkyber_data_Req; // @[BabyKyber.scala 39:22]
  wire [31:0] bkyber_addr_Req; // @[BabyKyber.scala 39:22]
  wire  bkyber_wen_Req; // @[BabyKyber.scala 39:22]
  wire [7:0] bkyber_bytelane_Req; // @[BabyKyber.scala 39:22]
  wire [31:0] bkyber_data_Resp; // @[BabyKyber.scala 39:22]
  wire  bkyber_key_done; // @[BabyKyber.scala 39:22]
  wire  bkyber_encryption_done; // @[BabyKyber.scala 39:22]
  wire  bkyber_decryption_done; // @[BabyKyber.scala 39:22]
  reg  validReg; // @[BabyKyber.scala 32:25]
  wire  _T_2 = io_req_valid & ~io_req_bits_isWrite; // @[BabyKyber.scala 74:27]
  wire [31:0] _GEN_3 = bkyber_data_Resp; // @[BabyKyber.scala 74:52 BabyKyber.scala 79:11]
  wire  _GEN_9 = io_req_valid & io_req_bits_isWrite | _T_2; // @[BabyKyber.scala 66:45 BabyKyber.scala 73:14]
  Top bkyber ( // @[BabyKyber.scala 39:22]
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
  assign io_rsp_valid = validReg; // @[BabyKyber.scala 33:16]
  assign io_rsp_bits_dataResponse = io_req_valid & io_req_bits_isWrite ? $signed(bkyber_data_Resp) : $signed(_GEN_3); // @[BabyKyber.scala 85:37]
  assign io_cio_babykyber_intr_key = bkyber_key_done; // @[BabyKyber.scala 59:29]
  assign io_cio_babykyber_intr_encrypt = bkyber_encryption_done; // @[BabyKyber.scala 60:33]
  assign io_cio_babykyber_intr_decrypt = bkyber_decryption_done; // @[BabyKyber.scala 61:33]
  assign bkyber_clk = clock; // @[BabyKyber.scala 42:32]
  assign bkyber_rst_n = ~reset; // @[BabyKyber.scala 43:22]
  assign bkyber_enable = io_enable; // @[BabyKyber.scala 46:20]
  assign bkyber_key_enable = io_key_enable; // @[BabyKyber.scala 47:24]
  assign bkyber_encryption_enable = io_encryption_enable; // @[BabyKyber.scala 48:31]
  assign bkyber_decryption_enable = io_decryption_enable; // @[BabyKyber.scala 49:31]
  assign bkyber_data_Req = io_req_bits_dataRequest; // @[BabyKyber.scala 68:51]
  assign bkyber_addr_Req = io_req_valid & io_req_bits_isWrite ? $signed(io_req_bits_addrRequest) : $signed(
    io_req_bits_addrRequest); // @[BabyKyber.scala 66:45 BabyKyber.scala 69:24]
  assign bkyber_wen_Req = io_req_valid & io_req_bits_isWrite & io_req_bits_isWrite; // @[BabyKyber.scala 66:45 BabyKyber.scala 70:23]
  assign bkyber_bytelane_Req = {{4'd0}, io_req_bits_activeByteLane}; // @[BabyKyber.scala 66:45 BabyKyber.scala 71:28]
  always @(posedge clock) begin
    if (reset) begin // @[BabyKyber.scala 32:25]
      validReg <= 1'h0; // @[BabyKyber.scala 32:25]
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
module BabyKyberHarness(
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
  output        io_rsp_bits_error,
  input         io_enable,
  input         io_key_enable,
  input         io_encryption_enable,
  input         io_decryption_enable,
  output        io_cio_babykyber_intr_key,
  output        io_cio_babykyber_intr_encrypt,
  output        io_cio_babykyber_intr_decrypt
);
  wire  hostAdapter_clock; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_reset; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_io_wbMasterTransmitter_ready; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_io_wbMasterTransmitter_valid; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_io_wbMasterTransmitter_bits_cyc; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_io_wbMasterTransmitter_bits_stb; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_io_wbMasterTransmitter_bits_we; // @[BabyKyberHarness.scala 27:27]
  wire [31:0] hostAdapter_io_wbMasterTransmitter_bits_adr; // @[BabyKyberHarness.scala 27:27]
  wire [31:0] hostAdapter_io_wbMasterTransmitter_bits_dat; // @[BabyKyberHarness.scala 27:27]
  wire [3:0] hostAdapter_io_wbMasterTransmitter_bits_sel; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_io_wbSlaveReceiver_ready; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_io_wbSlaveReceiver_bits_ack; // @[BabyKyberHarness.scala 27:27]
  wire [31:0] hostAdapter_io_wbSlaveReceiver_bits_dat; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_io_reqIn_ready; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_io_reqIn_valid; // @[BabyKyberHarness.scala 27:27]
  wire [31:0] hostAdapter_io_reqIn_bits_addrRequest; // @[BabyKyberHarness.scala 27:27]
  wire [31:0] hostAdapter_io_reqIn_bits_dataRequest; // @[BabyKyberHarness.scala 27:27]
  wire [3:0] hostAdapter_io_reqIn_bits_activeByteLane; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_io_reqIn_bits_isWrite; // @[BabyKyberHarness.scala 27:27]
  wire  hostAdapter_io_rspOut_valid; // @[BabyKyberHarness.scala 27:27]
  wire [31:0] hostAdapter_io_rspOut_bits_dataResponse; // @[BabyKyberHarness.scala 27:27]
  wire  deviceAdapter_io_wbSlaveTransmitter_ready; // @[BabyKyberHarness.scala 28:29]
  wire  deviceAdapter_io_wbSlaveTransmitter_bits_ack; // @[BabyKyberHarness.scala 28:29]
  wire [31:0] deviceAdapter_io_wbSlaveTransmitter_bits_dat; // @[BabyKyberHarness.scala 28:29]
  wire  deviceAdapter_io_wbMasterReceiver_ready; // @[BabyKyberHarness.scala 28:29]
  wire  deviceAdapter_io_wbMasterReceiver_valid; // @[BabyKyberHarness.scala 28:29]
  wire  deviceAdapter_io_wbMasterReceiver_bits_cyc; // @[BabyKyberHarness.scala 28:29]
  wire  deviceAdapter_io_wbMasterReceiver_bits_stb; // @[BabyKyberHarness.scala 28:29]
  wire  deviceAdapter_io_wbMasterReceiver_bits_we; // @[BabyKyberHarness.scala 28:29]
  wire [31:0] deviceAdapter_io_wbMasterReceiver_bits_adr; // @[BabyKyberHarness.scala 28:29]
  wire [31:0] deviceAdapter_io_wbMasterReceiver_bits_dat; // @[BabyKyberHarness.scala 28:29]
  wire [3:0] deviceAdapter_io_wbMasterReceiver_bits_sel; // @[BabyKyberHarness.scala 28:29]
  wire  deviceAdapter_io_reqOut_valid; // @[BabyKyberHarness.scala 28:29]
  wire [31:0] deviceAdapter_io_reqOut_bits_addrRequest; // @[BabyKyberHarness.scala 28:29]
  wire [31:0] deviceAdapter_io_reqOut_bits_dataRequest; // @[BabyKyberHarness.scala 28:29]
  wire [3:0] deviceAdapter_io_reqOut_bits_activeByteLane; // @[BabyKyberHarness.scala 28:29]
  wire  deviceAdapter_io_reqOut_bits_isWrite; // @[BabyKyberHarness.scala 28:29]
  wire  deviceAdapter_io_rspIn_valid; // @[BabyKyberHarness.scala 28:29]
  wire [31:0] deviceAdapter_io_rspIn_bits_dataResponse; // @[BabyKyberHarness.scala 28:29]
  wire  babykyber_clock; // @[BabyKyberHarness.scala 29:25]
  wire  babykyber_reset; // @[BabyKyberHarness.scala 29:25]
  wire  babykyber_io_req_valid; // @[BabyKyberHarness.scala 29:25]
  wire [31:0] babykyber_io_req_bits_addrRequest; // @[BabyKyberHarness.scala 29:25]
  wire [31:0] babykyber_io_req_bits_dataRequest; // @[BabyKyberHarness.scala 29:25]
  wire [3:0] babykyber_io_req_bits_activeByteLane; // @[BabyKyberHarness.scala 29:25]
  wire  babykyber_io_req_bits_isWrite; // @[BabyKyberHarness.scala 29:25]
  wire  babykyber_io_rsp_valid; // @[BabyKyberHarness.scala 29:25]
  wire [31:0] babykyber_io_rsp_bits_dataResponse; // @[BabyKyberHarness.scala 29:25]
  wire  babykyber_io_enable; // @[BabyKyberHarness.scala 29:25]
  wire  babykyber_io_key_enable; // @[BabyKyberHarness.scala 29:25]
  wire  babykyber_io_encryption_enable; // @[BabyKyberHarness.scala 29:25]
  wire  babykyber_io_decryption_enable; // @[BabyKyberHarness.scala 29:25]
  wire  babykyber_io_cio_babykyber_intr_key; // @[BabyKyberHarness.scala 29:25]
  wire  babykyber_io_cio_babykyber_intr_encrypt; // @[BabyKyberHarness.scala 29:25]
  wire  babykyber_io_cio_babykyber_intr_decrypt; // @[BabyKyberHarness.scala 29:25]
  WishboneHost hostAdapter ( // @[BabyKyberHarness.scala 27:27]
    .clock(hostAdapter_clock),
    .reset(hostAdapter_reset),
    .io_wbMasterTransmitter_ready(hostAdapter_io_wbMasterTransmitter_ready),
    .io_wbMasterTransmitter_valid(hostAdapter_io_wbMasterTransmitter_valid),
    .io_wbMasterTransmitter_bits_cyc(hostAdapter_io_wbMasterTransmitter_bits_cyc),
    .io_wbMasterTransmitter_bits_stb(hostAdapter_io_wbMasterTransmitter_bits_stb),
    .io_wbMasterTransmitter_bits_we(hostAdapter_io_wbMasterTransmitter_bits_we),
    .io_wbMasterTransmitter_bits_adr(hostAdapter_io_wbMasterTransmitter_bits_adr),
    .io_wbMasterTransmitter_bits_dat(hostAdapter_io_wbMasterTransmitter_bits_dat),
    .io_wbMasterTransmitter_bits_sel(hostAdapter_io_wbMasterTransmitter_bits_sel),
    .io_wbSlaveReceiver_ready(hostAdapter_io_wbSlaveReceiver_ready),
    .io_wbSlaveReceiver_bits_ack(hostAdapter_io_wbSlaveReceiver_bits_ack),
    .io_wbSlaveReceiver_bits_dat(hostAdapter_io_wbSlaveReceiver_bits_dat),
    .io_reqIn_ready(hostAdapter_io_reqIn_ready),
    .io_reqIn_valid(hostAdapter_io_reqIn_valid),
    .io_reqIn_bits_addrRequest(hostAdapter_io_reqIn_bits_addrRequest),
    .io_reqIn_bits_dataRequest(hostAdapter_io_reqIn_bits_dataRequest),
    .io_reqIn_bits_activeByteLane(hostAdapter_io_reqIn_bits_activeByteLane),
    .io_reqIn_bits_isWrite(hostAdapter_io_reqIn_bits_isWrite),
    .io_rspOut_valid(hostAdapter_io_rspOut_valid),
    .io_rspOut_bits_dataResponse(hostAdapter_io_rspOut_bits_dataResponse)
  );
  WishboneDevice deviceAdapter ( // @[BabyKyberHarness.scala 28:29]
    .io_wbSlaveTransmitter_ready(deviceAdapter_io_wbSlaveTransmitter_ready),
    .io_wbSlaveTransmitter_bits_ack(deviceAdapter_io_wbSlaveTransmitter_bits_ack),
    .io_wbSlaveTransmitter_bits_dat(deviceAdapter_io_wbSlaveTransmitter_bits_dat),
    .io_wbMasterReceiver_ready(deviceAdapter_io_wbMasterReceiver_ready),
    .io_wbMasterReceiver_valid(deviceAdapter_io_wbMasterReceiver_valid),
    .io_wbMasterReceiver_bits_cyc(deviceAdapter_io_wbMasterReceiver_bits_cyc),
    .io_wbMasterReceiver_bits_stb(deviceAdapter_io_wbMasterReceiver_bits_stb),
    .io_wbMasterReceiver_bits_we(deviceAdapter_io_wbMasterReceiver_bits_we),
    .io_wbMasterReceiver_bits_adr(deviceAdapter_io_wbMasterReceiver_bits_adr),
    .io_wbMasterReceiver_bits_dat(deviceAdapter_io_wbMasterReceiver_bits_dat),
    .io_wbMasterReceiver_bits_sel(deviceAdapter_io_wbMasterReceiver_bits_sel),
    .io_reqOut_valid(deviceAdapter_io_reqOut_valid),
    .io_reqOut_bits_addrRequest(deviceAdapter_io_reqOut_bits_addrRequest),
    .io_reqOut_bits_dataRequest(deviceAdapter_io_reqOut_bits_dataRequest),
    .io_reqOut_bits_activeByteLane(deviceAdapter_io_reqOut_bits_activeByteLane),
    .io_reqOut_bits_isWrite(deviceAdapter_io_reqOut_bits_isWrite),
    .io_rspIn_valid(deviceAdapter_io_rspIn_valid),
    .io_rspIn_bits_dataResponse(deviceAdapter_io_rspIn_bits_dataResponse)
  );
  BabyKyberTop babykyber ( // @[BabyKyberHarness.scala 29:25]
    .clock(babykyber_clock),
    .reset(babykyber_reset),
    .io_req_valid(babykyber_io_req_valid),
    .io_req_bits_addrRequest(babykyber_io_req_bits_addrRequest),
    .io_req_bits_dataRequest(babykyber_io_req_bits_dataRequest),
    .io_req_bits_activeByteLane(babykyber_io_req_bits_activeByteLane),
    .io_req_bits_isWrite(babykyber_io_req_bits_isWrite),
    .io_rsp_valid(babykyber_io_rsp_valid),
    .io_rsp_bits_dataResponse(babykyber_io_rsp_bits_dataResponse),
    .io_enable(babykyber_io_enable),
    .io_key_enable(babykyber_io_key_enable),
    .io_encryption_enable(babykyber_io_encryption_enable),
    .io_decryption_enable(babykyber_io_decryption_enable),
    .io_cio_babykyber_intr_key(babykyber_io_cio_babykyber_intr_key),
    .io_cio_babykyber_intr_encrypt(babykyber_io_cio_babykyber_intr_encrypt),
    .io_cio_babykyber_intr_decrypt(babykyber_io_cio_babykyber_intr_decrypt)
  );
  assign io_req_ready = hostAdapter_io_reqIn_ready; // @[BabyKyberHarness.scala 31:24]
  assign io_rsp_valid = hostAdapter_io_rspOut_valid; // @[BabyKyberHarness.scala 32:10]
  assign io_rsp_bits_dataResponse = hostAdapter_io_rspOut_bits_dataResponse; // @[BabyKyberHarness.scala 32:10]
  assign io_rsp_bits_error = 1'h0; // @[BabyKyberHarness.scala 32:10]
  assign io_cio_babykyber_intr_key = babykyber_io_cio_babykyber_intr_key; // @[BabyKyberHarness.scala 46:29]
  assign io_cio_babykyber_intr_encrypt = babykyber_io_cio_babykyber_intr_encrypt; // @[BabyKyberHarness.scala 47:33]
  assign io_cio_babykyber_intr_decrypt = babykyber_io_cio_babykyber_intr_decrypt; // @[BabyKyberHarness.scala 48:33]
  assign hostAdapter_clock = clock;
  assign hostAdapter_reset = reset;
  assign hostAdapter_io_wbMasterTransmitter_ready = deviceAdapter_io_wbMasterReceiver_ready; // @[BabyKyberHarness.scala 33:38]
  assign hostAdapter_io_wbSlaveReceiver_bits_ack = deviceAdapter_io_wbSlaveTransmitter_bits_ack; // @[BabyKyberHarness.scala 34:34]
  assign hostAdapter_io_wbSlaveReceiver_bits_dat = deviceAdapter_io_wbSlaveTransmitter_bits_dat; // @[BabyKyberHarness.scala 34:34]
  assign hostAdapter_io_reqIn_valid = io_req_valid; // @[BabyKyberHarness.scala 31:24]
  assign hostAdapter_io_reqIn_bits_addrRequest = io_req_bits_addrRequest; // @[BabyKyberHarness.scala 31:24]
  assign hostAdapter_io_reqIn_bits_dataRequest = io_req_bits_dataRequest; // @[BabyKyberHarness.scala 31:24]
  assign hostAdapter_io_reqIn_bits_activeByteLane = io_req_bits_activeByteLane; // @[BabyKyberHarness.scala 31:24]
  assign hostAdapter_io_reqIn_bits_isWrite = io_req_bits_isWrite; // @[BabyKyberHarness.scala 31:24]
  assign deviceAdapter_io_wbSlaveTransmitter_ready = hostAdapter_io_wbSlaveReceiver_ready; // @[BabyKyberHarness.scala 34:34]
  assign deviceAdapter_io_wbMasterReceiver_valid = hostAdapter_io_wbMasterTransmitter_valid; // @[BabyKyberHarness.scala 33:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_cyc = hostAdapter_io_wbMasterTransmitter_bits_cyc; // @[BabyKyberHarness.scala 33:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_stb = hostAdapter_io_wbMasterTransmitter_bits_stb; // @[BabyKyberHarness.scala 33:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_we = hostAdapter_io_wbMasterTransmitter_bits_we; // @[BabyKyberHarness.scala 33:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_adr = hostAdapter_io_wbMasterTransmitter_bits_adr; // @[BabyKyberHarness.scala 33:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_dat = hostAdapter_io_wbMasterTransmitter_bits_dat; // @[BabyKyberHarness.scala 33:38]
  assign deviceAdapter_io_wbMasterReceiver_bits_sel = hostAdapter_io_wbMasterTransmitter_bits_sel; // @[BabyKyberHarness.scala 33:38]
  assign deviceAdapter_io_rspIn_valid = babykyber_io_rsp_valid; // @[BabyKyberHarness.scala 37:20]
  assign deviceAdapter_io_rspIn_bits_dataResponse = babykyber_io_rsp_bits_dataResponse; // @[BabyKyberHarness.scala 37:20]
  assign babykyber_clock = clock;
  assign babykyber_reset = reset;
  assign babykyber_io_req_valid = deviceAdapter_io_reqOut_valid; // @[BabyKyberHarness.scala 36:20]
  assign babykyber_io_req_bits_addrRequest = deviceAdapter_io_reqOut_bits_addrRequest; // @[BabyKyberHarness.scala 36:20]
  assign babykyber_io_req_bits_dataRequest = deviceAdapter_io_reqOut_bits_dataRequest; // @[BabyKyberHarness.scala 36:20]
  assign babykyber_io_req_bits_activeByteLane = deviceAdapter_io_reqOut_bits_activeByteLane; // @[BabyKyberHarness.scala 36:20]
  assign babykyber_io_req_bits_isWrite = deviceAdapter_io_reqOut_bits_isWrite; // @[BabyKyberHarness.scala 36:20]
  assign babykyber_io_enable = io_enable; // @[BabyKyberHarness.scala 40:23]
  assign babykyber_io_key_enable = io_key_enable; // @[BabyKyberHarness.scala 41:27]
  assign babykyber_io_encryption_enable = io_encryption_enable; // @[BabyKyberHarness.scala 42:34]
  assign babykyber_io_decryption_enable = io_decryption_enable; // @[BabyKyberHarness.scala 43:34]
endmodule
