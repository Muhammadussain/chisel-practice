// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkyber.h for the primary calling header

#include "verilated.h"

#include "Vkyber___024root.h"

VL_INLINE_OPT void Vkyber___024root___combo__TOP__0(Vkyber___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkyber__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkyber___024root___combo__TOP__0\n"); );
    // Body
    vlSelf->io_dmemReq_bits_addrRequest = (0x7ffU & 
                                           (vlSelf->io_addr 
                                            >> 2U));
    if (vlSelf->io_write_en) {
        vlSelf->io_dmemReq_bits_isWrite = 1U;
        vlSelf->io_dmemReq_bits_dataRequest = vlSelf->io_write_data;
    } else {
        vlSelf->io_dmemReq_bits_isWrite = 0U;
        vlSelf->io_dmemReq_bits_dataRequest = 0U;
    }
}

VL_INLINE_OPT void Vkyber___024root___sequent__TOP__0(Vkyber___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkyber__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkyber___024root___sequent__TOP__0\n"); );
    // Body
    if (vlSelf->reset) {
        vlSelf->kyber__DOT__mem_fetch_module__DOT__read_data_reg = 0U;
    } else if (((IData)(vlSelf->io_dmemRes_valid) & (IData)(vlSelf->io_read_en))) {
        vlSelf->kyber__DOT__mem_fetch_module__DOT__read_data_reg 
            = vlSelf->io_dmemRes_bits_dataResponse;
    }
    vlSelf->io_read_data = vlSelf->kyber__DOT__mem_fetch_module__DOT__read_data_reg;
}

void Vkyber___024root___eval(Vkyber___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkyber__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkyber___024root___eval\n"); );
    // Body
    Vkyber___024root___combo__TOP__0(vlSelf);
    if (((IData)(vlSelf->clock) & (~ (IData)(vlSelf->__Vclklast__TOP__clock)))) {
        Vkyber___024root___sequent__TOP__0(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

#ifdef VL_DEBUG
void Vkyber___024root___eval_debug_assertions(Vkyber___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkyber__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkyber___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_write_en & 0xfeU))) {
        Verilated::overWidthError("io_write_en");}
    if (VL_UNLIKELY((vlSelf->io_read_en & 0xfeU))) {
        Verilated::overWidthError("io_read_en");}
    if (VL_UNLIKELY((vlSelf->io_dmemReq_ready & 0xfeU))) {
        Verilated::overWidthError("io_dmemReq_ready");}
    if (VL_UNLIKELY((vlSelf->io_dmemRes_valid & 0xfeU))) {
        Verilated::overWidthError("io_dmemRes_valid");}
}
#endif  // VL_DEBUG
