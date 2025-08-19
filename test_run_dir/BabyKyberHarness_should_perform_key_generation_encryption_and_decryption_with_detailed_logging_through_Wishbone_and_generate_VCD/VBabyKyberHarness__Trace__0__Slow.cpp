// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBabyKyberHarness__Syms.h"


VL_ATTR_COLD void VBabyKyberHarness___024root__trace_init_sub__TOP__0(VBabyKyberHarness___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+518,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"io_req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"io_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+522,0,"io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"io_req_bits_dataRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+524,0,"io_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+525,0,"io_req_bits_isWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"io_rsp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"io_rsp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+529,0,"io_rsp_bits_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"io_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"io_key_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"io_encryption_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"io_decryption_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"io_cio_babykyber_intr_key",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"io_cio_babykyber_intr_encrypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"io_cio_babykyber_intr_decrypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("BabyKyberHarness", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+520,0,"io_req_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"io_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+522,0,"io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"io_req_bits_dataRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+524,0,"io_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+525,0,"io_req_bits_isWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+526,0,"io_rsp_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"io_rsp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+529,0,"io_rsp_bits_error",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"io_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"io_key_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"io_encryption_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"io_decryption_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"io_cio_babykyber_intr_key",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"io_cio_babykyber_intr_encrypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"io_cio_babykyber_intr_decrypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"hostAdapter_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"hostAdapter_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"hostAdapter_io_wbMasterTransmitter_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"hostAdapter_io_wbMasterTransmitter_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"hostAdapter_io_wbMasterTransmitter_bits_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"hostAdapter_io_wbMasterTransmitter_bits_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"hostAdapter_io_wbMasterTransmitter_bits_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"hostAdapter_io_wbMasterTransmitter_bits_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"hostAdapter_io_wbMasterTransmitter_bits_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"hostAdapter_io_wbMasterTransmitter_bits_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+541,0,"hostAdapter_io_wbSlaveReceiver_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"hostAdapter_io_wbSlaveReceiver_bits_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"hostAdapter_io_wbSlaveReceiver_bits_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+520,0,"hostAdapter_io_reqIn_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"hostAdapter_io_reqIn_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+522,0,"hostAdapter_io_reqIn_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"hostAdapter_io_reqIn_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+524,0,"hostAdapter_io_reqIn_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+525,0,"hostAdapter_io_reqIn_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"hostAdapter_io_rspOut_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"hostAdapter_io_rspOut_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+541,0,"deviceAdapter_io_wbSlaveTransmitter_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"deviceAdapter_io_wbSlaveTransmitter_bits_ack",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"deviceAdapter_io_wbSlaveTransmitter_bits_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+541,0,"deviceAdapter_io_wbMasterReceiver_ready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"deviceAdapter_io_wbMasterReceiver_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"deviceAdapter_io_wbMasterReceiver_bits_cyc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"deviceAdapter_io_wbMasterReceiver_bits_stb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"deviceAdapter_io_wbMasterReceiver_bits_we",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"deviceAdapter_io_wbMasterReceiver_bits_adr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"deviceAdapter_io_wbMasterReceiver_bits_dat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"deviceAdapter_io_wbMasterReceiver_bits_sel",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+85,0,"deviceAdapter_io_reqOut_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"deviceAdapter_io_reqOut_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"deviceAdapter_io_reqOut_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"deviceAdapter_io_reqOut_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"deviceAdapter_io_reqOut_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"deviceAdapter_io_rspIn_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"deviceAdapter_io_rspIn_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+518,0,"babykyber_clock",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"babykyber_reset",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"babykyber_io_req_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"babykyber_io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"babykyber_io_req_bits_dataRequest",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"babykyber_io_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"babykyber_io_req_bits_isWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"babykyber_io_rsp_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"babykyber_io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+530,0,"babykyber_io_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"babykyber_io_key_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"babykyber_io_encryption_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"babykyber_io_decryption_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"babykyber_io_cio_babykyber_intr_key",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"babykyber_io_cio_babykyber_intr_encrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"babykyber_io_cio_babykyber_intr_decrypt",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("babykyber", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+85,0,"io_req_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"io_req_bits_addrRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"io_req_bits_dataRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_req_bits_activeByteLane",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"io_req_bits_isWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"io_rsp_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"io_rsp_bits_dataResponse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+530,0,"io_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"io_key_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"io_encryption_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"io_decryption_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+534,0,"io_cio_babykyber_intr_key",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+535,0,"io_cio_babykyber_intr_encrypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+536,0,"io_cio_babykyber_intr_decrypt",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+518,0,"bkyber_clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"bkyber_rst_n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"bkyber_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"bkyber_key_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"bkyber_encryption_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"bkyber_decryption_enable",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"bkyber_data_Req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"bkyber_addr_Req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"bkyber_wen_Req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"bkyber_bytelane_Req",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"bkyber_data_Resp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+109,0,"bkyber_key_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"bkyber_encryption_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"bkyber_decryption_done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"validReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("bkyber", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+530,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"key_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"encryption_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"decryption_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+169,0,"data_Req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+168,0,"addr_Req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+171,0,"wen_Req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"key_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+88,0,"encryption_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+110,0,"decryption_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+87,0,"bytelane_Req",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+170,0,"data_Resp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("secretkey", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+172,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+176,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+6,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+10,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("public_key", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+406,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+407,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+408,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+409,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+410,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+412,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+414,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+418,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+422,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+424,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+425,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+426,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+430,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+434,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("A_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+180,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+184,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+188,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+192,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("s_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+196,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+200,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("e_reg", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+204,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+208,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ciphertext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+14,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+18,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+22,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+26,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("r", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+212,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+216,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("e1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+220,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+224,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("e2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+228+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+30,0,"decimal_value",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"m_b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBus(c+232,0,"A_t000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+233,0,"A_t001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+234,0,"A_t002",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+235,0,"A_t003",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+236,0,"A_t010",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+237,0,"A_t011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+238,0,"A_t012",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+239,0,"A_t013",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+240,0,"A_t020",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+241,0,"A_t021",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+242,0,"A_t022",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+243,0,"A_t023",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+244,0,"A_t030",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+245,0,"A_t031",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+246,0,"A_t032",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+247,0,"A_t033",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+248,0,"s_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+249,0,"s_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+250,0,"s_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+251,0,"s_03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+252,0,"s_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+253,0,"s_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+254,0,"s_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+255,0,"s_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+256,0,"e_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+257,0,"e_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+258,0,"e_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+259,0,"e_03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+260,0,"e_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+261,0,"e_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+262,0,"e_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+263,0,"e_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+264,0,"message",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+265,0,"public_key000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+266,0,"public_key001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+267,0,"public_key002",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+268,0,"public_key003",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+269,0,"public_key010",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+270,0,"public_key011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+271,0,"public_key012",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+272,0,"public_key013",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+273,0,"public_key020",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+274,0,"public_key021",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+275,0,"public_key022",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+276,0,"public_key023",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+277,0,"public_key030",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+278,0,"public_key031",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+279,0,"public_key032",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+280,0,"public_key033",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+281,0,"public_key100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+282,0,"public_key101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+283,0,"public_key102",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+284,0,"public_key103",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+285,0,"public_key110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+286,0,"public_key111",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+287,0,"public_key112",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+288,0,"public_key113",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+289,0,"r_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+290,0,"r_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+291,0,"r_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+292,0,"r_03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+293,0,"r_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+294,0,"r_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+295,0,"r_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+296,0,"r_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+297,0,"e1_00",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+298,0,"e1_01",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+299,0,"e1_02",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+300,0,"e1_03",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+301,0,"e1_10",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+302,0,"e1_11",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+303,0,"e1_12",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+304,0,"e1_13",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+305,0,"e2_0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+306,0,"e2_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+307,0,"e2_2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+308,0,"e2_3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+309,0,"ciphertext000",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+310,0,"ciphertext001",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+311,0,"ciphertext002",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+312,0,"ciphertext003",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+313,0,"ciphertext010",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+314,0,"ciphertext011",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+315,0,"ciphertext012",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+316,0,"ciphertext013",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+317,0,"ciphertext100",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+318,0,"ciphertext101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+319,0,"ciphertext102",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+320,0,"ciphertext103",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("decryption", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"decryption_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("secret_key", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+172,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+176,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ciphertext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+14,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+18,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+22,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+26,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBus(c+31,0,"m_b",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+110,0,"decryption_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"decimal_value",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+542,0,"Q",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("poly_out0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+111+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+115+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_m_n", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+32+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+119,0,"decryption_done_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("poly_mult1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+36+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+321+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+111+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+40+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+533,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+44+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+325+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+115+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+48+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("encryption", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"encryption_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+264,0,"message",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->pushPrefix("r", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+212,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+213,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+214,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+215,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+216,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+217,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+218,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+219,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("e1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+220,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+221,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+222,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+223,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+224,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+225,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+226,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+227,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("e2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+228+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("combined_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+406,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+407,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+408,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+409,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+410,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+412,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+414,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+418,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+422,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+424,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+425,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+426,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+430,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+434,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("ciphertext", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+14,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+15,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+16,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+17,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+18,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+19,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+20,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+21,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+22,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+23,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+24,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+26,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+27,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+28,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+29,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+88,0,"encryption_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("transposed_matrix", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+438,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+440,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+442,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+445,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+446,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+449,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+450,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_out0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+120+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+124+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+128+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+132+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out4", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+136+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out5", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+140+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("added", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+52+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("added1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+56+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("added2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+537+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBus(c+89,0,"coefficients",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->pushPrefix("coefficients_scaled", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+90+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("u", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+60,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+62,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+63,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+64,0,"[0]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+65,0,"[1]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+66,0,"[2]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+67,0,"[3]",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("v", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+68+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+545+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+454+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+329+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+120+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+494+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+458+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+333+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+124+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+498+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+462+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+337+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+128+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+502+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+466+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+341+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+132+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+506+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+470+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+345+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+136+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+510+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult_inst5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+532,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+474+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+349+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+140+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+514+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("transpose_inst", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("matrix_in", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+478,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+479,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+480,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+481,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+482,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+483,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+484,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+485,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+486,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+487,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+488,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+489,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+490,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+491,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+492,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+493,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("matrix_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+438,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+439,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+440,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+441,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+442,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+443,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+444,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+445,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+446,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+447,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+448,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+449,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+450,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+451,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+452,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+453,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+94,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+95,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+2,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+3,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+549,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("keygen", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->pushPrefix("A", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+180,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+181,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+182,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+183,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+184,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+185,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+188,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+189,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+190,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+191,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+192,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+193,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+194,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+195,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("e", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+204,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+205,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+206,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+207,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+208,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+209,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+210,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+211,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("secret_key", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+196,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+197,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+198,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+199,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+200,0,"[0]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+201,0,"[1]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+202,0,"[2]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+203,0,"[3]",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("secretkey", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+172,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+173,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+174,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+175,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+176,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+177,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+178,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+179,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+6,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+10,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+11,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+12,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+13,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("combined_output", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+406,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+407,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+408,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+409,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+410,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+411,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+412,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+414,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+415,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+416,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+417,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+418,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+419,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+420,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+421,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->pushPrefix("[0]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+422,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+423,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+424,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+425,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[1]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+426,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+427,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+428,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+429,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[2]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+430,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+431,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+432,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+433,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("[3]", VerilatedTracePrefixType::ARRAY_UNPACKED);
    tracep->declBus(c+434,0,"[0]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+435,0,"[1]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+436,0,"[2]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+437,0,"[3]",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"key_enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+109,0,"key_done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("poly_out0", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+144+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+148+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+152+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("poly_out3", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+156+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("added", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+72+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("added1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+76+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->declBit(c+160,0,"key_done_next",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("poly_mult0", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+353+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+357+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+144+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+361+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+365+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+369+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+148+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+373+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+377+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+381+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+152+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+385+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("poly_mult3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"rst_n",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+531,0,"enable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("polynomial1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+389+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial2", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+393+i*1,0,"",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("polynomial_out", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+156+i*1,0,"",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("temp_result", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+397+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+544,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"a",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"b",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+96,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+97,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk11", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+161,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk12", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+162,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+543,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+4,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+5,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk6", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+163,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk7", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+164,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk8", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+165,0,"k",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk9", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+166,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk10", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+167,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk1", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+401,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk2", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+402,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk3", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+403,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->pushPrefix("unnamedblk4", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+404,0,"j",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("unnamedblk5", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+405,0,"i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INT, false,-1, 31,0);
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->popPrefix();
    tracep->pushPrefix("deviceAdapter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+541,0,"io_wbSlaveTransmitter_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"io_wbSlaveTransmitter_bits_ack",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"io_wbSlaveTransmitter_bits_dat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+541,0,"io_wbMasterReceiver_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_wbMasterReceiver_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_wbMasterReceiver_bits_cyc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_wbMasterReceiver_bits_stb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"io_wbMasterReceiver_bits_we",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"io_wbMasterReceiver_bits_adr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"io_wbMasterReceiver_bits_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_wbMasterReceiver_bits_sel",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+85,0,"io_reqOut_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"io_reqOut_bits_addrRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"io_reqOut_bits_dataRequest",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_reqOut_bits_activeByteLane",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+82,0,"io_reqOut_bits_isWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+86,0,"io_rspIn_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"io_rspIn_bits_dataResponse",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->popPrefix();
    tracep->pushPrefix("hostAdapter", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBit(c+518,0,"clock",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+519,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+541,0,"io_wbMasterTransmitter_ready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_wbMasterTransmitter_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+81,0,"io_wbMasterTransmitter_bits_cyc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+80,0,"io_wbMasterTransmitter_bits_stb",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+82,0,"io_wbMasterTransmitter_bits_we",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+168,0,"io_wbMasterTransmitter_bits_adr",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+169,0,"io_wbMasterTransmitter_bits_dat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+83,0,"io_wbMasterTransmitter_bits_sel",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+541,0,"io_wbSlaveReceiver_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+84,0,"io_wbSlaveReceiver_bits_ack",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+170,0,"io_wbSlaveReceiver_bits_dat",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+520,0,"io_reqIn_ready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+521,0,"io_reqIn_valid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+522,0,"io_reqIn_bits_addrRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+523,0,"io_reqIn_bits_dataRequest",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+524,0,"io_reqIn_bits_activeByteLane",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+525,0,"io_reqIn_bits_isWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+527,0,"io_rspOut_valid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+528,0,"io_rspOut_bits_dataResponse",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+98,0,"startWBTransaction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+99,0,"dataReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+100,0,"respReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+101,0,"stbReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"cycReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+103,0,"weReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"datReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+105,0,"adrReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+106,0,"selReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 3,0);
    tracep->declBit(c+107,0,"stateReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+108,0,"readyReg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_init_top(VBabyKyberHarness___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root__trace_init_top\n"); );
    // Body
    VBabyKyberHarness___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VBabyKyberHarness___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBabyKyberHarness___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBabyKyberHarness___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_register(VBabyKyberHarness___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VBabyKyberHarness___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VBabyKyberHarness___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VBabyKyberHarness___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VBabyKyberHarness___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_const_0_sub_0(VBabyKyberHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root__trace_const_0\n"); );
    // Init
    VBabyKyberHarness___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBabyKyberHarness___024root*>(voidSelf);
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBabyKyberHarness___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_const_0_sub_0(VBabyKyberHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+541,(1U));
    bufp->fullIData(oldp+542,(0x11U),32);
    bufp->fullIData(oldp+543,(4U),32);
    bufp->fullIData(oldp+544,(1U),32);
    bufp->fullIData(oldp+545,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__temp[0]),32);
    bufp->fullIData(oldp+546,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__temp[1]),32);
    bufp->fullIData(oldp+547,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__temp[2]),32);
    bufp->fullIData(oldp+548,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__temp[3]),32);
    bufp->fullIData(oldp+549,(2U),32);
}

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_full_0_sub_0(VBabyKyberHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root__trace_full_0\n"); );
    // Init
    VBabyKyberHarness___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBabyKyberHarness___024root*>(voidSelf);
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBabyKyberHarness___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_full_0_sub_0(VBabyKyberHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n));
    bufp->fullIData(oldp+2,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+3,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+4,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+5,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+6,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                            [0U][0U]),32);
    bufp->fullIData(oldp+7,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                            [0U][1U]),32);
    bufp->fullIData(oldp+8,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                            [0U][2U]),32);
    bufp->fullIData(oldp+9,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                            [0U][3U]),32);
    bufp->fullIData(oldp+10,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                             [1U][0U]),32);
    bufp->fullIData(oldp+11,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                             [1U][1U]),32);
    bufp->fullIData(oldp+12,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                             [1U][2U]),32);
    bufp->fullIData(oldp+13,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                             [1U][3U]),32);
    bufp->fullIData(oldp+14,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [0U][0U][0U]),32);
    bufp->fullIData(oldp+15,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [0U][0U][1U]),32);
    bufp->fullIData(oldp+16,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [0U][0U][2U]),32);
    bufp->fullIData(oldp+17,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [0U][0U][3U]),32);
    bufp->fullIData(oldp+18,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [0U][1U][0U]),32);
    bufp->fullIData(oldp+19,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [0U][1U][1U]),32);
    bufp->fullIData(oldp+20,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [0U][1U][2U]),32);
    bufp->fullIData(oldp+21,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [0U][1U][3U]),32);
    bufp->fullIData(oldp+22,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [1U][0U][0U]),32);
    bufp->fullIData(oldp+23,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [1U][0U][1U]),32);
    bufp->fullIData(oldp+24,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [1U][0U][2U]),32);
    bufp->fullIData(oldp+25,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [1U][0U][3U]),32);
    bufp->fullIData(oldp+26,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [1U][1U][0U]),32);
    bufp->fullIData(oldp+27,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [1U][1U][1U]),32);
    bufp->fullIData(oldp+28,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [1U][1U][2U]),32);
    bufp->fullIData(oldp+29,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                             [1U][1U][3U]),32);
    bufp->fullIData(oldp+30,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decimal_value),32);
    bufp->fullCData(oldp+31,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b),4);
    bufp->fullIData(oldp+32,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0]),32);
    bufp->fullIData(oldp+33,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1]),32);
    bufp->fullIData(oldp+34,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2]),32);
    bufp->fullIData(oldp+35,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3]),32);
    bufp->fullIData(oldp+36,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
    bufp->fullIData(oldp+37,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
    bufp->fullIData(oldp+38,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
    bufp->fullIData(oldp+39,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
    bufp->fullIData(oldp+40,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+41,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+42,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+43,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+44,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
    bufp->fullIData(oldp+45,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
    bufp->fullIData(oldp+46,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
    bufp->fullIData(oldp+47,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
    bufp->fullIData(oldp+48,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+49,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+50,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+51,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+52,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[0]),32);
    bufp->fullIData(oldp+53,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[1]),32);
    bufp->fullIData(oldp+54,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[2]),32);
    bufp->fullIData(oldp+55,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[3]),32);
    bufp->fullIData(oldp+56,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[0]),32);
    bufp->fullIData(oldp+57,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[1]),32);
    bufp->fullIData(oldp+58,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[2]),32);
    bufp->fullIData(oldp+59,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[3]),32);
    bufp->fullIData(oldp+60,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][0U]),32);
    bufp->fullIData(oldp+61,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][1U]),32);
    bufp->fullIData(oldp+62,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][2U]),32);
    bufp->fullIData(oldp+63,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][3U]),32);
    bufp->fullIData(oldp+64,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][0U]),32);
    bufp->fullIData(oldp+65,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][1U]),32);
    bufp->fullIData(oldp+66,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][2U]),32);
    bufp->fullIData(oldp+67,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][3U]),32);
    bufp->fullIData(oldp+68,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[0]),32);
    bufp->fullIData(oldp+69,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[1]),32);
    bufp->fullIData(oldp+70,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[2]),32);
    bufp->fullIData(oldp+71,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[3]),32);
    bufp->fullIData(oldp+72,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[0]),32);
    bufp->fullIData(oldp+73,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[1]),32);
    bufp->fullIData(oldp+74,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[2]),32);
    bufp->fullIData(oldp+75,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[3]),32);
    bufp->fullIData(oldp+76,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[0]),32);
    bufp->fullIData(oldp+77,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[1]),32);
    bufp->fullIData(oldp+78,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[2]),32);
    bufp->fullIData(oldp+79,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[3]),32);
    bufp->fullBit(oldp+80,(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_valid));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__cycReg) 
                            & (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction))));
    bufp->fullBit(oldp+82,(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we));
    bufp->fullCData(oldp+83,(((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction)
                               ? (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__selReg)
                               : 0U)),4);
    bufp->fullBit(oldp+84,(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbSlaveReceiver_bits_ack));
    bufp->fullBit(oldp+85,(vlSelf->BabyKyberHarness__DOT__deviceAdapter__DOT___T_1));
    bufp->fullBit(oldp+86,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__validReg));
    bufp->fullCData(oldp+87,(((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction)
                               ? (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__selReg)
                               : 0U)),8);
    bufp->fullBit(oldp+88,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_encryption_done));
    bufp->fullCData(oldp+89,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients),4);
    bufp->fullIData(oldp+90,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[0]),32);
    bufp->fullIData(oldp+91,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[1]),32);
    bufp->fullIData(oldp+92,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[2]),32);
    bufp->fullIData(oldp+93,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[3]),32);
    bufp->fullIData(oldp+94,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+95,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+96,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+97,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullBit(oldp+98,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction));
    bufp->fullIData(oldp+99,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__dataReg),32);
    bufp->fullBit(oldp+100,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__respReg));
    bufp->fullBit(oldp+101,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stbReg));
    bufp->fullBit(oldp+102,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__cycReg));
    bufp->fullBit(oldp+103,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__weReg));
    bufp->fullIData(oldp+104,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__datReg),32);
    bufp->fullIData(oldp+105,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__adrReg),32);
    bufp->fullCData(oldp+106,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__selReg),4);
    bufp->fullBit(oldp+107,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg));
    bufp->fullBit(oldp+108,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg));
    bufp->fullBit(oldp+109,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_key_done));
    bufp->fullBit(oldp+110,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_decryption_done));
    bufp->fullIData(oldp+111,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+112,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+113,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+114,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+115,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+116,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+117,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+118,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[3]),32);
    bufp->fullBit(oldp+119,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__decryption_done_next));
    bufp->fullIData(oldp+120,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+121,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+122,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+123,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+124,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+125,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+126,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+127,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[3]),32);
    bufp->fullIData(oldp+128,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[0]),32);
    bufp->fullIData(oldp+129,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[1]),32);
    bufp->fullIData(oldp+130,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[2]),32);
    bufp->fullIData(oldp+131,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[3]),32);
    bufp->fullIData(oldp+132,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[0]),32);
    bufp->fullIData(oldp+133,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[1]),32);
    bufp->fullIData(oldp+134,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[2]),32);
    bufp->fullIData(oldp+135,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[3]),32);
    bufp->fullIData(oldp+136,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[0]),32);
    bufp->fullIData(oldp+137,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[1]),32);
    bufp->fullIData(oldp+138,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[2]),32);
    bufp->fullIData(oldp+139,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[3]),32);
    bufp->fullIData(oldp+140,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[0]),32);
    bufp->fullIData(oldp+141,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[1]),32);
    bufp->fullIData(oldp+142,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[2]),32);
    bufp->fullIData(oldp+143,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[3]),32);
    bufp->fullIData(oldp+144,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+145,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+146,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+147,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+148,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+149,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+150,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+151,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[3]),32);
    bufp->fullIData(oldp+152,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[0]),32);
    bufp->fullIData(oldp+153,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[1]),32);
    bufp->fullIData(oldp+154,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[2]),32);
    bufp->fullIData(oldp+155,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[3]),32);
    bufp->fullIData(oldp+156,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[0]),32);
    bufp->fullIData(oldp+157,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[1]),32);
    bufp->fullIData(oldp+158,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[2]),32);
    bufp->fullIData(oldp+159,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[3]),32);
    bufp->fullBit(oldp+160,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__key_done_next));
    bufp->fullIData(oldp+161,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+162,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullIData(oldp+163,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+164,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
    bufp->fullIData(oldp+165,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k),32);
    bufp->fullIData(oldp+166,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+167,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
    bufp->fullIData(oldp+168,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_addr_Req),32);
    bufp->fullIData(oldp+169,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Req),32);
    bufp->fullIData(oldp+170,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp),32);
    bufp->fullBit(oldp+171,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_wen_Req));
    bufp->fullIData(oldp+172,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [0U][0U]),32);
    bufp->fullIData(oldp+173,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [0U][1U]),32);
    bufp->fullIData(oldp+174,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [0U][2U]),32);
    bufp->fullIData(oldp+175,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [0U][3U]),32);
    bufp->fullIData(oldp+176,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [1U][0U]),32);
    bufp->fullIData(oldp+177,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [1U][1U]),32);
    bufp->fullIData(oldp+178,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [1U][2U]),32);
    bufp->fullIData(oldp+179,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [1U][3U]),32);
    bufp->fullIData(oldp+180,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+181,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+182,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+183,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+184,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+185,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+186,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+187,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+188,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [2U][0U]),32);
    bufp->fullIData(oldp+189,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [2U][1U]),32);
    bufp->fullIData(oldp+190,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [2U][2U]),32);
    bufp->fullIData(oldp+191,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [2U][3U]),32);
    bufp->fullIData(oldp+192,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [3U][0U]),32);
    bufp->fullIData(oldp+193,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [3U][1U]),32);
    bufp->fullIData(oldp+194,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [3U][2U]),32);
    bufp->fullIData(oldp+195,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [3U][3U]),32);
    bufp->fullIData(oldp+196,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+197,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+198,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+199,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+200,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+201,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+202,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+203,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+204,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+205,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+206,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+207,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+208,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+209,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+210,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+211,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+212,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [0U][0U]),32);
    bufp->fullIData(oldp+213,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [0U][1U]),32);
    bufp->fullIData(oldp+214,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [0U][2U]),32);
    bufp->fullIData(oldp+215,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [0U][3U]),32);
    bufp->fullIData(oldp+216,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [1U][0U]),32);
    bufp->fullIData(oldp+217,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [1U][1U]),32);
    bufp->fullIData(oldp+218,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [1U][2U]),32);
    bufp->fullIData(oldp+219,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [1U][3U]),32);
    bufp->fullIData(oldp+220,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [0U][0U]),32);
    bufp->fullIData(oldp+221,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [0U][1U]),32);
    bufp->fullIData(oldp+222,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [0U][2U]),32);
    bufp->fullIData(oldp+223,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [0U][3U]),32);
    bufp->fullIData(oldp+224,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [1U][0U]),32);
    bufp->fullIData(oldp+225,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [1U][1U]),32);
    bufp->fullIData(oldp+226,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [1U][2U]),32);
    bufp->fullIData(oldp+227,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [1U][3U]),32);
    bufp->fullIData(oldp+228,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[0]),32);
    bufp->fullIData(oldp+229,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[1]),32);
    bufp->fullIData(oldp+230,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[2]),32);
    bufp->fullIData(oldp+231,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[3]),32);
    bufp->fullIData(oldp+232,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000),32);
    bufp->fullIData(oldp+233,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001),32);
    bufp->fullIData(oldp+234,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002),32);
    bufp->fullIData(oldp+235,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003),32);
    bufp->fullIData(oldp+236,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010),32);
    bufp->fullIData(oldp+237,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011),32);
    bufp->fullIData(oldp+238,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012),32);
    bufp->fullIData(oldp+239,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013),32);
    bufp->fullIData(oldp+240,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020),32);
    bufp->fullIData(oldp+241,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021),32);
    bufp->fullIData(oldp+242,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022),32);
    bufp->fullIData(oldp+243,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023),32);
    bufp->fullIData(oldp+244,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030),32);
    bufp->fullIData(oldp+245,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031),32);
    bufp->fullIData(oldp+246,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032),32);
    bufp->fullIData(oldp+247,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033),32);
    bufp->fullIData(oldp+248,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00),32);
    bufp->fullIData(oldp+249,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01),32);
    bufp->fullIData(oldp+250,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02),32);
    bufp->fullIData(oldp+251,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03),32);
    bufp->fullIData(oldp+252,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10),32);
    bufp->fullIData(oldp+253,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11),32);
    bufp->fullIData(oldp+254,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12),32);
    bufp->fullIData(oldp+255,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13),32);
    bufp->fullIData(oldp+256,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00),32);
    bufp->fullIData(oldp+257,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01),32);
    bufp->fullIData(oldp+258,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02),32);
    bufp->fullIData(oldp+259,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03),32);
    bufp->fullIData(oldp+260,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10),32);
    bufp->fullIData(oldp+261,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11),32);
    bufp->fullIData(oldp+262,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12),32);
    bufp->fullIData(oldp+263,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13),32);
    bufp->fullIData(oldp+264,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message),32);
    bufp->fullIData(oldp+265,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000),32);
    bufp->fullIData(oldp+266,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001),32);
    bufp->fullIData(oldp+267,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002),32);
    bufp->fullIData(oldp+268,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003),32);
    bufp->fullIData(oldp+269,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010),32);
    bufp->fullIData(oldp+270,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011),32);
    bufp->fullIData(oldp+271,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012),32);
    bufp->fullIData(oldp+272,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013),32);
    bufp->fullIData(oldp+273,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020),32);
    bufp->fullIData(oldp+274,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021),32);
    bufp->fullIData(oldp+275,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022),32);
    bufp->fullIData(oldp+276,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023),32);
    bufp->fullIData(oldp+277,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030),32);
    bufp->fullIData(oldp+278,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031),32);
    bufp->fullIData(oldp+279,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032),32);
    bufp->fullIData(oldp+280,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033),32);
    bufp->fullIData(oldp+281,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100),32);
    bufp->fullIData(oldp+282,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101),32);
    bufp->fullIData(oldp+283,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102),32);
    bufp->fullIData(oldp+284,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103),32);
    bufp->fullIData(oldp+285,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110),32);
    bufp->fullIData(oldp+286,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111),32);
    bufp->fullIData(oldp+287,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112),32);
    bufp->fullIData(oldp+288,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113),32);
    bufp->fullIData(oldp+289,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00),32);
    bufp->fullIData(oldp+290,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01),32);
    bufp->fullIData(oldp+291,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02),32);
    bufp->fullIData(oldp+292,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03),32);
    bufp->fullIData(oldp+293,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10),32);
    bufp->fullIData(oldp+294,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11),32);
    bufp->fullIData(oldp+295,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12),32);
    bufp->fullIData(oldp+296,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13),32);
    bufp->fullIData(oldp+297,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00),32);
    bufp->fullIData(oldp+298,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01),32);
    bufp->fullIData(oldp+299,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02),32);
    bufp->fullIData(oldp+300,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03),32);
    bufp->fullIData(oldp+301,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10),32);
    bufp->fullIData(oldp+302,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11),32);
    bufp->fullIData(oldp+303,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12),32);
    bufp->fullIData(oldp+304,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13),32);
    bufp->fullIData(oldp+305,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0),32);
    bufp->fullIData(oldp+306,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1),32);
    bufp->fullIData(oldp+307,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2),32);
    bufp->fullIData(oldp+308,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3),32);
    bufp->fullIData(oldp+309,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000),32);
    bufp->fullIData(oldp+310,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001),32);
    bufp->fullIData(oldp+311,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002),32);
    bufp->fullIData(oldp+312,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003),32);
    bufp->fullIData(oldp+313,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010),32);
    bufp->fullIData(oldp+314,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011),32);
    bufp->fullIData(oldp+315,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012),32);
    bufp->fullIData(oldp+316,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013),32);
    bufp->fullIData(oldp+317,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100),32);
    bufp->fullIData(oldp+318,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101),32);
    bufp->fullIData(oldp+319,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102),32);
    bufp->fullIData(oldp+320,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103),32);
    bufp->fullIData(oldp+321,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
    bufp->fullIData(oldp+322,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
    bufp->fullIData(oldp+323,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
    bufp->fullIData(oldp+324,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
    bufp->fullIData(oldp+325,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
    bufp->fullIData(oldp+326,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
    bufp->fullIData(oldp+327,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
    bufp->fullIData(oldp+328,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
    bufp->fullIData(oldp+329,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[0]),32);
    bufp->fullIData(oldp+330,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[1]),32);
    bufp->fullIData(oldp+331,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[2]),32);
    bufp->fullIData(oldp+332,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[3]),32);
    bufp->fullIData(oldp+333,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[0]),32);
    bufp->fullIData(oldp+334,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[1]),32);
    bufp->fullIData(oldp+335,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[2]),32);
    bufp->fullIData(oldp+336,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[3]),32);
    bufp->fullIData(oldp+337,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[0]),32);
    bufp->fullIData(oldp+338,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[1]),32);
    bufp->fullIData(oldp+339,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[2]),32);
    bufp->fullIData(oldp+340,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[3]),32);
    bufp->fullIData(oldp+341,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[0]),32);
    bufp->fullIData(oldp+342,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[1]),32);
    bufp->fullIData(oldp+343,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[2]),32);
    bufp->fullIData(oldp+344,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[3]),32);
    bufp->fullIData(oldp+345,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[0]),32);
    bufp->fullIData(oldp+346,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[1]),32);
    bufp->fullIData(oldp+347,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[2]),32);
    bufp->fullIData(oldp+348,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[3]),32);
    bufp->fullIData(oldp+349,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[0]),32);
    bufp->fullIData(oldp+350,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[1]),32);
    bufp->fullIData(oldp+351,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[2]),32);
    bufp->fullIData(oldp+352,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[3]),32);
    bufp->fullIData(oldp+353,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[0]),32);
    bufp->fullIData(oldp+354,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[1]),32);
    bufp->fullIData(oldp+355,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[2]),32);
    bufp->fullIData(oldp+356,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[3]),32);
    bufp->fullIData(oldp+357,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[0]),32);
    bufp->fullIData(oldp+358,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[1]),32);
    bufp->fullIData(oldp+359,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[2]),32);
    bufp->fullIData(oldp+360,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[3]),32);
    bufp->fullIData(oldp+361,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+362,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+363,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+364,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+365,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
    bufp->fullIData(oldp+366,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
    bufp->fullIData(oldp+367,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
    bufp->fullIData(oldp+368,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
    bufp->fullIData(oldp+369,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
    bufp->fullIData(oldp+370,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
    bufp->fullIData(oldp+371,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
    bufp->fullIData(oldp+372,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
    bufp->fullIData(oldp+373,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+374,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+375,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+376,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+377,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
    bufp->fullIData(oldp+378,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
    bufp->fullIData(oldp+379,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
    bufp->fullIData(oldp+380,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
    bufp->fullIData(oldp+381,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
    bufp->fullIData(oldp+382,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
    bufp->fullIData(oldp+383,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
    bufp->fullIData(oldp+384,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
    bufp->fullIData(oldp+385,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+386,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+387,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+388,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+389,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[0]),32);
    bufp->fullIData(oldp+390,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[1]),32);
    bufp->fullIData(oldp+391,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[2]),32);
    bufp->fullIData(oldp+392,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[3]),32);
    bufp->fullIData(oldp+393,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[0]),32);
    bufp->fullIData(oldp+394,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[1]),32);
    bufp->fullIData(oldp+395,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[2]),32);
    bufp->fullIData(oldp+396,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[3]),32);
    bufp->fullIData(oldp+397,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+398,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+399,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+400,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+401,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+402,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+403,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+404,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+405,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+406,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+407,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+408,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+409,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+410,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+411,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+412,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+413,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+414,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][2U][0U]),32);
    bufp->fullIData(oldp+415,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][2U][1U]),32);
    bufp->fullIData(oldp+416,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][2U][2U]),32);
    bufp->fullIData(oldp+417,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][2U][3U]),32);
    bufp->fullIData(oldp+418,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][3U][0U]),32);
    bufp->fullIData(oldp+419,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][3U][1U]),32);
    bufp->fullIData(oldp+420,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][3U][2U]),32);
    bufp->fullIData(oldp+421,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][3U][3U]),32);
    bufp->fullIData(oldp+422,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+423,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+424,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+425,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+426,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+427,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+428,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+429,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+430,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][2U][0U]),32);
    bufp->fullIData(oldp+431,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][2U][1U]),32);
    bufp->fullIData(oldp+432,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][2U][2U]),32);
    bufp->fullIData(oldp+433,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][2U][3U]),32);
    bufp->fullIData(oldp+434,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][3U][0U]),32);
    bufp->fullIData(oldp+435,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][3U][1U]),32);
    bufp->fullIData(oldp+436,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][3U][2U]),32);
    bufp->fullIData(oldp+437,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][3U][3U]),32);
    bufp->fullIData(oldp+438,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][0U]),32);
    bufp->fullIData(oldp+439,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][1U]),32);
    bufp->fullIData(oldp+440,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][2U]),32);
    bufp->fullIData(oldp+441,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][3U]),32);
    bufp->fullIData(oldp+442,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][0U]),32);
    bufp->fullIData(oldp+443,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][1U]),32);
    bufp->fullIData(oldp+444,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][2U]),32);
    bufp->fullIData(oldp+445,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][3U]),32);
    bufp->fullIData(oldp+446,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][0U]),32);
    bufp->fullIData(oldp+447,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][1U]),32);
    bufp->fullIData(oldp+448,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][2U]),32);
    bufp->fullIData(oldp+449,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][3U]),32);
    bufp->fullIData(oldp+450,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][0U]),32);
    bufp->fullIData(oldp+451,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][1U]),32);
    bufp->fullIData(oldp+452,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][2U]),32);
    bufp->fullIData(oldp+453,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][3U]),32);
    bufp->fullIData(oldp+454,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[0]),32);
    bufp->fullIData(oldp+455,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[1]),32);
    bufp->fullIData(oldp+456,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[2]),32);
    bufp->fullIData(oldp+457,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[3]),32);
    bufp->fullIData(oldp+458,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[0]),32);
    bufp->fullIData(oldp+459,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[1]),32);
    bufp->fullIData(oldp+460,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[2]),32);
    bufp->fullIData(oldp+461,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[3]),32);
    bufp->fullIData(oldp+462,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[0]),32);
    bufp->fullIData(oldp+463,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[1]),32);
    bufp->fullIData(oldp+464,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[2]),32);
    bufp->fullIData(oldp+465,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[3]),32);
    bufp->fullIData(oldp+466,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[0]),32);
    bufp->fullIData(oldp+467,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[1]),32);
    bufp->fullIData(oldp+468,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[2]),32);
    bufp->fullIData(oldp+469,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[3]),32);
    bufp->fullIData(oldp+470,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[0]),32);
    bufp->fullIData(oldp+471,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[1]),32);
    bufp->fullIData(oldp+472,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[2]),32);
    bufp->fullIData(oldp+473,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[3]),32);
    bufp->fullIData(oldp+474,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[0]),32);
    bufp->fullIData(oldp+475,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[1]),32);
    bufp->fullIData(oldp+476,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[2]),32);
    bufp->fullIData(oldp+477,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[3]),32);
    bufp->fullIData(oldp+478,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][0U]),32);
    bufp->fullIData(oldp+479,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][1U]),32);
    bufp->fullIData(oldp+480,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][2U]),32);
    bufp->fullIData(oldp+481,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][3U]),32);
    bufp->fullIData(oldp+482,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][0U]),32);
    bufp->fullIData(oldp+483,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][1U]),32);
    bufp->fullIData(oldp+484,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][2U]),32);
    bufp->fullIData(oldp+485,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][3U]),32);
    bufp->fullIData(oldp+486,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][0U]),32);
    bufp->fullIData(oldp+487,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][1U]),32);
    bufp->fullIData(oldp+488,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][2U]),32);
    bufp->fullIData(oldp+489,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][3U]),32);
    bufp->fullIData(oldp+490,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][0U]),32);
    bufp->fullIData(oldp+491,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][1U]),32);
    bufp->fullIData(oldp+492,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][2U]),32);
    bufp->fullIData(oldp+493,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][3U]),32);
    bufp->fullIData(oldp+494,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+495,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+496,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+497,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+498,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+499,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+500,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+501,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+502,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+503,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+504,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+505,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+506,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+507,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+508,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+509,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+510,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+511,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+512,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+513,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+514,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+515,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+516,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+517,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3]),32);
    bufp->fullBit(oldp+518,(vlSelf->clock));
    bufp->fullBit(oldp+519,(vlSelf->reset));
    bufp->fullBit(oldp+520,(vlSelf->io_req_ready));
    bufp->fullBit(oldp+521,(vlSelf->io_req_valid));
    bufp->fullIData(oldp+522,(vlSelf->io_req_bits_addrRequest),32);
    bufp->fullIData(oldp+523,(vlSelf->io_req_bits_dataRequest),32);
    bufp->fullCData(oldp+524,(vlSelf->io_req_bits_activeByteLane),4);
    bufp->fullBit(oldp+525,(vlSelf->io_req_bits_isWrite));
    bufp->fullBit(oldp+526,(vlSelf->io_rsp_ready));
    bufp->fullBit(oldp+527,(vlSelf->io_rsp_valid));
    bufp->fullIData(oldp+528,(vlSelf->io_rsp_bits_dataResponse),32);
    bufp->fullBit(oldp+529,(vlSelf->io_rsp_bits_error));
    bufp->fullBit(oldp+530,(vlSelf->io_enable));
    bufp->fullBit(oldp+531,(vlSelf->io_key_enable));
    bufp->fullBit(oldp+532,(vlSelf->io_encryption_enable));
    bufp->fullBit(oldp+533,(vlSelf->io_decryption_enable));
    bufp->fullBit(oldp+534,(vlSelf->io_cio_babykyber_intr_key));
    bufp->fullBit(oldp+535,(vlSelf->io_cio_babykyber_intr_encrypt));
    bufp->fullBit(oldp+536,(vlSelf->io_cio_babykyber_intr_decrypt));
    bufp->fullIData(oldp+537,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[0]),32);
    bufp->fullIData(oldp+538,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[1]),32);
    bufp->fullIData(oldp+539,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[2]),32);
    bufp->fullIData(oldp+540,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[3]),32);
}
