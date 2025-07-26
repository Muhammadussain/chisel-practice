// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VKYBER__SYMS_H_
#define VERILATED_VKYBER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vkyber.h"

// INCLUDE MODULE CLASSES
#include "Vkyber___024root.h"

// SYMS CLASS (contains all model state)
class Vkyber__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vkyber* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vkyber___024root               TOP;

    // CONSTRUCTORS
    Vkyber__Syms(VerilatedContext* contextp, const char* namep, Vkyber* modelp);
    ~Vkyber__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
