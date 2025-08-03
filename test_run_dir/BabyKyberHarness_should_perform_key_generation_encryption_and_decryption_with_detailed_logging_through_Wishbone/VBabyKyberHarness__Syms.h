// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VBABYKYBERHARNESS__SYMS_H_
#define VERILATED_VBABYKYBERHARNESS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VBabyKyberHarness.h"

// INCLUDE MODULE CLASSES
#include "VBabyKyberHarness___024root.h"

// SYMS CLASS (contains all model state)
class VBabyKyberHarness__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VBabyKyberHarness* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VBabyKyberHarness___024root    TOP;

    // CONSTRUCTORS
    VBabyKyberHarness__Syms(VerilatedContext* contextp, const char* namep, VBabyKyberHarness* modelp);
    ~VBabyKyberHarness__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
