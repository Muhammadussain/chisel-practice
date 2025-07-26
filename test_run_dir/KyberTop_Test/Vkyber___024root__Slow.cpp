// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vkyber.h for the primary calling header

#include "verilated.h"

#include "Vkyber__Syms.h"
#include "Vkyber___024root.h"

void Vkyber___024root___ctor_var_reset(Vkyber___024root* vlSelf);

Vkyber___024root::Vkyber___024root(Vkyber__Syms* symsp, const char* name)
    : VerilatedModule{name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vkyber___024root___ctor_var_reset(this);
}

void Vkyber___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vkyber___024root::~Vkyber___024root() {
}
