// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vkyber.h"
#include "Vkyber__Syms.h"

//============================================================
// Constructors

Vkyber::Vkyber(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vkyber__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_write_en{vlSymsp->TOP.io_write_en}
    , io_read_en{vlSymsp->TOP.io_read_en}
    , io_dmemReq_ready{vlSymsp->TOP.io_dmemReq_ready}
    , io_dmemReq_valid{vlSymsp->TOP.io_dmemReq_valid}
    , io_dmemReq_bits_activeByteLane{vlSymsp->TOP.io_dmemReq_bits_activeByteLane}
    , io_dmemReq_bits_isWrite{vlSymsp->TOP.io_dmemReq_bits_isWrite}
    , io_dmemRes_ready{vlSymsp->TOP.io_dmemRes_ready}
    , io_dmemRes_valid{vlSymsp->TOP.io_dmemRes_valid}
    , io_addr{vlSymsp->TOP.io_addr}
    , io_write_data{vlSymsp->TOP.io_write_data}
    , io_read_data{vlSymsp->TOP.io_read_data}
    , io_dmemReq_bits_addrRequest{vlSymsp->TOP.io_dmemReq_bits_addrRequest}
    , io_dmemReq_bits_dataRequest{vlSymsp->TOP.io_dmemReq_bits_dataRequest}
    , io_dmemRes_bits_dataResponse{vlSymsp->TOP.io_dmemRes_bits_dataResponse}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vkyber::Vkyber(const char* _vcname__)
    : Vkyber(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vkyber::~Vkyber() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vkyber___024root___eval_initial(Vkyber___024root* vlSelf);
void Vkyber___024root___eval_settle(Vkyber___024root* vlSelf);
void Vkyber___024root___eval(Vkyber___024root* vlSelf);
#ifdef VL_DEBUG
void Vkyber___024root___eval_debug_assertions(Vkyber___024root* vlSelf);
#endif  // VL_DEBUG
void Vkyber___024root___final(Vkyber___024root* vlSelf);

static void _eval_initial_loop(Vkyber__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vkyber___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vkyber___024root___eval_settle(&(vlSymsp->TOP));
        Vkyber___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void Vkyber::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vkyber::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vkyber___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vkyber___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* Vkyber::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vkyber::final() {
    Vkyber___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vkyber::hierName() const { return vlSymsp->name(); }
const char* Vkyber::modelName() const { return "Vkyber"; }
unsigned Vkyber::threads() const { return 1; }
