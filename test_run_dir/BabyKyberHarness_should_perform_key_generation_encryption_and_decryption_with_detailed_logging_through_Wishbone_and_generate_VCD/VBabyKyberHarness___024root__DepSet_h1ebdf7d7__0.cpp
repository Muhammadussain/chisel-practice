// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBabyKyberHarness.h for the primary calling header

#include "VBabyKyberHarness__pch.h"
#include "VBabyKyberHarness___024root.h"

VL_INLINE_OPT void VBabyKyberHarness___024root___ico_sequent__TOP__0(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___ico_sequent__TOP__0\n"); );
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
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_1 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg) 
           | ((~ (IData)(vlSelf->io_req_valid)) & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg)));
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
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h018a94d7__0 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg) 
           & (IData)(vlSelf->io_req_valid));
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
}

void VBabyKyberHarness___024root___eval_ico(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        VBabyKyberHarness___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VBabyKyberHarness___024root___eval_triggers__ico(VBabyKyberHarness___024root* vlSelf);

bool VBabyKyberHarness___024root___eval_phase__ico(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    VBabyKyberHarness___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        VBabyKyberHarness___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void VBabyKyberHarness___024root___eval_act(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_act\n"); );
}

VL_INLINE_OPT void VBabyKyberHarness___024root___nba_sequent__TOP__0(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h5c6d8a43__0;
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h5c6d8a43__0 = 0;
    CData/*0:0*/ BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h63dc6f9a__0;
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h63dc6f9a__0 = 0;
    CData/*0:0*/ BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h018a94d7__0;
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h018a94d7__0 = 0;
    CData/*0:0*/ __Vdly__BabyKyberHarness__DOT__hostAdapter__DOT__stateReg;
    __Vdly__BabyKyberHarness__DOT__hostAdapter__DOT__stateReg = 0;
    // Body
    __Vdly__BabyKyberHarness__DOT__hostAdapter__DOT__stateReg 
        = vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v16 = 0U;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v24 = 0U;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001;
    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000 
        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v0 = 0U;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v0 = 0U;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v1 = 0U;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v8 = 0U;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v13 = 0U;
    if ((1U & (~ (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n)))) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk1__DOT__j = 4U;
    }
    if (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n) {
        if (vlSelf->io_encryption_enable) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk2__DOT__i = 4U;
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_encryption_done = 1U;
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients 
                = (0xfU & vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message);
        }
        if (vlSelf->io_key_enable) {
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v16 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                [0U][0U];
            vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v16 = 1U;
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v17 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                [0U][1U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v18 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                [0U][2U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v19 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                [0U][3U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v20 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                [1U][0U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v21 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                [1U][1U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v22 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                [1U][2U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v23 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                [1U][3U];
        }
    } else {
        vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v24 = 1U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients = 0U;
    }
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__respReg 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg)
                                                  ? 
                                                 ((1U 
                                                   & (~ (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg))) 
                                                  && (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_27))
                                                  : (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_27)));
    if (vlSelf->reset) {
        __Vdly__BabyKyberHarness__DOT__hostAdapter__DOT__stateReg = 0U;
        vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__weReg = 0U;
        vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__datReg = 0U;
        vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__adrReg = 0U;
        vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__selReg = 0U;
        vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__dataReg = 0U;
    } else {
        if (vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg) {
            if (vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg) {
                __Vdly__BabyKyberHarness__DOT__hostAdapter__DOT__stateReg = 0U;
            }
        } else {
            __Vdly__BabyKyberHarness__DOT__hostAdapter__DOT__stateReg 
                = vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack;
        }
        if ((((~ (IData)(vlSelf->io_req_bits_isWrite)) 
              & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg)) 
             & (IData)(vlSelf->io_req_valid))) {
            vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__weReg 
                = vlSelf->io_req_bits_isWrite;
            vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__datReg = 0U;
            vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__adrReg 
                = vlSelf->io_req_bits_addrRequest;
            vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__selReg 
                = vlSelf->io_req_bits_activeByteLane;
        } else if ((((IData)(vlSelf->io_req_bits_isWrite) 
                     & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg)) 
                    & (IData)(vlSelf->io_req_valid))) {
            vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__weReg 
                = vlSelf->io_req_bits_isWrite;
            vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__datReg 
                = vlSelf->io_req_bits_dataRequest;
            vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__adrReg 
                = vlSelf->io_req_bits_addrRequest;
            vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__selReg 
                = vlSelf->io_req_bits_activeByteLane;
        }
        if (vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack) {
            vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__dataReg 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp;
        }
    }
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__cycReg 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_11));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__validReg 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT____VdfgTmp_h8b34f32d__0) 
                                                 | ((~ (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we)) 
                                                    & (IData)(vlSelf->BabyKyberHarness__DOT__deviceAdapter__DOT___T_1))));
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stbReg 
        = ((1U & (~ (IData)(vlSelf->reset))) && (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_10));
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction 
        = ((1U & (~ (IData)(vlSelf->reset))) && ((1U 
                                                  & (~ (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack))) 
                                                 && (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_9)));
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg 
        = __Vdly__BabyKyberHarness__DOT__hostAdapter__DOT__stateReg;
    vlSelf->io_rsp_valid = vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__respReg;
    vlSelf->io_cio_babykyber_intr_encrypt = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_encryption_done;
    vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_valid 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stbReg));
    vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__weReg));
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg 
        = ((IData)(vlSelf->reset) | (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_1));
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
    vlSelf->io_rsp_bits_dataResponse = vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__dataReg;
    vlSelf->BabyKyberHarness__DOT__deviceAdapter__DOT___T_1 
        = (((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_valid) 
            & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__cycReg)) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction));
    vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__deviceAdapter__DOT___T_1) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__validReg));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT____VdfgTmp_h8b34f32d__0 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__deviceAdapter__DOT___T_1));
    vlSelf->io_req_ready = vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg;
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_1 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg) 
           | ((~ (IData)(vlSelf->io_req_valid)) & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg)));
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h018a94d7__0 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg) 
           & (IData)(vlSelf->io_req_valid));
    vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT___GEN_27 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack) 
           | (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__respReg));
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h5c6d8a43__0 
        = ((IData)(vlSelf->io_req_bits_isWrite) & (IData)(BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h018a94d7__0));
    BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h63dc6f9a__0 
        = ((~ (IData)(vlSelf->io_req_bits_isWrite)) 
           & (IData)(BabyKyberHarness__DOT__hostAdapter__DOT____VdfgTmp_h018a94d7__0));
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
}

