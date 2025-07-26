module MemFetch(
  input         clock,
  input         reset,
  input  [31:0] io_addr,
  input         io_write_en,
  input         io_read_en,
  input  [31:0] io_write_data,
  output [31:0] io_read_data,
  output [31:0] io_dccmReq_bits_addrRequest,
  output [31:0] io_dccmReq_bits_dataRequest,
  output        io_dccmReq_bits_isWrite,
  input         io_dccmRsp_valid,
  input  [31:0] io_dccmRsp_bits_dataResponse
);
`ifdef RANDOMIZE_REG_INIT
  reg [31:0] _RAND_0;
`endif // RANDOMIZE_REG_INIT
  wire [31:0] _io_dccmReq_bits_addrRequest_T = io_addr & 32'h1fff; // @[Memoryfetch.scala 23:51]
  reg [31:0] read_data_reg; // @[Memoryfetch.scala 27:30]
  assign io_read_data = read_data_reg; // @[Memoryfetch.scala 33:16]
  assign io_dccmReq_bits_addrRequest = {{2'd0}, _io_dccmReq_bits_addrRequest_T[31:2]}; // @[Memoryfetch.scala 23:68]
  assign io_dccmReq_bits_dataRequest = io_write_en ? io_write_data : 32'h0; // @[Memoryfetch.scala 24:37]
  assign io_dccmReq_bits_isWrite = io_write_en; // @[Memoryfetch.scala 22:27]
  always @(posedge clock) begin
    if (reset) begin // @[Memoryfetch.scala 27:30]
      read_data_reg <= 32'h0; // @[Memoryfetch.scala 27:30]
    end else if (io_dccmRsp_valid & io_read_en) begin // @[Memoryfetch.scala 29:40]
      read_data_reg <= io_dccmRsp_bits_dataResponse; // @[Memoryfetch.scala 30:19]
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
  read_data_reg = _RAND_0[31:0];
`endif // RANDOMIZE_REG_INIT
  `endif // RANDOMIZE
end // initial
`ifdef FIRRTL_AFTER_INITIAL
`FIRRTL_AFTER_INITIAL
`endif
`endif // SYNTHESIS
endmodule
module kyber(
  input         clock,
  input         reset,
  input  [31:0] io_addr,
  input         io_write_en,
  input         io_read_en,
  input  [31:0] io_write_data,
  output [31:0] io_read_data,
  input         io_dmemReq_ready,
  output        io_dmemReq_valid,
  output [31:0] io_dmemReq_bits_addrRequest,
  output [31:0] io_dmemReq_bits_dataRequest,
  output [3:0]  io_dmemReq_bits_activeByteLane,
  output        io_dmemReq_bits_isWrite,
  output        io_dmemRes_ready,
  input         io_dmemRes_valid,
  input  [31:0] io_dmemRes_bits_dataResponse
);
  wire  mem_fetch_module_clock; // @[kyberconfiguraiton.scala 17:32]
  wire  mem_fetch_module_reset; // @[kyberconfiguraiton.scala 17:32]
  wire [31:0] mem_fetch_module_io_addr; // @[kyberconfiguraiton.scala 17:32]
  wire  mem_fetch_module_io_write_en; // @[kyberconfiguraiton.scala 17:32]
  wire  mem_fetch_module_io_read_en; // @[kyberconfiguraiton.scala 17:32]
  wire [31:0] mem_fetch_module_io_write_data; // @[kyberconfiguraiton.scala 17:32]
  wire [31:0] mem_fetch_module_io_read_data; // @[kyberconfiguraiton.scala 17:32]
  wire [31:0] mem_fetch_module_io_dccmReq_bits_addrRequest; // @[kyberconfiguraiton.scala 17:32]
  wire [31:0] mem_fetch_module_io_dccmReq_bits_dataRequest; // @[kyberconfiguraiton.scala 17:32]
  wire  mem_fetch_module_io_dccmReq_bits_isWrite; // @[kyberconfiguraiton.scala 17:32]
  wire  mem_fetch_module_io_dccmRsp_valid; // @[kyberconfiguraiton.scala 17:32]
  wire [31:0] mem_fetch_module_io_dccmRsp_bits_dataResponse; // @[kyberconfiguraiton.scala 17:32]
  MemFetch mem_fetch_module ( // @[kyberconfiguraiton.scala 17:32]
    .clock(mem_fetch_module_clock),
    .reset(mem_fetch_module_reset),
    .io_addr(mem_fetch_module_io_addr),
    .io_write_en(mem_fetch_module_io_write_en),
    .io_read_en(mem_fetch_module_io_read_en),
    .io_write_data(mem_fetch_module_io_write_data),
    .io_read_data(mem_fetch_module_io_read_data),
    .io_dccmReq_bits_addrRequest(mem_fetch_module_io_dccmReq_bits_addrRequest),
    .io_dccmReq_bits_dataRequest(mem_fetch_module_io_dccmReq_bits_dataRequest),
    .io_dccmReq_bits_isWrite(mem_fetch_module_io_dccmReq_bits_isWrite),
    .io_dccmRsp_valid(mem_fetch_module_io_dccmRsp_valid),
    .io_dccmRsp_bits_dataResponse(mem_fetch_module_io_dccmRsp_bits_dataResponse)
  );
  assign io_read_data = mem_fetch_module_io_read_data; // @[kyberconfiguraiton.scala 24:34]
  assign io_dmemReq_valid = 1'h1; // @[kyberconfiguraiton.scala 27:14]
  assign io_dmemReq_bits_addrRequest = mem_fetch_module_io_dccmReq_bits_addrRequest; // @[kyberconfiguraiton.scala 27:14]
  assign io_dmemReq_bits_dataRequest = mem_fetch_module_io_dccmReq_bits_dataRequest; // @[kyberconfiguraiton.scala 27:14]
  assign io_dmemReq_bits_activeByteLane = 4'hf; // @[kyberconfiguraiton.scala 27:14]
  assign io_dmemReq_bits_isWrite = mem_fetch_module_io_dccmReq_bits_isWrite; // @[kyberconfiguraiton.scala 27:14]
  assign io_dmemRes_ready = 1'h1; // @[kyberconfiguraiton.scala 28:31]
  assign mem_fetch_module_clock = clock;
  assign mem_fetch_module_reset = reset;
  assign mem_fetch_module_io_addr = io_addr; // @[kyberconfiguraiton.scala 20:34]
  assign mem_fetch_module_io_write_en = io_write_en; // @[kyberconfiguraiton.scala 21:34]
  assign mem_fetch_module_io_read_en = io_read_en; // @[kyberconfiguraiton.scala 22:34]
  assign mem_fetch_module_io_write_data = io_write_data; // @[kyberconfiguraiton.scala 23:34]
  assign mem_fetch_module_io_dccmRsp_valid = io_dmemRes_valid; // @[kyberconfiguraiton.scala 28:31]
  assign mem_fetch_module_io_dccmRsp_bits_dataResponse = io_dmemRes_bits_dataResponse; // @[kyberconfiguraiton.scala 28:31]
endmodule
