// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VBabyKyberHarness.h for the primary calling header

#include "verilated.h"

#include "VBabyKyberHarness__Syms.h"
#include "VBabyKyberHarness___024root.h"

void VBabyKyberHarness___024root___ctor_var_reset(VBabyKyberHarness___024root* vlSelf);

VBabyKyberHarness___024root::VBabyKyberHarness___024root(VBabyKyberHarness__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VBabyKyberHarness___024root___ctor_var_reset(this);
}

void VBabyKyberHarness___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VBabyKyberHarness___024root::~VBabyKyberHarness___024root() {
}
