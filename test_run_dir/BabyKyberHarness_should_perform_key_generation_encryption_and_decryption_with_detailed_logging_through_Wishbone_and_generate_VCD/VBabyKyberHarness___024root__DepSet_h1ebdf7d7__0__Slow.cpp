// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBabyKyberHarness.h for the primary calling header

#include "VBabyKyberHarness__pch.h"
#include "VBabyKyberHarness___024root.h"

VL_ATTR_COLD void VBabyKyberHarness___024root___eval_static(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_static\n"); );
}

VL_ATTR_COLD void VBabyKyberHarness___024root___eval_initial__TOP(VBabyKyberHarness___024root* vlSelf);

VL_ATTR_COLD void VBabyKyberHarness___024root___eval_initial(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_initial\n"); );
    // Body
    VBabyKyberHarness___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n__0 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n;
}

VL_ATTR_COLD void VBabyKyberHarness___024root___eval_initial__TOP(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->io_rsp_bits_error = 0U;
}

VL_ATTR_COLD void VBabyKyberHarness___024root___eval_final(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberHarness___024root___dump_triggers__stl(VBabyKyberHarness___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VBabyKyberHarness___024root___eval_phase__stl(VBabyKyberHarness___024root* vlSelf);

VL_ATTR_COLD void VBabyKyberHarness___024root___eval_settle(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VBabyKyberHarness___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("BabyKyberHarness.v", 358, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VBabyKyberHarness___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberHarness___024root___dump_triggers__stl(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VBabyKyberHarness___024root___stl_sequent__TOP__0(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h5c6d8a43__0;
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h5c6d8a43__0 = 0;
    CData/*0:0*/ BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h63dc6f9a__0;
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h63dc6f9a__0 = 0;
    CData/*0:0*/ BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h018a94d7__0;
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h018a94d7__0 = 0;
    // Body
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n 
        = (1U & (~ (IData)(vlSelf->reset)));
    vlSelf->io_req_ready = vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg;
    vlSelf->io_rsp_valid = vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__respReg;
    vlSelf->io_rsp_bits_dataResponse = vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__dataReg;
    vlSelf->io_cio_babykyber_intr_key = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_key_done;
    vlSelf->io_cio_babykyber_intr_encrypt = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_encryption_done;
    vlSelf->io_cio_babykyber_intr_decrypt = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_decryption_done;
    if (vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req 
            = vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__adrReg;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req 
            = vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__datReg;
    } else {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req = 0U;
    }
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_1 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg) 
           | ((~ (IData)(vlSelf->io_req_valid)) & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [2U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [2U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [2U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [2U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
        [1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [3U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [3U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [3U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
        [3U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [1U][0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [1U][0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [1U][0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [1U][0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
        [1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [1U][1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [1U][1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [1U][1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [1U][1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
        [0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
        [0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
        [0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
        [0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
        [1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
        [1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
        [1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
        [1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][3U] = 0U;
    if (vlSelf->io_key_enable) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk4__DOT__i = 4U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk5__DOT__i = 4U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[0U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [0U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [0U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[0U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [0U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [0U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
                          [0U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
               [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
                                     [0U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
                          [0U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
               [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
                                     [0U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[1U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [1U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [1U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[1U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [1U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [1U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
                          [1U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
               [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
                                     [1U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
                          [1U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
               [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
                                     [1U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[2U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [2U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [2U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[2U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [2U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [2U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
                          [2U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
               [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
                                     [2U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
                          [2U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
               [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
                                     [2U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[3U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [3U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [3U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[3U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [3U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [3U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
                          [3U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
               [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
                                     [3U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
                          [3U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
               [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
                                     [3U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][0U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
               [0U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
               [0U][0U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][0U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
               [0U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
               [1U][0U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                          [0U][0U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
               [0U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                         [0U][0U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                          [1U][0U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
               [1U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                         [1U][0U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][1U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
               [1U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
               [0U][1U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][1U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
               [1U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
               [1U][1U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                          [0U][1U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
               [0U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                         [0U][1U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                          [1U][1U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
               [1U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                         [1U][1U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][2U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
               [2U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
               [0U][2U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][2U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
               [2U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
               [1U][2U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                          [0U][2U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
               [0U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                         [0U][2U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                          [1U][2U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
               [1U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                         [1U][2U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][3U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added
               [3U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
               [0U][3U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][3U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1
               [3U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
               [1U][3U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                          [0U][3U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
               [0U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                         [0U][3U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                          [1U][3U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
               [1U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                                         [1U][3U], (IData)(0x11U)));
    }
    vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__weReg));
    vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_valid 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stbReg));
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h018a94d7__0 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg) 
           & (IData)(vlSelf->io_req_valid));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[0U] 
        = ((1U & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[1U] 
        = ((2U & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[2U] 
        = ((4U & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[3U] 
        = ((8U & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] = 0U;
    if (vlSelf->io_encryption_enable) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk4__DOT__i = 4U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk5__DOT__i = 4U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[0U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [0U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [0U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
                          [0U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
               [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
                                     [0U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[1U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [1U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [1U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
                          [1U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
               [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
                                     [1U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[2U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [2U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [2U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
                          [2U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
               [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
                                     [2U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[3U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [3U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [3U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
                          [3U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
               [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
                                     [3U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[0U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [0U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [0U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[0U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [0U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [0U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
                          [0U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
               [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
                                     [0U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
                          [0U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
               [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
                                     [0U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[1U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [1U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [1U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[1U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [1U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [1U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
                          [1U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
               [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
                                     [1U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
                          [1U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
               [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
                                     [1U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[2U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [2U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [2U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[2U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [2U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [2U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
                          [2U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
               [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
                                     [2U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
                          [2U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
               [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
                                     [2U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[3U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [3U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [3U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[3U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [3U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [3U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
                          [3U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
               [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
                                     [3U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
                          [3U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
               [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
                                     [3U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
               [0U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
               [0U][0U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
               [0U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
               [1U][0U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][0U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
               [0U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][0U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][0U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
               [1U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][0U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
               [1U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
               [0U][1U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
               [1U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
               [1U][1U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][1U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
               [0U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][1U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][1U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
               [1U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][1U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
               [2U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
               [0U][2U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
               [2U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
               [1U][2U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][2U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
               [0U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][2U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][2U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
               [1U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][2U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added
               [3U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
               [0U][3U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] 
            = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1
               [3U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
               [1U][3U]);
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][3U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
               [0U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][3U], (IData)(0x11U)));
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][3U]) ? vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
               [1U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][3U], (IData)(0x11U)));
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][3U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][3U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][3U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][3U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][2U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][2U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][2U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][2U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
        [0U][0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__deviceAdapter__DOT___T_1 
        = (((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_valid) 
            & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__cycReg)) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction));
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h5c6d8a43__0 
        = ((IData)(vlSelf->io_req_bits_isWrite) & (IData)(BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h018a94d7__0));
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h63dc6f9a__0 
        = ((~ (IData)(vlSelf->io_req_bits_isWrite)) 
           & (IData)(BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h018a94d7__0));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[0U] 
        = ((vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
            [0U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2
            [0U]) - vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [3U]);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                      [0U]) ? ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                               [0U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                                                      [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[1U] 
        = ((vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
            [1U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2
            [1U]) - vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [2U]);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                      [1U]) ? ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                               [1U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                                                      [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[2U] 
        = ((vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
            [2U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2
            [2U]) - vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [1U]);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                      [2U]) ? ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                               [2U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                                                      [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[3U] 
        = ((vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2
            [3U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2
            [3U]) - vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [0U]);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                      [3U]) ? ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                               [3U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
                                                      [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
        [0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
        [0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
        [0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
        [1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
        [0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
        [2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
        [0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
        [3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
        [1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
        [0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
        [1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
        [1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
        [1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
        [2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
        [1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v
        [3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][0U];
    vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__deviceAdapter__DOT___T_1) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__validReg));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT____VdfgTmp_h8b34f32d__0 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__deviceAdapter__DOT___T_1));
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_9 
        = ((IData)(BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h63dc6f9a__0) 
           | ((IData)(BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h5c6d8a43__0) 
              | (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction)));
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_10 
        = ((IData)(BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h63dc6f9a__0) 
           | ((IData)(BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h5c6d8a43__0) 
              | (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stbReg)));
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_11 
        = ((IData)(BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h63dc6f9a__0) 
           | ((IData)(BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h5c6d8a43__0) 
              | (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__cycReg)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
           [1U][0U][0U] - (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [0U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [0U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [0U])) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [0U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [0U])) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [0U]);
        }
    } else {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [0U], (IData)(0x11U));
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
           [1U][0U][1U] - (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [1U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [1U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [1U])) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [1U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [1U])) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [1U]);
        }
    } else {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [1U], (IData)(0x11U));
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
           [1U][0U][2U] - (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [2U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [2U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [2U])) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [2U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [2U])) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [2U]);
        }
    } else {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [2U], (IData)(0x11U));
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
           [1U][0U][3U] - (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [3U] + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [3U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [3U])) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [3U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [3U])) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [3U]);
        }
    } else {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [3U], (IData)(0x11U));
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [0U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [0U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [1U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [1U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [2U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [2U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [3U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [3U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b 
        = ((0xeU & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b)) 
           | ((9U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [0U]) ? 1U : 0U));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b 
        = ((0xdU & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b)) 
           | (((9U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                [1U]) ? 1U : 0U) << 1U));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b 
        = ((0xbU & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b)) 
           | (((9U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                [2U]) ? 1U : 0U) << 2U));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b 
        = ((7U & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b)) 
           | (((9U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                [3U]) ? 1U : 0U) << 3U));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decimal_value 
        = (((((1U & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b))
               ? 8U : 0U) | ((2U & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b))
                              ? 4U : 0U)) | ((4U & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b))
                                              ? 2U : 0U)) 
           | ((8U & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b))
               ? 1U : 0U));
    VL_WRITEF("decimal_value = %0#\n",32,vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decimal_value);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
        [0U][0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
        [0U][0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
        [0U][0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
        [0U][0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
        [0U][1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
        [0U][1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
        [0U][1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
        [0U][1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][0U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[3U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][3U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[2U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][2U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[1U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][1U];
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[0U] 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][0U];
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_27 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack) 
           | (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__respReg));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_wen_Req 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT____VdfgTmp_h8b34f32d__0) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

VL_ATTR_COLD void VBabyKyberHarness___024root___eval_stl(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VBabyKyberHarness___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
        vlSelf->__Vm_traceActivity[5U] = 1U;
        vlSelf->__Vm_traceActivity[4U] = 1U;
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VBabyKyberHarness___024root___eval_triggers__stl(VBabyKyberHarness___024root* vlSelf);

VL_ATTR_COLD bool VBabyKyberHarness___024root___eval_phase__stl(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VBabyKyberHarness___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VBabyKyberHarness___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberHarness___024root___dump_triggers__ico(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VicoTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VL_DBG_MSGF("         'ico' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberHarness___024root___dump_triggers__act(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge BabyKyberHarness.babykyber.bkyber_rst_n or posedge clock)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberHarness___024root___dump_triggers__nba(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clock)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge BabyKyberHarness.babykyber.bkyber_rst_n or posedge clock)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VBabyKyberHarness___024root___ctor_var_reset(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clock = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->io_req_ready = VL_RAND_RESET_I(1);
    vlSelf->io_req_valid = VL_RAND_RESET_I(1);
    vlSelf->io_req_bits_addrRequest = VL_RAND_RESET_I(32);
    vlSelf->io_req_bits_dataRequest = VL_RAND_RESET_I(32);
    vlSelf->io_req_bits_activeByteLane = VL_RAND_RESET_I(4);
    vlSelf->io_req_bits_isWrite = VL_RAND_RESET_I(1);
    vlSelf->io_rsp_ready = VL_RAND_RESET_I(1);
    vlSelf->io_rsp_valid = VL_RAND_RESET_I(1);
    vlSelf->io_rsp_bits_dataResponse = VL_RAND_RESET_I(32);
    vlSelf->io_rsp_bits_error = VL_RAND_RESET_I(1);
    vlSelf->io_enable = VL_RAND_RESET_I(1);
    vlSelf->io_key_enable = VL_RAND_RESET_I(1);
    vlSelf->io_encryption_enable = VL_RAND_RESET_I(1);
    vlSelf->io_decryption_enable = VL_RAND_RESET_I(1);
    vlSelf->io_cio_babykyber_intr_key = VL_RAND_RESET_I(1);
    vlSelf->io_cio_babykyber_intr_encrypt = VL_RAND_RESET_I(1);
    vlSelf->io_cio_babykyber_intr_decrypt = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_valid = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__dataReg = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__respReg = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stbReg = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__cycReg = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__weReg = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__datReg = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__adrReg = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__selReg = VL_RAND_RESET_I(4);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_1 = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_9 = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_10 = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_11 = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_27 = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__deviceAdapter__DOT___T_1 = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_wen_Req = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_key_done = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_encryption_done = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_decryption_done = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__validReg = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT____VdfgTmp_h8b34f32d__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 2; ++__Vi1) {
            for (int __Vi2 = 0; __Vi2 < 4; ++__Vi2) {
                vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decimal_value = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b = VL_RAND_RESET_I(4);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__i = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk5__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__key_done_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__i = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk5__DOT__i = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__i = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__i = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__i = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients = VL_RAND_RESET_I(4);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__temp[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        for (int __Vi1 = 0; __Vi1 < 4; ++__Vi1) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk2__DOT__i = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk1__DOT__j = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk4__DOT__i = 0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk5__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__decryption_done_next = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102 = VL_RAND_RESET_I(32);
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v0 = 0;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v1 = 0;
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v0 = 0;
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v1 = 0;
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v3 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v4 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v5 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v6 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v7 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v8 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v9 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v10 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v11 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v12 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v13 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v14 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v15 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v19 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v21 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v22 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v23 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v0 = 0;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v8 = 0;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v13 = 0;
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v16 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v16 = 0;
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v17 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v18 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v19 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v20 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v21 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v22 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v23 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v24 = 0;
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v56 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v56 = 0;
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v57 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v58 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v59 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v60 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v61 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v62 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v63 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v64 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v65 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v66 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v67 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v68 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v69 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v70 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v71 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v72 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v73 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v74 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v75 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v76 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v77 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v78 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v79 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v80 = 0;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n__0 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
