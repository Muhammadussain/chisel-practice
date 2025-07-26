// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vkyber.h for the primary calling header

#ifndef VERILATED_VKYBER___024ROOT_H_
#define VERILATED_VKYBER___024ROOT_H_  // guard

#include "verilated.h"

class Vkyber__Syms;

class Vkyber___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_write_en,0,0);
    VL_IN8(io_read_en,0,0);
    VL_IN8(io_dmemReq_ready,0,0);
    VL_OUT8(io_dmemReq_valid,0,0);
    VL_OUT8(io_dmemReq_bits_activeByteLane,3,0);
    VL_OUT8(io_dmemReq_bits_isWrite,0,0);
    VL_OUT8(io_dmemRes_ready,0,0);
    VL_IN8(io_dmemRes_valid,0,0);
    CData/*0:0*/ __Vclklast__TOP__clock;
    VL_IN(io_addr,31,0);
    VL_IN(io_write_data,31,0);
    VL_OUT(io_read_data,31,0);
    VL_OUT(io_dmemReq_bits_addrRequest,31,0);
    VL_OUT(io_dmemReq_bits_dataRequest,31,0);
    VL_IN(io_dmemRes_bits_dataResponse,31,0);
    IData/*31:0*/ kyber__DOT__mem_fetch_module__DOT__read_data_reg;

    // INTERNAL VARIABLES
    Vkyber__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vkyber___024root(Vkyber__Syms* symsp, const char* name);
    ~Vkyber___024root();
    VL_UNCOPYABLE(Vkyber___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
