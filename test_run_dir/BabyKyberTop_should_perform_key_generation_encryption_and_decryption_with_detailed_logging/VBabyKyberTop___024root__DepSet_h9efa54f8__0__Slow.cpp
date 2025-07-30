// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBabyKyberTop.h for the primary calling header

#include "verilated.h"

#include "VBabyKyberTop___024root.h"

VL_ATTR_COLD void VBabyKyberTop___024root___initial__TOP__0(VBabyKyberTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___initial__TOP__0\n"); );
    // Body
    vlSelf->io_req_ready = 1U;
}

VL_ATTR_COLD void VBabyKyberTop___024root___settle__TOP__0(VBabyKyberTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___settle__TOP__0\n"); );
    // Init
    IData/*31:0*/ BabyKyberTop__DOT__bkyber__DOT__decimal_value;
    // Body
    vlSelf->BabyKyberTop__DOT__bkyber_wen_Req = ((IData)(vlSelf->io_req_valid) 
                                                 & (IData)(vlSelf->io_req_bits_isWrite));
    vlSelf->io_rsp_valid = vlSelf->BabyKyberTop__DOT__validReg;
    vlSelf->io_rsp_bits_dataResponse = vlSelf->BabyKyberTop__DOT__bkyber_data_Resp;
    vlSelf->io_key_done = vlSelf->BabyKyberTop__DOT__bkyber_key_done;
    vlSelf->io_encryption_done = vlSelf->BabyKyberTop__DOT__bkyber_encryption_done;
    vlSelf->io_decryption_done = vlSelf->BabyKyberTop__DOT__bkyber_decryption_done;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[3U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[3U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[3U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[3U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[2U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[2U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[2U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[2U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[0U] 
        = ((1U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[1U] 
        = ((2U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[2U] 
        = ((4U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[3U] 
        = ((8U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients))
            ? 9U : 0U);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][3U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][2U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[1U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [1U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][3U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][2U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[0U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
        [0U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber_rst_n = (1U & 
                                               (~ (IData)(vlSelf->reset)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][3U] = 0U;
    if (vlSelf->io_key_enable) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[0U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [0U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[0U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [0U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                          [0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
               [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                                     [0U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                          [0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
               [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                                     [0U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[1U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [1U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[1U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [1U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                          [1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
               [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                                     [1U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                          [1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
               [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                                     [1U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[2U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [2U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[2U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [2U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                          [2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
               [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                                     [2U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                          [2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
               [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                                     [2U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[3U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0
               [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1
               [3U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[3U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2
               [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3
               [3U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                          [3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
               [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
                                     [3U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                          [3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
               [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
                                     [3U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][0U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
               [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
               [0U][0U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][0U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
               [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
               [1U][0U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                          [0U][0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
               [0U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                                         [0U][0U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                          [1U][0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
               [1U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                                         [1U][0U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][1U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
               [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
               [0U][1U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][1U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
               [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
               [1U][1U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                          [0U][1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
               [0U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                                         [0U][1U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                          [1U][1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
               [1U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                                         [1U][1U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][2U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
               [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
               [0U][2U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][2U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
               [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
               [1U][2U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                          [0U][2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
               [0U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                                         [0U][2U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                          [1U][2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
               [1U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                                         [1U][2U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][3U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added
               [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
               [0U][3U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][3U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1
               [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
               [1U][3U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[0U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                          [0U][3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
               [0U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                                         [0U][3U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[1U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                          [1U][3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
               [1U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                                         [1U][3U], (IData)(0x11U)));
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
        [3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] = 0U;
    if (vlSelf->io_encryption_enable) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[0U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [0U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                          [0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
               [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                                     [0U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[1U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [1U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                          [1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
               [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                                     [1U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[2U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [2U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                          [2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
               [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                                     [2U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[3U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4
               [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5
               [3U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                          [3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
               [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
                                     [3U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[0U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [0U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[0U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [0U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                          [0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
               [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                                     [0U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                          [0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
               [0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                                     [0U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[1U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [1U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[1U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [1U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                          [1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
               [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                                     [1U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                          [1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
               [1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                                     [1U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[2U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [2U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[2U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [2U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                          [2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
               [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                                     [2U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                          [2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
               [2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                                     [2U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[3U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0
               [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1
               [3U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[3U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2
               [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3
               [3U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                          [3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
               [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
                                     [3U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                          [3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
               [3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
                                     [3U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
               [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
               [0U][0U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
               [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
               [1U][0U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
               [0U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][0U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][0U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][0U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
               [1U][0U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][0U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
               [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
               [0U][1U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
               [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
               [1U][1U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
               [0U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][1U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][1U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][1U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
               [1U][1U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][1U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
               [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
               [0U][2U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
               [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
               [1U][2U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
               [0U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][2U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][2U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][2U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
               [1U][2U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][2U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added
               [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
               [0U][3U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] 
            = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1
               [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
               [1U][3U]);
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[0U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                          [0U][3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
               [0U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                         [0U][3U], (IData)(0x11U)));
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[1U][3U] 
            = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                          [1U][3U]) ? vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
               [1U][3U] : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                                         [1U][3U], (IData)(0x11U)));
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][3U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][3U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][3U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][3U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][2U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][2U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][2U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][2U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[1U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [1U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][3U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][3U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][3U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][3U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][2U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][2U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][2U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][2U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[0U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
        [0U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[0U] 
        = ((vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
            [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2
            [0U]) - vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [3U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                      [0U]) ? ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                               [0U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                                                      [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[1U] 
        = ((vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
            [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2
            [1U]) - vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [2U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                      [1U]) ? ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                               [1U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                                                      [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[2U] 
        = ((vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
            [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2
            [2U]) - vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [1U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                      [2U]) ? ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                               [2U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                                                      [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[3U] 
        = ((vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2
            [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2
            [3U]) - vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled
           [0U]);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                      [3U]) ? ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                               [3U]) : VL_MODDIVS_III(32, 
                                                      vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
                                                      [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[0U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[1U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[0U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[1U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[0U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[1U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[0U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[1U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[0U][1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[1U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[0U][1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[1U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[0U][1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[1U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[0U][1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[1U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v
        [3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [1U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [1U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [1U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [1U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [1U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [1U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [1U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [1U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[3U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[2U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
        [0U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [1U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [1U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [1U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [1U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [1U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [1U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [1U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[1U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [1U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [0U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [0U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [0U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [0U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [0U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [0U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [0U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[0U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
        [0U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[2U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[2U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[2U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[2U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[3U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[3U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[3U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[3U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
        [3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[1U][1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [1U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[1U][1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [1U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[1U][1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [1U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[1U][1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [1U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[1U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [1U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[1U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [1U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[1U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [1U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[1U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [1U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[0U][1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[0U][1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[0U][1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[0U][1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[0U][0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[0U][0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[0U][0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[0U][0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
        [0U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[3U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[2U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[1U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[0U][0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
           [1U][0U][0U] - (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [0U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [0U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [0U])) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [0U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [0U])) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [0U]);
        }
    } else {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [0U], (IData)(0x11U));
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
           [1U][0U][1U] - (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [1U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [1U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [1U])) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [1U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [1U])) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [1U]);
        }
    } else {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [1U], (IData)(0x11U));
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
           [1U][0U][2U] - (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [2U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [2U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [2U])) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [2U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [2U])) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [2U]);
        }
    } else {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [2U], (IData)(0x11U));
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
           [1U][0U][3U] - (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0
                           [3U] + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1
                           [3U]));
    if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [3U])) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
            = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
               [3U]);
        if (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                       [3U])) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
                = ((IData)(0x11U) + vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                   [3U]);
        }
    } else {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
            = VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                             [3U], (IData)(0x11U));
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [0U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [0U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [1U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [1U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [2U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [2U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3U] 
        = (VL_GTS_III(32, 5U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                      [3U]) ? 0U : (VL_GTS_III(32, 0xeU, 
                                               vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                               [3U])
                                     ? 9U : 0U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b = (
                                                   (0xeU 
                                                    & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b)) 
                                                   | ((9U 
                                                       == 
                                                       vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                                       [0U])
                                                       ? 1U
                                                       : 0U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b = (
                                                   (0xdU 
                                                    & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b)) 
                                                   | (((9U 
                                                        == 
                                                        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                                        [1U])
                                                        ? 1U
                                                        : 0U) 
                                                      << 1U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b = (
                                                   (0xbU 
                                                    & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b)) 
                                                   | (((9U 
                                                        == 
                                                        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                                        [2U])
                                                        ? 1U
                                                        : 0U) 
                                                      << 2U));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b = (
                                                   (7U 
                                                    & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b)) 
                                                   | (((9U 
                                                        == 
                                                        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n
                                                        [3U])
                                                        ? 1U
                                                        : 0U) 
                                                      << 3U));
    BabyKyberTop__DOT__bkyber__DOT__decimal_value = 
        (((((1U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b))
             ? 8U : 0U) | ((2U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b))
                            ? 4U : 0U)) | ((4U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b))
                                            ? 2U : 0U)) 
         | ((8U & (IData)(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b))
             ? 1U : 0U));
    VL_WRITEF("decimal_value = %0#\n",32,BabyKyberTop__DOT__bkyber__DOT__decimal_value);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
        [0U][0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
        [0U][0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
        [0U][0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
        [0U][0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
        [0U][1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
        [0U][1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
        [0U][1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
        [0U][1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [0U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [1U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [2U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[3U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][3U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[2U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][2U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[1U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][1U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[0U] 
        = vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
        [3U][0U];
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result
                             [3U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] = 0U;
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [0U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [3U] + VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [0U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [1U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [2U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [0U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [1U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [1U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [2U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
           [2U] - VL_MULS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1
                              [3U], vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2
                              [3U]));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [0U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [0U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [0U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [1U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [1U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [1U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [2U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [2U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [2U], (IData)(0x11U)));
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3U] 
        = (VL_GTS_III(32, 0U, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                      [3U]) ? VL_MODDIVS_III(32, ((IData)(0x11U) 
                                                  + 
                                                  VL_MODDIVS_III(32, 
                                                                 vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                                                                 [3U], (IData)(0x11U))), (IData)(0x11U))
            : VL_MODDIVS_III(32, vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result
                             [3U], (IData)(0x11U)));
}

VL_ATTR_COLD void VBabyKyberTop___024root___eval_initial(VBabyKyberTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval_initial\n"); );
    // Body
    VBabyKyberTop___024root___initial__TOP__0(vlSelf);
    vlSelf->__Vclklast__TOP__clock = vlSelf->clock;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__BabyKyberTop__DOT__bkyber_rst_n 
        = vlSelf->__VinpClk__TOP__BabyKyberTop__DOT__bkyber_rst_n;
}

VL_ATTR_COLD void VBabyKyberTop___024root___eval_settle(VBabyKyberTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___eval_settle\n"); );
    // Body
    VBabyKyberTop___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void VBabyKyberTop___024root___final(VBabyKyberTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___final\n"); );
}

VL_ATTR_COLD void VBabyKyberTop___024root___ctor_var_reset(VBabyKyberTop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root___ctor_var_reset\n"); );
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
    vlSelf->io_enable = VL_RAND_RESET_I(1);
    vlSelf->io_key_enable = VL_RAND_RESET_I(1);
    vlSelf->io_encryption_enable = VL_RAND_RESET_I(1);
    vlSelf->io_decryption_enable = VL_RAND_RESET_I(1);
    vlSelf->io_key_done = VL_RAND_RESET_I(1);
    vlSelf->io_encryption_done = VL_RAND_RESET_I(1);
    vlSelf->io_decryption_done = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberTop__DOT__bkyber_rst_n = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberTop__DOT__bkyber_wen_Req = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberTop__DOT__bkyber_data_Resp = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber_key_done = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberTop__DOT__bkyber_encryption_done = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberTop__DOT__bkyber_decryption_done = VL_RAND_RESET_I(1);
    vlSelf->BabyKyberTop__DOT__validReg = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            for (int __Vi2=0; __Vi2<4; ++__Vi2) {
                vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            for (int __Vi2=0; __Vi2<4; ++__Vi2) {
                vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__r[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b = VL_RAND_RESET_I(4);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t000 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t001 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t002 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t003 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t010 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t011 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t012 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t013 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t020 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t021 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t022 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t023 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t030 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t031 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t032 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t033 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_00 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_01 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_02 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_03 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_10 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_11 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_12 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_13 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_00 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_01 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_02 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_03 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_10 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_11 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_12 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_13 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__message = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key000 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key001 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key002 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key003 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key010 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key011 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key012 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key013 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key020 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key021 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key022 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key023 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key030 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key031 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key032 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key033 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key100 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key101 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key102 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key103 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key110 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key111 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key112 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key113 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_00 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_01 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_02 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_03 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_10 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_11 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_12 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_13 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_00 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_01 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_02 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_03 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_10 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_11 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_12 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_13 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_0 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_1 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_2 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_3 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext000 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext001 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext002 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext003 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext010 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext011 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext012 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext013 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext100 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext101 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext102 = VL_RAND_RESET_I(32);
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext103 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            for (int __Vi2=0; __Vi2<4; ++__Vi2) {
                vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            for (int __Vi2=0; __Vi2<4; ++__Vi2) {
                vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            for (int __Vi2=0; __Vi2<4; ++__Vi2) {
                vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<2; ++__Vi1) {
            for (int __Vi2=0; __Vi2<4; ++__Vi2) {
                vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext[__Vi0][__Vi1][__Vi2] = VL_RAND_RESET_I(32);
            }
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__key_done_next = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients = VL_RAND_RESET_I(4);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        for (int __Vi1=0; __Vi1<4; ++__Vi1) {
            vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in[__Vi0][__Vi1] = VL_RAND_RESET_I(32);
        }
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__decryption_done_next = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__VinpClk__TOP__BabyKyberTop__DOT__bkyber_rst_n = VL_RAND_RESET_I(1);
    vlSelf->__Vchglast__TOP__BabyKyberTop__DOT__bkyber_rst_n = VL_RAND_RESET_I(1);
}
