// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBabyKyberHarness.h"
#include "VBabyKyberHarness__Syms.h"

//============================================================
// Constructors

VBabyKyberHarness::VBabyKyberHarness(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VBabyKyberHarness__Syms(contextp(), _vcname__, this)}
    , clock{vlSymsp->TOP.clock}
    , reset{vlSymsp->TOP.reset}
    , io_req_ready{vlSymsp->TOP.io_req_ready}
    , io_req_valid{vlSymsp->TOP.io_req_valid}
    , io_req_bits_activeByteLane{vlSymsp->TOP.io_req_bits_activeByteLane}
    , io_req_bits_isWrite{vlSymsp->TOP.io_req_bits_isWrite}
    , io_rsp_ready{vlSymsp->TOP.io_rsp_ready}
    , io_rsp_valid{vlSymsp->TOP.io_rsp_valid}
    , io_rsp_bits_error{vlSymsp->TOP.io_rsp_bits_error}
    , io_enable{vlSymsp->TOP.io_enable}
    , io_key_enable{vlSymsp->TOP.io_key_enable}
    , io_encryption_enable{vlSymsp->TOP.io_encryption_enable}
    , io_decryption_enable{vlSymsp->TOP.io_decryption_enable}
    , io_cio_babykyber_intr_key{vlSymsp->TOP.io_cio_babykyber_intr_key}
    , io_cio_babykyber_intr_encrypt{vlSymsp->TOP.io_cio_babykyber_intr_encrypt}
    , io_cio_babykyber_intr_decrypt{vlSymsp->TOP.io_cio_babykyber_intr_decrypt}
    , io_req_bits_addrRequest{vlSymsp->TOP.io_req_bits_addrRequest}
    , io_req_bits_dataRequest{vlSymsp->TOP.io_req_bits_dataRequest}
    , io_rsp_bits_dataResponse{vlSymsp->TOP.io_rsp_bits_dataResponse}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VBabyKyberHarness::VBabyKyberHarness(const char* _vcname__)
    : VBabyKyberHarness(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VBabyKyberHarness::~VBabyKyberHarness() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VBabyKyberHarness___024root___eval_initial(VBabyKyberHarness___024root* vlSelf);
void VBabyKyberHarness___024root___eval_settle(VBabyKyberHarness___024root* vlSelf);
void VBabyKyberHarness___024root___eval(VBabyKyberHarness___024root* vlSelf);
QData VBabyKyberHarness___024root___change_request(VBabyKyberHarness___024root* vlSelf);
#ifdef VL_DEBUG
void VBabyKyberHarness___024root___eval_debug_assertions(VBabyKyberHarness___024root* vlSelf);
#endif  // VL_DEBUG
void VBabyKyberHarness___024root___final(VBabyKyberHarness___024root* vlSelf);

static void _eval_initial_loop(VBabyKyberHarness__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VBabyKyberHarness___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VBabyKyberHarness___024root___eval_settle(&(vlSymsp->TOP));
        VBabyKyberHarness___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VBabyKyberHarness___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("BabyKyberHarness.v", 358, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VBabyKyberHarness___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VBabyKyberHarness::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBabyKyberHarness::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBabyKyberHarness___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VBabyKyberHarness___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VBabyKyberHarness___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("BabyKyberHarness.v", 358, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VBabyKyberHarness___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
    // Evaluate cleanup
}

//============================================================
// Utilities

const char* VBabyKyberHarness::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VBabyKyberHarness::final() {
    VBabyKyberHarness___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBabyKyberHarness::hierName() const { return vlSymsp->name(); }
const char* VBabyKyberHarness::modelName() const { return "VBabyKyberHarness"; }
unsigned VBabyKyberHarness::threads() const { return 1; }
