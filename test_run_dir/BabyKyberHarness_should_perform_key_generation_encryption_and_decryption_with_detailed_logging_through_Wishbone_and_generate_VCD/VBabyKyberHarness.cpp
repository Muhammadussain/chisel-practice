// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VBabyKyberHarness__pch.h"
#include "verilated_vcd_c.h"

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
// Evaluation function

#ifdef VL_DEBUG
void VBabyKyberHarness___024root___eval_debug_assertions(VBabyKyberHarness___024root* vlSelf);
#endif  // VL_DEBUG
void VBabyKyberHarness___024root___eval_static(VBabyKyberHarness___024root* vlSelf);
void VBabyKyberHarness___024root___eval_initial(VBabyKyberHarness___024root* vlSelf);
void VBabyKyberHarness___024root___eval_settle(VBabyKyberHarness___024root* vlSelf);
void VBabyKyberHarness___024root___eval(VBabyKyberHarness___024root* vlSelf);

void VBabyKyberHarness::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VBabyKyberHarness::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VBabyKyberHarness___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VBabyKyberHarness___024root___eval_static(&(vlSymsp->TOP));
        VBabyKyberHarness___024root___eval_initial(&(vlSymsp->TOP));
        VBabyKyberHarness___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VBabyKyberHarness___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VBabyKyberHarness::eventsPending() { return false; }

uint64_t VBabyKyberHarness::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VBabyKyberHarness::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VBabyKyberHarness___024root___eval_final(VBabyKyberHarness___024root* vlSelf);

VL_ATTR_COLD void VBabyKyberHarness::final() {
    VBabyKyberHarness___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VBabyKyberHarness::hierName() const { return vlSymsp->name(); }
const char* VBabyKyberHarness::modelName() const { return "VBabyKyberHarness"; }
unsigned VBabyKyberHarness::threads() const { return 1; }
void VBabyKyberHarness::prepareClone() const { contextp()->prepareClone(); }
void VBabyKyberHarness::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VBabyKyberHarness::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VBabyKyberHarness___024root__trace_decl_types(VerilatedVcd* tracep);

void VBabyKyberHarness___024root__trace_init_top(VBabyKyberHarness___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VBabyKyberHarness___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBabyKyberHarness___024root*>(voidSelf);
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VBabyKyberHarness___024root__trace_decl_types(tracep);
    VBabyKyberHarness___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_register(VBabyKyberHarness___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VBabyKyberHarness::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VBabyKyberHarness::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VBabyKyberHarness___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
