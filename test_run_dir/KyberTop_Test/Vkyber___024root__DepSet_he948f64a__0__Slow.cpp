// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkyber.h for the primary calling header

#include "verilated.h"

#include "Vkyber___024root.h"

VL_ATTR_COLD void Vkyber___024root___initial__TOP__0(Vkyber___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkyber__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkyber___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->io_dmemReq_valid = 1U;
    vlSelf->io_dmemReq_bits_activeByteLane = 0xfU;
    vlSelf->io_dmemRes_ready = 1U;
}

VL_ATTR_COLD void Vkyber___024root___settle__TOP__0(Vkyber___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkyber__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkyber___024root___settle__TOP__0\n"); );
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
    vlSelf->io_read_data = vlSelf->kyber__DOT__mem_fetch_module__DOT__read_data_reg;
}

VL_ATTR_COLD void Vkyber___024root___eval_initial(Vkyber___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkyber__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkyber___024root___eval_initial\n"); );
    // Body
    Vkyber___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
}

VL_ATTR_COLD void Vkyber___024root___eval_settle(Vkyber___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkyber__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkyber___024root___eval_settle\n"); );
    // Body
    Vkyber___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vkyber___024root___final(Vkyber___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkyber__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkyber___024root___final\n"); );
}

VL_ATTR_COLD void Vkyber___024root___ctor_var_reset(Vkyber___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vkyber__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vkyber___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_addr = VL_RAND_RESET_I(32);
    vlSelf->io_write_en = VL_RAND_RESET_I(1);
    vlSelf->io_read_en = VL_RAND_RESET_I(1);
    vlSelf->io_write_data = VL_RAND_RESET_I(32);
    vlSelf->io_read_data = VL_RAND_RESET_I(32);
    vlSelf->io_dmemReq_ready = VL_RAND_RESET_I(1);
    vlSelf->io_dmemReq_valid = VL_RAND_RESET_I(1);
    vlSelf->io_dmemReq_bits_addrRequest = VL_RAND_RESET_I(32);
    vlSelf->io_dmemReq_bits_dataRequest = VL_RAND_RESET_I(32);
    vlSelf->io_dmemReq_bits_activeByteLane = VL_RAND_RESET_I(4);
    vlSelf->io_dmemReq_bits_isWrite = VL_RAND_RESET_I(1);
    vlSelf->io_dmemRes_ready = VL_RAND_RESET_I(1);
    vlSelf->io_dmemRes_valid = VL_RAND_RESET_I(1);
    vlSelf->io_dmemRes_bits_dataResponse = VL_RAND_RESET_I(32);
    vlSelf->kyber__DOT__mem_fetch_module__DOT__read_data_reg = VL_RAND_RESET_I(32);
}