VL_INLINE_OPT void VBabyKyberHarness___024root___nba_sequent__TOP__1(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___nba_sequent__TOP__1\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3 = 0;
    CData/*0:0*/ __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4 = 0;
    // Body
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 0U;
    __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4 = 0U;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v56 = 0U;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v80 = 0U;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v0 = 0U;
    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v1 = 0U;
    if ((1U & (~ (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n)))) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k = 4U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 4U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__i = 2U;
    }
    if (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n) {
        if (vlSelf->io_key_enable) {
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j = 4U;
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j = 4U;
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__i = 4U;
            vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__i = 2U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                [3U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                [3U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                [3U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                [3U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v56 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [0U][0U];
            vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v56 = 1U;
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v57 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [0U][1U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v58 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [0U][2U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v59 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [0U][3U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v60 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [1U][0U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v61 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [1U][1U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v62 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [1U][2U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v63 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [1U][3U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v64 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [2U][0U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v65 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [2U][1U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v66 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [2U][2U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v67 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [2U][3U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v68 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [3U][0U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v69 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [3U][1U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v70 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [3U][2U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v71 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                [3U][3U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v72 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                [0U][0U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v73 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                [0U][1U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v74 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                [0U][2U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v75 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                [0U][3U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v76 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                [1U][0U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v77 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                [1U][1U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v78 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                [1U][2U];
            vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v79 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                [1U][3U];
        }
        if (vlSelf->io_decryption_enable) {
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                [3U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                [3U];
        }
        if (vlSelf->io_encryption_enable) {
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                [3U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                [3U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                [3U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                [3U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                [3U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [0U];
            __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0 = 1U;
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [1U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [2U];
            __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3 
                = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                [3U];
        }
    } else {
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4 = 1U;
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4 = 1U;
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4 = 1U;
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4 = 1U;
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4 = 1U;
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4 = 1U;
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4 = 1U;
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4 = 1U;
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4 = 1U;
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4 = 1U;
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4 = 1U;
        __Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4 = 1U;
        vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v80 = 1U;
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_decryption_done 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n) 
           && (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__decryption_done_next));
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_key_done 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n) 
           && (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__key_done_next));
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[3U] = 0U;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[3U] = 0U;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[3U] = 0U;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[3U] = 0U;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[3U] = 0U;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[3U] = 0U;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[3U] = 0U;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[3U] = 0U;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[3U] = 0U;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[3U] = 0U;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[3U] = 0U;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v3;
    }
    if (__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0__v4) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[3U] = 0U;
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[0U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[1U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[2U] = 0U;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[3U] = 0U;
    if (vlSelf->io_encryption_enable) {
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
    }
    vlSelf->io_cio_babykyber_intr_decrypt = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_decryption_done;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__decryption_done_next 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n) 
           && (IData)(vlSelf->io_decryption_enable));
    vlSelf->io_cio_babykyber_intr_key = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_key_done;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__key_done_next 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n) 
           && (IData)(vlSelf->io_key_enable));
}

VL_INLINE_OPT void VBabyKyberHarness___024root___nba_sequent__TOP__2(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___nba_sequent__TOP__2\n"); );
    // Init
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v3 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v3 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v3 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v4;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v4;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v4;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v5;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v5 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v5;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v5 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v5;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v5 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v6;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v6 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v6;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v6 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v6;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v6 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v7;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v7 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v7;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v7 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v7;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v7 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v8;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v8 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v9;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v9 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v10;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v10 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v11;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v11 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v12;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v12 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v13;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v13 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v14;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v14 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v15;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v15 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v3 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v3 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v3 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v4;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v4;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v5;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v5 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v5;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v5 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v6;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v6 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v6;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v6 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v7;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v7 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v7;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v7 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v0;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v0 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v1;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v1 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v2;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v2 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v3 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v3;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v3 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v4;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v4;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v4 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v5;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v5 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v5;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v5 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v6;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v6 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v6;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v6 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v7;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v7 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v7;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v7 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v8;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v8 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v9;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v9 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v10;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v10 = 0;
    IData/*31:0*/ __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v11;
    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v11 = 0;
    // Body
    if (vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n) {
        if (vlSelf->io_enable) {
            if (VL_UNLIKELY(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_wen_Req)) {
                VL_WRITEF("checking\n");
                vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp = 1U;
                if ((0x40007000U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007004U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007008U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007012U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007016U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007020U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007024U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007028U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007032U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007036U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007040U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007044U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007048U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007052U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007056U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007060U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007064U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007068U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007072U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007076U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007080U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007084U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007088U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007092U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007096U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007100U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007104U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007108U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007112U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007116U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007120U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007124U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007128U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007132U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007136U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007140U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007144U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007148U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007152U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007156U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007160U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007164U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007168U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007172U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007176U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007180U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007184U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007188U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007192U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007196U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007200U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007204U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007208U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007212U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007216U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007220U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007224U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007228U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007232U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007236U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007240U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007244U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007248U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007252U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007256U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007260U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007264U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007268U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007272U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007276U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007280U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007284U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007288U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007292U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007296U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007300U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007304U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007308U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007312U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007316U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007320U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007324U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007328U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007332U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007336U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007340U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007344U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007348U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007352U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req;
                } else if ((0x40007356U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v0 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000;
                    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v0 = 1U;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v0 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v0 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00;
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][0U][0U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][0U][1U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][0U][2U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][0U][3U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][1U][0U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][1U][1U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][1U][2U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][1U][3U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][2U][0U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][2U][1U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][2U][2U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][2U][3U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][3U][0U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][3U][1U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][3U][2U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [0U][3U][3U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [1U][0U][0U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [1U][0U][1U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [1U][0U][2U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [1U][0U][3U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [1U][1U][0U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [1U][1U][1U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [1U][1U][2U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                        [1U][1U][3U];
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v1 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001;
                    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v1 = 1U;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v1 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v1 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v2 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v2 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v2 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v3 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v3 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v3 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v4 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v4 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v4 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v5 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v5 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v5 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v6 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v6 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v6 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v7 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v7 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v7 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v8 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v9 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v10 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v11 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v12 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v13 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v14 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v15 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033;
                } else if ((0x40007360U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v0 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000;
                    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v0 = 1U;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v0 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v0 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v0 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0;
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [0U][0U][0U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [0U][0U][1U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [0U][0U][2U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [0U][0U][3U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [0U][1U][0U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [0U][1U][1U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [0U][1U][2U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [0U][1U][3U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [1U][0U][0U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [1U][0U][1U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [1U][0U][2U];
                    vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                        [1U][0U][3U];
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v1 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001;
                    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v1 = 1U;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v1 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v1 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v1 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v2 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v2 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v2 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v2 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v3 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v3 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v3 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v3 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v4 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v4 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v4 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v5 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v5 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v5 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v6 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v6 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v6 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v7 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v7 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v7 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v8 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v9 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v10 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v11 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v12 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v13 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v14 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v15 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v16 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v17 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v18 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v19 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v20 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v21 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v22 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112;
                    vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v23 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113;
                } else if ((0x40007364U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v0 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000;
                    vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v0 = 1U;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v0 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                        [1U][3U];
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v1 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v1 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                        [1U][2U];
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v2 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v2 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                        [1U][1U];
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v3 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v3 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                        [1U][0U];
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v4 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v4 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                        [0U][3U];
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v5 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v5 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                        [0U][2U];
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v6 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v6 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                        [0U][1U];
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v7 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v7 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                        [0U][0U];
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v8 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v9 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v10 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102;
                    __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v11 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103;
                }
            } else if ((1U & (~ (IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_wen_Req)))) {
                if ((0x40007000U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000;
                } else if ((0x40007004U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001;
                } else if ((0x40007008U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002;
                } else if ((0x40007012U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003;
                } else if ((0x40007016U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010;
                } else if ((0x40007020U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011;
                } else if ((0x40007024U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012;
                } else if ((0x40007028U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013;
                } else if ((0x40007032U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020;
                } else if ((0x40007036U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021;
                } else if ((0x40007040U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022;
                } else if ((0x40007044U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023;
                } else if ((0x40007048U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030;
                } else if ((0x40007052U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031;
                } else if ((0x40007056U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032;
                } else if ((0x40007060U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033;
                } else if ((0x40007064U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100;
                } else if ((0x40007068U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101;
                } else if ((0x40007072U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102;
                } else if ((0x40007076U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103;
                } else if ((0x40007080U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110;
                } else if ((0x40007084U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111;
                } else if ((0x40007088U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112;
                } else if ((0x40007092U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113;
                } else if ((0x40007096U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000;
                } else if ((0x40007100U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001;
                } else if ((0x40007104U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002;
                } else if ((0x40007108U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003;
                } else if ((0x40007112U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010;
                } else if ((0x40007116U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011;
                } else if ((0x40007120U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012;
                } else if ((0x40007124U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013;
                } else if ((0x40007128U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100;
                } else if ((0x40007132U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101;
                } else if ((0x40007136U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102;
                } else if ((0x40007140U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103;
                } else if ((0x40007144U == vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req)) {
                    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp 
                        = vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message;
                }
            }
        }
    } else {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j = 4U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__i = 2U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j = 4U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__i = 4U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk5__DOT__i = 4U;
        vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v8 = 1U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102 = 0U;
        vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103 = 0U;
        vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v13 = 1U;
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_wen_Req 
        = ((IData)(vlSelf->BabyKyberHarness__DOT__babykyber__DOT____VdfgTmp_h8b34f32d__0) 
           & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we));
    if (vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req 
            = vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__adrReg;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req 
            = vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__datReg;
    } else {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req = 0U;
    }
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103;
    vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message 
        = vlSelf->__Vdly__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message;
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[0U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[0U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[0U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v0;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v1) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[0U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[0U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[0U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v3;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[1U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v4;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[1U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v5;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[1U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v6;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[1U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg__v7;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[0U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[0U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[0U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v3;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[1U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v4;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[1U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v5;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[1U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v6;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[1U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg__v7;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[0U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[0U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[0U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v3;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[1U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v4;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[1U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v5;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[1U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v6;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[1U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v7;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[2U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v8;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[2U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v9;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[2U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v10;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[2U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v11;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[3U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v12;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[3U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v13;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[3U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v14;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[3U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg__v15;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v3;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v4;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v5;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v6;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v7;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v3;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v4;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v5;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v6;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v7;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v8;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v9;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v10;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v11;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v8) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[0U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v13) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result[1U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg[1U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v16) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v16;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v17;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v18;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v19;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v20;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v21;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v22;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v23;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v24) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey[1U][3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[0U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v0;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[0U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v0;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v1) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2__v3;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[0U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[0U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[0U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v3;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[1U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v4;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[1U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v5;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[1U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v6;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[1U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1__v7;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[0U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[0U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[0U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v3;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[1U][0U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v4;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[1U][1U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v5;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[1U][2U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v6;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[1U][3U] 
            = __Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r__v7;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v8) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[0U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[0U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[0U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[0U][0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v13) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[0U][1U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext[1U][1U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1[1U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg[1U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[1U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[2U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[2U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[2U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[2U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[3U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[3U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[3U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg[3U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r[1U][3U] = 0U;
    }
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
}

VL_INLINE_OPT void VBabyKyberHarness___024root___nba_sequent__TOP__3(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___nba_sequent__TOP__3\n"); );
    // Body
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v0) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v0;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v1) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v1;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v2;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v3;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v4;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v5;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v6;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v7;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v8;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v9;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v10;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v11;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v12;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v13;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v14;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v15;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v16;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v17;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v18;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v19;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v20;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v21;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v22;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v23;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey__v8) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext__v13) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][2U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][2U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][2U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][2U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][3U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][3U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][3U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][3U][3U] = 0U;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v56) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v56;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v57;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v58;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v59;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v60;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v61;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v62;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v63;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v64;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v65;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v66;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v67;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v68;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v69;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v70;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v71;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v72;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v73;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v74;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v75;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][0U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v76;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][1U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v77;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][2U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v78;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][3U] 
            = vlSelf->__Vdlyvval__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v79;
    }
    if (vlSelf->__Vdlyvset__BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key__v80) {
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][1U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][2U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[0U][3U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][0U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][1U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][2U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][2U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][2U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][2U][3U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][3U][0U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][3U][1U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][3U][2U] = 0U;
        vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key[1U][3U][3U] = 0U;
    }
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
}

VL_INLINE_OPT void VBabyKyberHarness___024root___nba_comb__TOP__0(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___nba_comb__TOP__0\n"); );
    // Body
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
}

void VBabyKyberHarness___024root___eval_nba(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBabyKyberHarness___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBabyKyberHarness___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBabyKyberHarness___024root___nba_sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[4U] = 1U;
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBabyKyberHarness___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[5U] = 1U;
    }
    if ((3ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VBabyKyberHarness___024root___nba_comb__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[6U] = 1U;
    }
}

void VBabyKyberHarness___024root___eval_triggers__act(VBabyKyberHarness___024root* vlSelf);

bool VBabyKyberHarness___024root___eval_phase__act(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<2> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    VBabyKyberHarness___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        VBabyKyberHarness___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool VBabyKyberHarness___024root___eval_phase__nba(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        VBabyKyberHarness___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberHarness___024root___dump_triggers__ico(VBabyKyberHarness___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberHarness___024root___dump_triggers__nba(VBabyKyberHarness___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VBabyKyberHarness___024root___dump_triggers__act(VBabyKyberHarness___024root* vlSelf);
#endif  // VL_DEBUG

void VBabyKyberHarness___024root___eval(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            VBabyKyberHarness___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("BabyKyberHarness.v", 358, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (VBabyKyberHarness___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            VBabyKyberHarness___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("BabyKyberHarness.v", 358, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                VBabyKyberHarness___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("BabyKyberHarness.v", 358, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (VBabyKyberHarness___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (VBabyKyberHarness___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void VBabyKyberHarness___024root___eval_debug_assertions(VBabyKyberHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clock & 0xfeU))) {
        Verilated::overWidthError("clock");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((vlSelf->io_req_valid & 0xfeU))) {
        Verilated::overWidthError("io_req_valid");}
    if (VL_UNLIKELY((vlSelf->io_req_bits_activeByteLane 
                     & 0xf0U))) {
        Verilated::overWidthError("io_req_bits_activeByteLane");}
    if (VL_UNLIKELY((vlSelf->io_req_bits_isWrite & 0xfeU))) {
        Verilated::overWidthError("io_req_bits_isWrite");}
    if (VL_UNLIKELY((vlSelf->io_rsp_ready & 0xfeU))) {
        Verilated::overWidthError("io_rsp_ready");}
    if (VL_UNLIKELY((vlSelf->io_enable & 0xfeU))) {
        Verilated::overWidthError("io_enable");}
    if (VL_UNLIKELY((vlSelf->io_key_enable & 0xfeU))) {
        Verilated::overWidthError("io_key_enable");}
    if (VL_UNLIKELY((vlSelf->io_encryption_enable & 0xfeU))) {
        Verilated::overWidthError("io_encryption_enable");}
    if (VL_UNLIKELY((vlSelf->io_decryption_enable & 0xfeU))) {
        Verilated::overWidthError("io_decryption_enable");}
}
#endif  // VL_DEBUG
