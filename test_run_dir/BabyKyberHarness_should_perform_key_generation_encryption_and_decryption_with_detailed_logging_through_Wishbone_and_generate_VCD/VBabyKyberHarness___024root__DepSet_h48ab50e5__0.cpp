// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBabyKyberHarness.h for the primary calling header

#include "VBabyKyberHarness__pch.h"
#include "VBabyKyberHarness__Syms.h"
#include "VBabyKyberHarness___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberHarness___024root___dump_triggers__ico(VBabyKyberHarness___024root* vlSelf);
#endif  // VL_DEBUG

void VBabyKyberHarness___024root___eval_triggers__ico(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (IData)(vlSelf->__VicoFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBabyKyberHarness___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberHarness___024root___dump_triggers__act(VBabyKyberHarness___024root* vlSelf);
#endif  // VL_DEBUG

void VBabyKyberHarness___024root___eval_triggers__act(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__VactTriggered.set(1U, (((~ (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n)) 
                                      & (IData)(vlSelf->__Vtrigprevexpr___TOP__BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n__0)) 
                                     | ((IData)(vlSelf->clock) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0)))));
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n__0 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VBabyKyberHarness___024root___dump_triggers__act(vlSelf);
    }
#endif
}
