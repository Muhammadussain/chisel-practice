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
    tracep->declBit(c+759,"clock", false,-1);
    tracep->declBit(c+760,"reset", false,-1);
    tracep->declBit(c+761,"io_req_ready", false,-1);
    tracep->declBit(c+762,"io_req_valid", false,-1);
    tracep->declBus(c+763,"io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+764,"io_req_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+765,"io_req_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+766,"io_req_bits_isWrite", false,-1);
    tracep->declBit(c+767,"io_rsp_ready", false,-1);
    tracep->declBit(c+768,"io_rsp_valid", false,-1);
    tracep->declBus(c+769,"io_rsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+770,"io_rsp_bits_error", false,-1);
    tracep->declBit(c+771,"io_enable", false,-1);
    tracep->declBit(c+772,"io_key_enable", false,-1);
    tracep->declBit(c+773,"io_encryption_enable", false,-1);
    tracep->declBit(c+774,"io_decryption_enable", false,-1);
    tracep->declBit(c+775,"io_cio_babykyber_intr_key", false,-1);
    tracep->declBit(c+776,"io_cio_babykyber_intr_encrypt", false,-1);
    tracep->declBit(c+777,"io_cio_babykyber_intr_decrypt", false,-1);
    tracep->pushNamePrefix("BabyKyberHarness ");
    tracep->declBit(c+759,"clock", false,-1);
    tracep->declBit(c+760,"reset", false,-1);
    tracep->declBit(c+761,"io_req_ready", false,-1);
    tracep->declBit(c+762,"io_req_valid", false,-1);
    tracep->declBus(c+763,"io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+764,"io_req_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+765,"io_req_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+766,"io_req_bits_isWrite", false,-1);
    tracep->declBit(c+767,"io_rsp_ready", false,-1);
    tracep->declBit(c+768,"io_rsp_valid", false,-1);
    tracep->declBus(c+769,"io_rsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+770,"io_rsp_bits_error", false,-1);
    tracep->declBit(c+771,"io_enable", false,-1);
    tracep->declBit(c+772,"io_key_enable", false,-1);
    tracep->declBit(c+773,"io_encryption_enable", false,-1);
    tracep->declBit(c+774,"io_decryption_enable", false,-1);
    tracep->declBit(c+775,"io_cio_babykyber_intr_key", false,-1);
    tracep->declBit(c+776,"io_cio_babykyber_intr_encrypt", false,-1);
    tracep->declBit(c+777,"io_cio_babykyber_intr_decrypt", false,-1);
    tracep->declBit(c+759,"hostAdapter_clock", false,-1);
    tracep->declBit(c+760,"hostAdapter_reset", false,-1);
    tracep->declBit(c+778,"hostAdapter_io_wbMasterTransmitter_ready", false,-1);
    tracep->declBit(c+124,"hostAdapter_io_wbMasterTransmitter_valid", false,-1);
    tracep->declBit(c+125,"hostAdapter_io_wbMasterTransmitter_bits_cyc", false,-1);
    tracep->declBit(c+124,"hostAdapter_io_wbMasterTransmitter_bits_stb", false,-1);
    tracep->declBit(c+126,"hostAdapter_io_wbMasterTransmitter_bits_we", false,-1);
    tracep->declBus(c+127,"hostAdapter_io_wbMasterTransmitter_bits_adr", false,-1, 31,0);
    tracep->declBus(c+128,"hostAdapter_io_wbMasterTransmitter_bits_dat", false,-1, 31,0);
    tracep->declBus(c+129,"hostAdapter_io_wbMasterTransmitter_bits_sel", false,-1, 3,0);
    tracep->declBit(c+778,"hostAdapter_io_wbSlaveReceiver_ready", false,-1);
    tracep->declBit(c+130,"hostAdapter_io_wbSlaveReceiver_bits_ack", false,-1);
    tracep->declBus(c+131,"hostAdapter_io_wbSlaveReceiver_bits_dat", false,-1, 31,0);
    tracep->declBit(c+132,"hostAdapter_io_reqIn_ready", false,-1);
    tracep->declBit(c+762,"hostAdapter_io_reqIn_valid", false,-1);
    tracep->declBus(c+763,"hostAdapter_io_reqIn_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+764,"hostAdapter_io_reqIn_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+765,"hostAdapter_io_reqIn_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+766,"hostAdapter_io_reqIn_bits_isWrite", false,-1);
    tracep->declBit(c+133,"hostAdapter_io_rspOut_valid", false,-1);
    tracep->declBus(c+134,"hostAdapter_io_rspOut_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+778,"deviceAdapter_io_wbSlaveTransmitter_ready", false,-1);
    tracep->declBit(c+130,"deviceAdapter_io_wbSlaveTransmitter_bits_ack", false,-1);
    tracep->declBus(c+131,"deviceAdapter_io_wbSlaveTransmitter_bits_dat", false,-1, 31,0);
    tracep->declBit(c+778,"deviceAdapter_io_wbMasterReceiver_ready", false,-1);
    tracep->declBit(c+124,"deviceAdapter_io_wbMasterReceiver_valid", false,-1);
    tracep->declBit(c+125,"deviceAdapter_io_wbMasterReceiver_bits_cyc", false,-1);
    tracep->declBit(c+124,"deviceAdapter_io_wbMasterReceiver_bits_stb", false,-1);
    tracep->declBit(c+126,"deviceAdapter_io_wbMasterReceiver_bits_we", false,-1);
    tracep->declBus(c+127,"deviceAdapter_io_wbMasterReceiver_bits_adr", false,-1, 31,0);
    tracep->declBus(c+128,"deviceAdapter_io_wbMasterReceiver_bits_dat", false,-1, 31,0);
    tracep->declBus(c+129,"deviceAdapter_io_wbMasterReceiver_bits_sel", false,-1, 3,0);
    tracep->declBit(c+135,"deviceAdapter_io_reqOut_valid", false,-1);
    tracep->declBus(c+127,"deviceAdapter_io_reqOut_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+128,"deviceAdapter_io_reqOut_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+129,"deviceAdapter_io_reqOut_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+126,"deviceAdapter_io_reqOut_bits_isWrite", false,-1);
    tracep->declBit(c+136,"deviceAdapter_io_rspIn_valid", false,-1);
    tracep->declBus(c+131,"deviceAdapter_io_rspIn_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+759,"babykyber_clock", false,-1);
    tracep->declBit(c+760,"babykyber_reset", false,-1);
    tracep->declBit(c+135,"babykyber_io_req_valid", false,-1);
    tracep->declBus(c+127,"babykyber_io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+128,"babykyber_io_req_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+129,"babykyber_io_req_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+126,"babykyber_io_req_bits_isWrite", false,-1);
    tracep->declBit(c+136,"babykyber_io_rsp_valid", false,-1);
    tracep->declBus(c+131,"babykyber_io_rsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+771,"babykyber_io_enable", false,-1);
    tracep->declBit(c+772,"babykyber_io_key_enable", false,-1);
    tracep->declBit(c+773,"babykyber_io_encryption_enable", false,-1);
    tracep->declBit(c+774,"babykyber_io_decryption_enable", false,-1);
    tracep->declBit(c+444,"babykyber_io_cio_babykyber_intr_key", false,-1);
    tracep->declBit(c+137,"babykyber_io_cio_babykyber_intr_encrypt", false,-1);
    tracep->declBit(c+445,"babykyber_io_cio_babykyber_intr_decrypt", false,-1);
    tracep->pushNamePrefix("babykyber ");
    tracep->declBit(c+759,"clock", false,-1);
    tracep->declBit(c+760,"reset", false,-1);
    tracep->declBit(c+135,"io_req_valid", false,-1);
    tracep->declBus(c+127,"io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+128,"io_req_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+129,"io_req_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+126,"io_req_bits_isWrite", false,-1);
    tracep->declBit(c+136,"io_rsp_valid", false,-1);
    tracep->declBus(c+131,"io_rsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+771,"io_enable", false,-1);
    tracep->declBit(c+772,"io_key_enable", false,-1);
    tracep->declBit(c+773,"io_encryption_enable", false,-1);
    tracep->declBit(c+774,"io_decryption_enable", false,-1);
    tracep->declBit(c+444,"io_cio_babykyber_intr_key", false,-1);
    tracep->declBit(c+137,"io_cio_babykyber_intr_encrypt", false,-1);
    tracep->declBit(c+445,"io_cio_babykyber_intr_decrypt", false,-1);
    tracep->declBit(c+759,"bkyber_clk", false,-1);
    tracep->declBit(c+1,"bkyber_rst_n", false,-1);
    tracep->declBit(c+771,"bkyber_enable", false,-1);
    tracep->declBit(c+772,"bkyber_key_enable", false,-1);
    tracep->declBit(c+773,"bkyber_encryption_enable", false,-1);
    tracep->declBit(c+774,"bkyber_decryption_enable", false,-1);
    tracep->declBus(c+128,"bkyber_data_Req", false,-1, 31,0);
    tracep->declBus(c+127,"bkyber_addr_Req", false,-1, 31,0);
    tracep->declBit(c+138,"bkyber_wen_Req", false,-1);
    tracep->declBus(c+139,"bkyber_bytelane_Req", false,-1, 7,0);
    tracep->declBus(c+140,"bkyber_data_Resp", false,-1, 31,0);
    tracep->declBit(c+444,"bkyber_key_done", false,-1);
    tracep->declBit(c+137,"bkyber_encryption_done", false,-1);
    tracep->declBit(c+445,"bkyber_decryption_done", false,-1);
    tracep->declBit(c+136,"validReg", false,-1);
    tracep->pushNamePrefix("bkyber ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+771,"enable", false,-1);
    tracep->declBit(c+772,"key_enable", false,-1);
    tracep->declBit(c+773,"encryption_enable", false,-1);
    tracep->declBit(c+774,"decryption_enable", false,-1);
    tracep->declBus(c+128,"data_Req", false,-1, 31,0);
    tracep->declBus(c+127,"addr_Req", false,-1, 31,0);
    tracep->declBit(c+138,"wen_Req", false,-1);
    tracep->declBit(c+444,"key_done", false,-1);
    tracep->declBit(c+137,"encryption_done", false,-1);
    tracep->declBit(c+445,"decryption_done", false,-1);
    tracep->declBus(c+139,"bytelane_Req", false,-1, 7,0);
    tracep->declBus(c+140,"data_Resp", false,-1, 31,0);
    tracep->pushNamePrefix("secretkey");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+141,"[0]", false,-1, 31,0);
    tracep->declBus(c+142,"[1]", false,-1, 31,0);
    tracep->declBus(c+143,"[2]", false,-1, 31,0);
    tracep->declBus(c+144,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+145,"[0]", false,-1, 31,0);
    tracep->declBus(c+146,"[1]", false,-1, 31,0);
    tracep->declBus(c+147,"[2]", false,-1, 31,0);
    tracep->declBus(c+148,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+100,"[0]", false,-1, 31,0);
    tracep->declBus(c+101,"[1]", false,-1, 31,0);
    tracep->declBus(c+102,"[2]", false,-1, 31,0);
    tracep->declBus(c+103,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+104,"[0]", false,-1, 31,0);
    tracep->declBus(c+105,"[1]", false,-1, 31,0);
    tracep->declBus(c+106,"[2]", false,-1, 31,0);
    tracep->declBus(c+107,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("public_key");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+412,"[0]", false,-1, 31,0);
    tracep->declBus(c+413,"[1]", false,-1, 31,0);
    tracep->declBus(c+414,"[2]", false,-1, 31,0);
    tracep->declBus(c+415,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+416,"[0]", false,-1, 31,0);
    tracep->declBus(c+417,"[1]", false,-1, 31,0);
    tracep->declBus(c+418,"[2]", false,-1, 31,0);
    tracep->declBus(c+419,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+420,"[0]", false,-1, 31,0);
    tracep->declBus(c+421,"[1]", false,-1, 31,0);
    tracep->declBus(c+422,"[2]", false,-1, 31,0);
    tracep->declBus(c+423,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+424,"[0]", false,-1, 31,0);
    tracep->declBus(c+425,"[1]", false,-1, 31,0);
    tracep->declBus(c+426,"[2]", false,-1, 31,0);
    tracep->declBus(c+427,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+428,"[0]", false,-1, 31,0);
    tracep->declBus(c+429,"[1]", false,-1, 31,0);
    tracep->declBus(c+430,"[2]", false,-1, 31,0);
    tracep->declBus(c+431,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+432,"[0]", false,-1, 31,0);
    tracep->declBus(c+433,"[1]", false,-1, 31,0);
    tracep->declBus(c+434,"[2]", false,-1, 31,0);
    tracep->declBus(c+435,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+436,"[0]", false,-1, 31,0);
    tracep->declBus(c+437,"[1]", false,-1, 31,0);
    tracep->declBus(c+438,"[2]", false,-1, 31,0);
    tracep->declBus(c+439,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+440,"[0]", false,-1, 31,0);
    tracep->declBus(c+441,"[1]", false,-1, 31,0);
    tracep->declBus(c+442,"[2]", false,-1, 31,0);
    tracep->declBus(c+443,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("A_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+149,"[0]", false,-1, 31,0);
    tracep->declBus(c+150,"[1]", false,-1, 31,0);
    tracep->declBus(c+151,"[2]", false,-1, 31,0);
    tracep->declBus(c+152,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+153,"[0]", false,-1, 31,0);
    tracep->declBus(c+154,"[1]", false,-1, 31,0);
    tracep->declBus(c+155,"[2]", false,-1, 31,0);
    tracep->declBus(c+156,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+157,"[0]", false,-1, 31,0);
    tracep->declBus(c+158,"[1]", false,-1, 31,0);
    tracep->declBus(c+159,"[2]", false,-1, 31,0);
    tracep->declBus(c+160,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+161,"[0]", false,-1, 31,0);
    tracep->declBus(c+162,"[1]", false,-1, 31,0);
    tracep->declBus(c+163,"[2]", false,-1, 31,0);
    tracep->declBus(c+164,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+165,"[0]", false,-1, 31,0);
    tracep->declBus(c+166,"[1]", false,-1, 31,0);
    tracep->declBus(c+167,"[2]", false,-1, 31,0);
    tracep->declBus(c+168,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+169,"[0]", false,-1, 31,0);
    tracep->declBus(c+170,"[1]", false,-1, 31,0);
    tracep->declBus(c+171,"[2]", false,-1, 31,0);
    tracep->declBus(c+172,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+173,"[0]", false,-1, 31,0);
    tracep->declBus(c+174,"[1]", false,-1, 31,0);
    tracep->declBus(c+175,"[2]", false,-1, 31,0);
    tracep->declBus(c+176,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+177,"[0]", false,-1, 31,0);
    tracep->declBus(c+178,"[1]", false,-1, 31,0);
    tracep->declBus(c+179,"[2]", false,-1, 31,0);
    tracep->declBus(c+180,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ciphertext");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+108,"[0]", false,-1, 31,0);
    tracep->declBus(c+109,"[1]", false,-1, 31,0);
    tracep->declBus(c+110,"[2]", false,-1, 31,0);
    tracep->declBus(c+111,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+112,"[0]", false,-1, 31,0);
    tracep->declBus(c+113,"[1]", false,-1, 31,0);
    tracep->declBus(c+114,"[2]", false,-1, 31,0);
    tracep->declBus(c+115,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+116,"[0]", false,-1, 31,0);
    tracep->declBus(c+117,"[1]", false,-1, 31,0);
    tracep->declBus(c+118,"[2]", false,-1, 31,0);
    tracep->declBus(c+119,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+120,"[0]", false,-1, 31,0);
    tracep->declBus(c+121,"[1]", false,-1, 31,0);
    tracep->declBus(c+122,"[2]", false,-1, 31,0);
    tracep->declBus(c+123,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("r");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+181,"[0]", false,-1, 31,0);
    tracep->declBus(c+182,"[1]", false,-1, 31,0);
    tracep->declBus(c+183,"[2]", false,-1, 31,0);
    tracep->declBus(c+184,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+185,"[0]", false,-1, 31,0);
    tracep->declBus(c+186,"[1]", false,-1, 31,0);
    tracep->declBus(c+187,"[2]", false,-1, 31,0);
    tracep->declBus(c+188,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e1");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+189,"[0]", false,-1, 31,0);
    tracep->declBus(c+190,"[1]", false,-1, 31,0);
    tracep->declBus(c+191,"[2]", false,-1, 31,0);
    tracep->declBus(c+192,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+193,"[0]", false,-1, 31,0);
    tracep->declBus(c+194,"[1]", false,-1, 31,0);
    tracep->declBus(c+195,"[2]", false,-1, 31,0);
    tracep->declBus(c+196,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+197+i*1,"e2", true,(i+0), 31,0);
    }
    tracep->declBus(c+2,"decimal_value", false,-1, 31,0);
    tracep->declBus(c+3,"m_b", false,-1, 3,0);
    tracep->declBus(c+201,"A_t000", false,-1, 31,0);
    tracep->declBus(c+202,"A_t001", false,-1, 31,0);
    tracep->declBus(c+203,"A_t002", false,-1, 31,0);
    tracep->declBus(c+204,"A_t003", false,-1, 31,0);
    tracep->declBus(c+205,"A_t010", false,-1, 31,0);
    tracep->declBus(c+206,"A_t011", false,-1, 31,0);
    tracep->declBus(c+207,"A_t012", false,-1, 31,0);
    tracep->declBus(c+208,"A_t013", false,-1, 31,0);
    tracep->declBus(c+209,"A_t020", false,-1, 31,0);
    tracep->declBus(c+210,"A_t021", false,-1, 31,0);
    tracep->declBus(c+211,"A_t022", false,-1, 31,0);
    tracep->declBus(c+212,"A_t023", false,-1, 31,0);
    tracep->declBus(c+213,"A_t030", false,-1, 31,0);
    tracep->declBus(c+214,"A_t031", false,-1, 31,0);
    tracep->declBus(c+215,"A_t032", false,-1, 31,0);
    tracep->declBus(c+216,"A_t033", false,-1, 31,0);
    tracep->declBus(c+217,"s_00", false,-1, 31,0);
    tracep->declBus(c+218,"s_01", false,-1, 31,0);
    tracep->declBus(c+219,"s_02", false,-1, 31,0);
    tracep->declBus(c+220,"s_03", false,-1, 31,0);
    tracep->declBus(c+221,"s_10", false,-1, 31,0);
    tracep->declBus(c+222,"s_11", false,-1, 31,0);
    tracep->declBus(c+223,"s_12", false,-1, 31,0);
    tracep->declBus(c+224,"s_13", false,-1, 31,0);
    tracep->declBus(c+225,"e_00", false,-1, 31,0);
    tracep->declBus(c+226,"e_01", false,-1, 31,0);
    tracep->declBus(c+227,"e_02", false,-1, 31,0);
    tracep->declBus(c+228,"e_03", false,-1, 31,0);
    tracep->declBus(c+229,"e_10", false,-1, 31,0);
    tracep->declBus(c+230,"e_11", false,-1, 31,0);
    tracep->declBus(c+231,"e_12", false,-1, 31,0);
    tracep->declBus(c+232,"e_13", false,-1, 31,0);
    tracep->declBus(c+233,"message", false,-1, 31,0);
    tracep->declBus(c+234,"public_key000", false,-1, 31,0);
    tracep->declBus(c+235,"public_key001", false,-1, 31,0);
    tracep->declBus(c+236,"public_key002", false,-1, 31,0);
    tracep->declBus(c+237,"public_key003", false,-1, 31,0);
    tracep->declBus(c+238,"public_key010", false,-1, 31,0);
    tracep->declBus(c+239,"public_key011", false,-1, 31,0);
    tracep->declBus(c+240,"public_key012", false,-1, 31,0);
    tracep->declBus(c+241,"public_key013", false,-1, 31,0);
    tracep->declBus(c+242,"public_key020", false,-1, 31,0);
    tracep->declBus(c+243,"public_key021", false,-1, 31,0);
    tracep->declBus(c+244,"public_key022", false,-1, 31,0);
    tracep->declBus(c+245,"public_key023", false,-1, 31,0);
    tracep->declBus(c+246,"public_key030", false,-1, 31,0);
    tracep->declBus(c+247,"public_key031", false,-1, 31,0);
    tracep->declBus(c+248,"public_key032", false,-1, 31,0);
    tracep->declBus(c+249,"public_key033", false,-1, 31,0);
    tracep->declBus(c+250,"public_key100", false,-1, 31,0);
    tracep->declBus(c+251,"public_key101", false,-1, 31,0);
    tracep->declBus(c+252,"public_key102", false,-1, 31,0);
    tracep->declBus(c+253,"public_key103", false,-1, 31,0);
    tracep->declBus(c+254,"public_key110", false,-1, 31,0);
    tracep->declBus(c+255,"public_key111", false,-1, 31,0);
    tracep->declBus(c+256,"public_key112", false,-1, 31,0);
    tracep->declBus(c+257,"public_key113", false,-1, 31,0);
    tracep->declBus(c+258,"r_00", false,-1, 31,0);
    tracep->declBus(c+259,"r_01", false,-1, 31,0);
    tracep->declBus(c+260,"r_02", false,-1, 31,0);
    tracep->declBus(c+261,"r_03", false,-1, 31,0);
    tracep->declBus(c+262,"r_10", false,-1, 31,0);
    tracep->declBus(c+263,"r_11", false,-1, 31,0);
    tracep->declBus(c+264,"r_12", false,-1, 31,0);
    tracep->declBus(c+265,"r_13", false,-1, 31,0);
    tracep->declBus(c+266,"e1_00", false,-1, 31,0);
    tracep->declBus(c+267,"e1_01", false,-1, 31,0);
    tracep->declBus(c+268,"e1_02", false,-1, 31,0);
    tracep->declBus(c+269,"e1_03", false,-1, 31,0);
    tracep->declBus(c+270,"e1_10", false,-1, 31,0);
    tracep->declBus(c+271,"e1_11", false,-1, 31,0);
    tracep->declBus(c+272,"e1_12", false,-1, 31,0);
    tracep->declBus(c+273,"e1_13", false,-1, 31,0);
    tracep->declBus(c+274,"e2_0", false,-1, 31,0);
    tracep->declBus(c+275,"e2_1", false,-1, 31,0);
    tracep->declBus(c+276,"e2_2", false,-1, 31,0);
    tracep->declBus(c+277,"e2_3", false,-1, 31,0);
    tracep->declBus(c+278,"ciphertext000", false,-1, 31,0);
    tracep->declBus(c+279,"ciphertext001", false,-1, 31,0);
    tracep->declBus(c+280,"ciphertext002", false,-1, 31,0);
    tracep->declBus(c+281,"ciphertext003", false,-1, 31,0);
    tracep->declBus(c+282,"ciphertext010", false,-1, 31,0);
    tracep->declBus(c+283,"ciphertext011", false,-1, 31,0);
    tracep->declBus(c+284,"ciphertext012", false,-1, 31,0);
    tracep->declBus(c+285,"ciphertext013", false,-1, 31,0);
    tracep->declBus(c+286,"ciphertext100", false,-1, 31,0);
    tracep->declBus(c+287,"ciphertext101", false,-1, 31,0);
    tracep->declBus(c+288,"ciphertext102", false,-1, 31,0);
    tracep->declBus(c+289,"ciphertext103", false,-1, 31,0);
    tracep->pushNamePrefix("decryption ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+774,"decryption_enable", false,-1);
    tracep->pushNamePrefix("secret_key");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+290,"[0]", false,-1, 31,0);
    tracep->declBus(c+291,"[1]", false,-1, 31,0);
    tracep->declBus(c+292,"[2]", false,-1, 31,0);
    tracep->declBus(c+293,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+294,"[0]", false,-1, 31,0);
    tracep->declBus(c+295,"[1]", false,-1, 31,0);
    tracep->declBus(c+296,"[2]", false,-1, 31,0);
    tracep->declBus(c+297,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ciphertext");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+4,"[0]", false,-1, 31,0);
    tracep->declBus(c+5,"[1]", false,-1, 31,0);
    tracep->declBus(c+6,"[2]", false,-1, 31,0);
    tracep->declBus(c+7,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+8,"[0]", false,-1, 31,0);
    tracep->declBus(c+9,"[1]", false,-1, 31,0);
    tracep->declBus(c+10,"[2]", false,-1, 31,0);
    tracep->declBus(c+11,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+12,"[0]", false,-1, 31,0);
    tracep->declBus(c+13,"[1]", false,-1, 31,0);
    tracep->declBus(c+14,"[2]", false,-1, 31,0);
    tracep->declBus(c+15,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+16,"[0]", false,-1, 31,0);
    tracep->declBus(c+17,"[1]", false,-1, 31,0);
    tracep->declBus(c+18,"[2]", false,-1, 31,0);
    tracep->declBus(c+19,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+3,"m_b", false,-1, 3,0);
    tracep->declBit(c+445,"decryption_done", false,-1);
    tracep->declBus(c+2,"decimal_value", false,-1, 31,0);
    tracep->declBus(c+779,"Q", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+446+i*1,"poly_out0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+450+i*1,"poly_out1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+20+i*1,"temp_m_n", true,(i+0), 31,0);
    }
    tracep->declBit(c+454,"decryption_done_next", false,-1);
    tracep->pushNamePrefix("poly_mult1 ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+774,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+24+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+298+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+455+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+28+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult2 ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+774,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+32+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+302+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+459+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+36+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("encryption ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+773,"encryption_enable", false,-1);
    tracep->declBus(c+233,"message", false,-1, 31,0);
    tracep->pushNamePrefix("r");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+306,"[0]", false,-1, 31,0);
    tracep->declBus(c+307,"[1]", false,-1, 31,0);
    tracep->declBus(c+308,"[2]", false,-1, 31,0);
    tracep->declBus(c+309,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+310,"[0]", false,-1, 31,0);
    tracep->declBus(c+311,"[1]", false,-1, 31,0);
    tracep->declBus(c+312,"[2]", false,-1, 31,0);
    tracep->declBus(c+313,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e1");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+314,"[0]", false,-1, 31,0);
    tracep->declBus(c+315,"[1]", false,-1, 31,0);
    tracep->declBus(c+316,"[2]", false,-1, 31,0);
    tracep->declBus(c+317,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+318,"[0]", false,-1, 31,0);
    tracep->declBus(c+319,"[1]", false,-1, 31,0);
    tracep->declBus(c+320,"[2]", false,-1, 31,0);
    tracep->declBus(c+321,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+322+i*1,"e2", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("combined_output");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+463,"[0]", false,-1, 31,0);
    tracep->declBus(c+464,"[1]", false,-1, 31,0);
    tracep->declBus(c+465,"[2]", false,-1, 31,0);
    tracep->declBus(c+466,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+467,"[0]", false,-1, 31,0);
    tracep->declBus(c+468,"[1]", false,-1, 31,0);
    tracep->declBus(c+469,"[2]", false,-1, 31,0);
    tracep->declBus(c+470,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+471,"[0]", false,-1, 31,0);
    tracep->declBus(c+472,"[1]", false,-1, 31,0);
    tracep->declBus(c+473,"[2]", false,-1, 31,0);
    tracep->declBus(c+474,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+475,"[0]", false,-1, 31,0);
    tracep->declBus(c+476,"[1]", false,-1, 31,0);
    tracep->declBus(c+477,"[2]", false,-1, 31,0);
    tracep->declBus(c+478,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+479,"[0]", false,-1, 31,0);
    tracep->declBus(c+480,"[1]", false,-1, 31,0);
    tracep->declBus(c+481,"[2]", false,-1, 31,0);
    tracep->declBus(c+482,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+483,"[0]", false,-1, 31,0);
    tracep->declBus(c+484,"[1]", false,-1, 31,0);
    tracep->declBus(c+485,"[2]", false,-1, 31,0);
    tracep->declBus(c+486,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+487,"[0]", false,-1, 31,0);
    tracep->declBus(c+488,"[1]", false,-1, 31,0);
    tracep->declBus(c+489,"[2]", false,-1, 31,0);
    tracep->declBus(c+490,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+491,"[0]", false,-1, 31,0);
    tracep->declBus(c+492,"[1]", false,-1, 31,0);
    tracep->declBus(c+493,"[2]", false,-1, 31,0);
    tracep->declBus(c+494,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ciphertext");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+40,"[0]", false,-1, 31,0);
    tracep->declBus(c+41,"[1]", false,-1, 31,0);
    tracep->declBus(c+42,"[2]", false,-1, 31,0);
    tracep->declBus(c+43,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+44,"[0]", false,-1, 31,0);
    tracep->declBus(c+45,"[1]", false,-1, 31,0);
    tracep->declBus(c+46,"[2]", false,-1, 31,0);
    tracep->declBus(c+47,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+48,"[0]", false,-1, 31,0);
    tracep->declBus(c+49,"[1]", false,-1, 31,0);
    tracep->declBus(c+50,"[2]", false,-1, 31,0);
    tracep->declBus(c+51,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+52,"[0]", false,-1, 31,0);
    tracep->declBus(c+53,"[1]", false,-1, 31,0);
    tracep->declBus(c+54,"[2]", false,-1, 31,0);
    tracep->declBus(c+55,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+137,"encryption_done", false,-1);
    tracep->pushNamePrefix("transposed_matrix");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+495,"[0]", false,-1, 31,0);
    tracep->declBus(c+496,"[1]", false,-1, 31,0);
    tracep->declBus(c+497,"[2]", false,-1, 31,0);
    tracep->declBus(c+498,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+499,"[0]", false,-1, 31,0);
    tracep->declBus(c+500,"[1]", false,-1, 31,0);
    tracep->declBus(c+501,"[2]", false,-1, 31,0);
    tracep->declBus(c+502,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+503,"[0]", false,-1, 31,0);
    tracep->declBus(c+504,"[1]", false,-1, 31,0);
    tracep->declBus(c+505,"[2]", false,-1, 31,0);
    tracep->declBus(c+506,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+507,"[0]", false,-1, 31,0);
    tracep->declBus(c+508,"[1]", false,-1, 31,0);
    tracep->declBus(c+509,"[2]", false,-1, 31,0);
    tracep->declBus(c+510,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+511+i*1,"poly_out0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+515+i*1,"poly_out1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+519+i*1,"poly_out2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+523+i*1,"poly_out3", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+527+i*1,"poly_out4", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+531+i*1,"poly_out5", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+56+i*1,"added", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+60+i*1,"added1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+64+i*1,"added2", true,(i+0), 31,0);
    }
    tracep->declBus(c+326,"coefficients", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+327+i*1,"coefficients_scaled", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("u");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+68,"[0]", false,-1, 31,0);
    tracep->declBus(c+69,"[1]", false,-1, 31,0);
    tracep->declBus(c+70,"[2]", false,-1, 31,0);
    tracep->declBus(c+71,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+72,"[0]", false,-1, 31,0);
    tracep->declBus(c+73,"[1]", false,-1, 31,0);
    tracep->declBus(c+74,"[2]", false,-1, 31,0);
    tracep->declBus(c+75,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+76+i*1,"v", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+782+i*1,"temp", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("poly_mult_inst ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+773,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+535+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+331+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+539+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+543+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst1 ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+773,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+547+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+335+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+551+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+555+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst2 ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+773,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+559+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+339+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+563+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+567+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst3 ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+773,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+571+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+343+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+575+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+579+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst4 ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+773,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+583+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+347+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+587+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+591+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst5 ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+773,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+595+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+351+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+599+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+603+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("transpose_inst ");
    tracep->pushNamePrefix("matrix_in");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+607,"[0]", false,-1, 31,0);
    tracep->declBus(c+608,"[1]", false,-1, 31,0);
    tracep->declBus(c+609,"[2]", false,-1, 31,0);
    tracep->declBus(c+610,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+611,"[0]", false,-1, 31,0);
    tracep->declBus(c+612,"[1]", false,-1, 31,0);
    tracep->declBus(c+613,"[2]", false,-1, 31,0);
    tracep->declBus(c+614,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+615,"[0]", false,-1, 31,0);
    tracep->declBus(c+616,"[1]", false,-1, 31,0);
    tracep->declBus(c+617,"[2]", false,-1, 31,0);
    tracep->declBus(c+618,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+619,"[0]", false,-1, 31,0);
    tracep->declBus(c+620,"[1]", false,-1, 31,0);
    tracep->declBus(c+621,"[2]", false,-1, 31,0);
    tracep->declBus(c+622,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("matrix_out");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+623,"[0]", false,-1, 31,0);
    tracep->declBus(c+624,"[1]", false,-1, 31,0);
    tracep->declBus(c+625,"[2]", false,-1, 31,0);
    tracep->declBus(c+626,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+627,"[0]", false,-1, 31,0);
    tracep->declBus(c+628,"[1]", false,-1, 31,0);
    tracep->declBus(c+629,"[2]", false,-1, 31,0);
    tracep->declBus(c+630,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+631,"[0]", false,-1, 31,0);
    tracep->declBus(c+632,"[1]", false,-1, 31,0);
    tracep->declBus(c+633,"[2]", false,-1, 31,0);
    tracep->declBus(c+634,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+635,"[0]", false,-1, 31,0);
    tracep->declBus(c+636,"[1]", false,-1, 31,0);
    tracep->declBus(c+637,"[2]", false,-1, 31,0);
    tracep->declBus(c+638,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+355,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+356,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+80,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+81,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+786,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+780,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("keygen ");
    tracep->pushNamePrefix("A");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+711,"[0]", false,-1, 31,0);
    tracep->declBus(c+712,"[1]", false,-1, 31,0);
    tracep->declBus(c+713,"[2]", false,-1, 31,0);
    tracep->declBus(c+714,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+715,"[0]", false,-1, 31,0);
    tracep->declBus(c+716,"[1]", false,-1, 31,0);
    tracep->declBus(c+717,"[2]", false,-1, 31,0);
    tracep->declBus(c+718,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+719,"[0]", false,-1, 31,0);
    tracep->declBus(c+720,"[1]", false,-1, 31,0);
    tracep->declBus(c+721,"[2]", false,-1, 31,0);
    tracep->declBus(c+722,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+723,"[0]", false,-1, 31,0);
    tracep->declBus(c+724,"[1]", false,-1, 31,0);
    tracep->declBus(c+725,"[2]", false,-1, 31,0);
    tracep->declBus(c+726,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+357,"[0]", false,-1, 31,0);
    tracep->declBus(c+358,"[1]", false,-1, 31,0);
    tracep->declBus(c+359,"[2]", false,-1, 31,0);
    tracep->declBus(c+360,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+361,"[0]", false,-1, 31,0);
    tracep->declBus(c+362,"[1]", false,-1, 31,0);
    tracep->declBus(c+363,"[2]", false,-1, 31,0);
    tracep->declBus(c+364,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("secret_key");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+365,"[0]", false,-1, 31,0);
    tracep->declBus(c+366,"[1]", false,-1, 31,0);
    tracep->declBus(c+367,"[2]", false,-1, 31,0);
    tracep->declBus(c+368,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+369,"[0]", false,-1, 31,0);
    tracep->declBus(c+370,"[1]", false,-1, 31,0);
    tracep->declBus(c+371,"[2]", false,-1, 31,0);
    tracep->declBus(c+372,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("secretkey");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+373,"[0]", false,-1, 31,0);
    tracep->declBus(c+374,"[1]", false,-1, 31,0);
    tracep->declBus(c+375,"[2]", false,-1, 31,0);
    tracep->declBus(c+376,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+377,"[0]", false,-1, 31,0);
    tracep->declBus(c+378,"[1]", false,-1, 31,0);
    tracep->declBus(c+379,"[2]", false,-1, 31,0);
    tracep->declBus(c+380,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+82,"[0]", false,-1, 31,0);
    tracep->declBus(c+83,"[1]", false,-1, 31,0);
    tracep->declBus(c+84,"[2]", false,-1, 31,0);
    tracep->declBus(c+85,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+86,"[0]", false,-1, 31,0);
    tracep->declBus(c+87,"[1]", false,-1, 31,0);
    tracep->declBus(c+88,"[2]", false,-1, 31,0);
    tracep->declBus(c+89,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("combined_output");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+639,"[0]", false,-1, 31,0);
    tracep->declBus(c+640,"[1]", false,-1, 31,0);
    tracep->declBus(c+641,"[2]", false,-1, 31,0);
    tracep->declBus(c+642,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+643,"[0]", false,-1, 31,0);
    tracep->declBus(c+644,"[1]", false,-1, 31,0);
    tracep->declBus(c+645,"[2]", false,-1, 31,0);
    tracep->declBus(c+646,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+647,"[0]", false,-1, 31,0);
    tracep->declBus(c+648,"[1]", false,-1, 31,0);
    tracep->declBus(c+649,"[2]", false,-1, 31,0);
    tracep->declBus(c+650,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+651,"[0]", false,-1, 31,0);
    tracep->declBus(c+652,"[1]", false,-1, 31,0);
    tracep->declBus(c+653,"[2]", false,-1, 31,0);
    tracep->declBus(c+654,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+655,"[0]", false,-1, 31,0);
    tracep->declBus(c+656,"[1]", false,-1, 31,0);
    tracep->declBus(c+657,"[2]", false,-1, 31,0);
    tracep->declBus(c+658,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+659,"[0]", false,-1, 31,0);
    tracep->declBus(c+660,"[1]", false,-1, 31,0);
    tracep->declBus(c+661,"[2]", false,-1, 31,0);
    tracep->declBus(c+662,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+663,"[0]", false,-1, 31,0);
    tracep->declBus(c+664,"[1]", false,-1, 31,0);
    tracep->declBus(c+665,"[2]", false,-1, 31,0);
    tracep->declBus(c+666,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+667,"[0]", false,-1, 31,0);
    tracep->declBus(c+668,"[1]", false,-1, 31,0);
    tracep->declBus(c+669,"[2]", false,-1, 31,0);
    tracep->declBus(c+670,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+772,"key_enable", false,-1);
    tracep->declBit(c+444,"key_done", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+671+i*1,"poly_out0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+675+i*1,"poly_out1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+679+i*1,"poly_out2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+683+i*1,"poly_out3", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+90+i*1,"added", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+94+i*1,"added1", true,(i+0), 31,0);
    }
    tracep->declBit(c+687,"key_done_next", false,-1);
    tracep->pushNamePrefix("poly_mult0 ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+772,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+727+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+381+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+688+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+731+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult1 ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+772,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+735+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+385+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+692+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+739+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult2 ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+772,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+743+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+389+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+696+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+747+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult3 ");
    tracep->declBit(c+759,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+772,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+751+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+393+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+700+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+755+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+781,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+780,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+780,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+780,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+397,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+398,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk11 ");
    tracep->declBus(c+704,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk12 ");
    tracep->declBus(c+705,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+780,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+98,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+99,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+706,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+707,"j", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+708,"k", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+709,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk10 ");
    tracep->declBus(c+710,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+399,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+400,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+401,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+402,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+403,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("deviceAdapter ");
    tracep->declBit(c+778,"io_wbSlaveTransmitter_ready", false,-1);
    tracep->declBit(c+130,"io_wbSlaveTransmitter_bits_ack", false,-1);
    tracep->declBus(c+131,"io_wbSlaveTransmitter_bits_dat", false,-1, 31,0);
    tracep->declBit(c+778,"io_wbMasterReceiver_ready", false,-1);
    tracep->declBit(c+124,"io_wbMasterReceiver_valid", false,-1);
    tracep->declBit(c+125,"io_wbMasterReceiver_bits_cyc", false,-1);
    tracep->declBit(c+124,"io_wbMasterReceiver_bits_stb", false,-1);
    tracep->declBit(c+126,"io_wbMasterReceiver_bits_we", false,-1);
    tracep->declBus(c+127,"io_wbMasterReceiver_bits_adr", false,-1, 31,0);
    tracep->declBus(c+128,"io_wbMasterReceiver_bits_dat", false,-1, 31,0);
    tracep->declBus(c+129,"io_wbMasterReceiver_bits_sel", false,-1, 3,0);
    tracep->declBit(c+135,"io_reqOut_valid", false,-1);
    tracep->declBus(c+127,"io_reqOut_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+128,"io_reqOut_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+129,"io_reqOut_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+126,"io_reqOut_bits_isWrite", false,-1);
    tracep->declBit(c+136,"io_rspIn_valid", false,-1);
    tracep->declBus(c+131,"io_rspIn_bits_dataResponse", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("hostAdapter ");
    tracep->declBit(c+759,"clock", false,-1);
    tracep->declBit(c+760,"reset", false,-1);
    tracep->declBit(c+778,"io_wbMasterTransmitter_ready", false,-1);
    tracep->declBit(c+124,"io_wbMasterTransmitter_valid", false,-1);
    tracep->declBit(c+125,"io_wbMasterTransmitter_bits_cyc", false,-1);
    tracep->declBit(c+124,"io_wbMasterTransmitter_bits_stb", false,-1);
    tracep->declBit(c+126,"io_wbMasterTransmitter_bits_we", false,-1);
    tracep->declBus(c+127,"io_wbMasterTransmitter_bits_adr", false,-1, 31,0);
    tracep->declBus(c+128,"io_wbMasterTransmitter_bits_dat", false,-1, 31,0);
    tracep->declBus(c+129,"io_wbMasterTransmitter_bits_sel", false,-1, 3,0);
    tracep->declBit(c+778,"io_wbSlaveReceiver_ready", false,-1);
    tracep->declBit(c+130,"io_wbSlaveReceiver_bits_ack", false,-1);
    tracep->declBus(c+131,"io_wbSlaveReceiver_bits_dat", false,-1, 31,0);
    tracep->declBit(c+132,"io_reqIn_ready", false,-1);
    tracep->declBit(c+762,"io_reqIn_valid", false,-1);
    tracep->declBus(c+763,"io_reqIn_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+764,"io_reqIn_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+765,"io_reqIn_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+766,"io_reqIn_bits_isWrite", false,-1);
    tracep->declBit(c+133,"io_rspOut_valid", false,-1);
    tracep->declBus(c+134,"io_rspOut_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+404,"startWBTransaction", false,-1);
    tracep->declBus(c+134,"dataReg", false,-1, 31,0);
    tracep->declBit(c+133,"respReg", false,-1);
    tracep->declBit(c+405,"stbReg", false,-1);
    tracep->declBit(c+406,"cycReg", false,-1);
    tracep->declBit(c+407,"weReg", false,-1);
    tracep->declBus(c+408,"datReg", false,-1, 31,0);
    tracep->declBus(c+409,"adrReg", false,-1, 31,0);
    tracep->declBus(c+410,"selReg", false,-1, 3,0);
    tracep->declBit(c+411,"stateReg", false,-1);
    tracep->declBit(c+132,"readyReg", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_init_top(VBabyKyberHarness___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root__trace_init_top\n"); );
    // Body
    VBabyKyberHarness___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBabyKyberHarness___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBabyKyberHarness___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_register(VBabyKyberHarness___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBabyKyberHarness___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBabyKyberHarness___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBabyKyberHarness___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_full_sub_0(VBabyKyberHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root__trace_full_top_0\n"); );
    // Init
    VBabyKyberHarness___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBabyKyberHarness___024root*>(voidSelf);
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBabyKyberHarness___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBabyKyberHarness___024root__trace_full_sub_0(VBabyKyberHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberHarness___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_rst_n));
    bufp->fullIData(oldp+2,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decimal_value),32);
    bufp->fullCData(oldp+3,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__m_b),4);
    bufp->fullIData(oldp+4,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][0U]),32);
    bufp->fullIData(oldp+5,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][1U]),32);
    bufp->fullIData(oldp+6,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][2U]),32);
    bufp->fullIData(oldp+7,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][3U]),32);
    bufp->fullIData(oldp+8,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                            [0U][1U][0U]),32);
    bufp->fullIData(oldp+9,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                            [0U][1U][1U]),32);
    bufp->fullIData(oldp+10,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [0U][1U][2U]),32);
    bufp->fullIData(oldp+11,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [0U][1U][3U]),32);
    bufp->fullIData(oldp+12,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][0U]),32);
    bufp->fullIData(oldp+13,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][1U]),32);
    bufp->fullIData(oldp+14,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][2U]),32);
    bufp->fullIData(oldp+15,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][3U]),32);
    bufp->fullIData(oldp+16,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][0U]),32);
    bufp->fullIData(oldp+17,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][1U]),32);
    bufp->fullIData(oldp+18,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][2U]),32);
    bufp->fullIData(oldp+19,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][3U]),32);
    bufp->fullIData(oldp+20,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0]),32);
    bufp->fullIData(oldp+21,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1]),32);
    bufp->fullIData(oldp+22,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2]),32);
    bufp->fullIData(oldp+23,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3]),32);
    bufp->fullIData(oldp+24,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
    bufp->fullIData(oldp+25,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
    bufp->fullIData(oldp+26,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
    bufp->fullIData(oldp+27,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
    bufp->fullIData(oldp+28,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+29,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+30,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+31,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+32,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
    bufp->fullIData(oldp+33,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
    bufp->fullIData(oldp+34,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
    bufp->fullIData(oldp+35,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
    bufp->fullIData(oldp+36,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+37,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+38,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+39,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+40,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][0U]),32);
    bufp->fullIData(oldp+41,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][1U]),32);
    bufp->fullIData(oldp+42,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][2U]),32);
    bufp->fullIData(oldp+43,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][3U]),32);
    bufp->fullIData(oldp+44,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][0U]),32);
    bufp->fullIData(oldp+45,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][1U]),32);
    bufp->fullIData(oldp+46,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][2U]),32);
    bufp->fullIData(oldp+47,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][3U]),32);
    bufp->fullIData(oldp+48,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][0U]),32);
    bufp->fullIData(oldp+49,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][1U]),32);
    bufp->fullIData(oldp+50,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][2U]),32);
    bufp->fullIData(oldp+51,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][3U]),32);
    bufp->fullIData(oldp+52,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][0U]),32);
    bufp->fullIData(oldp+53,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][1U]),32);
    bufp->fullIData(oldp+54,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][2U]),32);
    bufp->fullIData(oldp+55,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][3U]),32);
    bufp->fullIData(oldp+56,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[0]),32);
    bufp->fullIData(oldp+57,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[1]),32);
    bufp->fullIData(oldp+58,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[2]),32);
    bufp->fullIData(oldp+59,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added[3]),32);
    bufp->fullIData(oldp+60,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[0]),32);
    bufp->fullIData(oldp+61,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[1]),32);
    bufp->fullIData(oldp+62,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[2]),32);
    bufp->fullIData(oldp+63,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added1[3]),32);
    bufp->fullIData(oldp+64,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[0]),32);
    bufp->fullIData(oldp+65,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[1]),32);
    bufp->fullIData(oldp+66,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[2]),32);
    bufp->fullIData(oldp+67,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__added2[3]),32);
    bufp->fullIData(oldp+68,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][0U]),32);
    bufp->fullIData(oldp+69,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][1U]),32);
    bufp->fullIData(oldp+70,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][2U]),32);
    bufp->fullIData(oldp+71,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][3U]),32);
    bufp->fullIData(oldp+72,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][0U]),32);
    bufp->fullIData(oldp+73,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][1U]),32);
    bufp->fullIData(oldp+74,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][2U]),32);
    bufp->fullIData(oldp+75,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][3U]),32);
    bufp->fullIData(oldp+76,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[0]),32);
    bufp->fullIData(oldp+77,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[1]),32);
    bufp->fullIData(oldp+78,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[2]),32);
    bufp->fullIData(oldp+79,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__v[3]),32);
    bufp->fullIData(oldp+80,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+81,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+82,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__result
                             [0U][0U]),32);
    bufp->fullIData(oldp+83,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__result
                             [0U][1U]),32);
    bufp->fullIData(oldp+84,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__result
                             [0U][2U]),32);
    bufp->fullIData(oldp+85,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__result
                             [0U][3U]),32);
    bufp->fullIData(oldp+86,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__result
                             [1U][0U]),32);
    bufp->fullIData(oldp+87,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__result
                             [1U][1U]),32);
    bufp->fullIData(oldp+88,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__result
                             [1U][2U]),32);
    bufp->fullIData(oldp+89,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__result
                             [1U][3U]),32);
    bufp->fullIData(oldp+90,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[0]),32);
    bufp->fullIData(oldp+91,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[1]),32);
    bufp->fullIData(oldp+92,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[2]),32);
    bufp->fullIData(oldp+93,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added[3]),32);
    bufp->fullIData(oldp+94,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[0]),32);
    bufp->fullIData(oldp+95,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[1]),32);
    bufp->fullIData(oldp+96,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[2]),32);
    bufp->fullIData(oldp+97,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__added1[3]),32);
    bufp->fullIData(oldp+98,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+99,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+100,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                              [0U][0U]),32);
    bufp->fullIData(oldp+101,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                              [0U][1U]),32);
    bufp->fullIData(oldp+102,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                              [0U][2U]),32);
    bufp->fullIData(oldp+103,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                              [0U][3U]),32);
    bufp->fullIData(oldp+104,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                              [1U][0U]),32);
    bufp->fullIData(oldp+105,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                              [1U][1U]),32);
    bufp->fullIData(oldp+106,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                              [1U][2U]),32);
    bufp->fullIData(oldp+107,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__result
                              [1U][3U]),32);
    bufp->fullIData(oldp+108,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+109,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+110,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+111,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+112,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+113,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+114,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+115,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+116,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+117,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+118,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+119,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+120,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+121,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+122,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+123,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext
                              [1U][1U][3U]),32);
    bufp->fullBit(oldp+124,(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_stb));
    bufp->fullBit(oldp+125,(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_cyc));
    bufp->fullBit(oldp+126,(vlSelf->BabyKyberHarness__DOT__hostAdapter_io_wbMasterTransmitter_bits_we));
    bufp->fullIData(oldp+127,(((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction)
                                ? vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__adrReg
                                : 0U)),32);
    bufp->fullIData(oldp+128,(((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction)
                                ? vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__datReg
                                : 0U)),32);
    bufp->fullCData(oldp+129,(((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction)
                                ? (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__selReg)
                                : 0U)),4);
    bufp->fullBit(oldp+130,(vlSelf->BabyKyberHarness__DOT__deviceAdapter_io_wbSlaveTransmitter_bits_ack));
    bufp->fullIData(oldp+131,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp),32);
    bufp->fullBit(oldp+132,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__readyReg));
    bufp->fullBit(oldp+133,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__respReg));
    bufp->fullIData(oldp+134,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__dataReg),32);
    bufp->fullBit(oldp+135,(vlSelf->BabyKyberHarness__DOT__deviceAdapter_io_reqOut_valid));
    bufp->fullBit(oldp+136,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__validReg));
    bufp->fullBit(oldp+137,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_encryption_done));
    bufp->fullBit(oldp+138,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_wen_Req));
    bufp->fullCData(oldp+139,(((IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction)
                                ? (IData)(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__selReg)
                                : 0U)),8);
    bufp->fullIData(oldp+140,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_data_Resp),32);
    bufp->fullIData(oldp+141,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [0U][0U]),32);
    bufp->fullIData(oldp+142,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [0U][1U]),32);
    bufp->fullIData(oldp+143,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [0U][2U]),32);
    bufp->fullIData(oldp+144,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [0U][3U]),32);
    bufp->fullIData(oldp+145,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [1U][0U]),32);
    bufp->fullIData(oldp+146,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [1U][1U]),32);
    bufp->fullIData(oldp+147,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [1U][2U]),32);
    bufp->fullIData(oldp+148,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__secretkey
                              [1U][3U]),32);
    bufp->fullIData(oldp+149,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+150,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+151,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+152,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+153,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+154,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+155,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+156,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+157,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [2U][0U]),32);
    bufp->fullIData(oldp+158,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [2U][1U]),32);
    bufp->fullIData(oldp+159,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [2U][2U]),32);
    bufp->fullIData(oldp+160,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [2U][3U]),32);
    bufp->fullIData(oldp+161,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [3U][0U]),32);
    bufp->fullIData(oldp+162,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [3U][1U]),32);
    bufp->fullIData(oldp+163,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [3U][2U]),32);
    bufp->fullIData(oldp+164,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_reg
                              [3U][3U]),32);
    bufp->fullIData(oldp+165,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+166,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+167,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+168,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+169,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+170,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+171,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+172,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+173,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+174,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+175,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+176,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+177,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+178,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+179,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+180,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+181,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [0U][0U]),32);
    bufp->fullIData(oldp+182,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [0U][1U]),32);
    bufp->fullIData(oldp+183,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [0U][2U]),32);
    bufp->fullIData(oldp+184,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [0U][3U]),32);
    bufp->fullIData(oldp+185,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [1U][0U]),32);
    bufp->fullIData(oldp+186,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [1U][1U]),32);
    bufp->fullIData(oldp+187,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [1U][2U]),32);
    bufp->fullIData(oldp+188,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r
                              [1U][3U]),32);
    bufp->fullIData(oldp+189,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [0U][0U]),32);
    bufp->fullIData(oldp+190,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [0U][1U]),32);
    bufp->fullIData(oldp+191,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [0U][2U]),32);
    bufp->fullIData(oldp+192,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [0U][3U]),32);
    bufp->fullIData(oldp+193,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [1U][0U]),32);
    bufp->fullIData(oldp+194,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [1U][1U]),32);
    bufp->fullIData(oldp+195,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [1U][2U]),32);
    bufp->fullIData(oldp+196,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1
                              [1U][3U]),32);
    bufp->fullIData(oldp+197,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[0]),32);
    bufp->fullIData(oldp+198,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[1]),32);
    bufp->fullIData(oldp+199,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[2]),32);
    bufp->fullIData(oldp+200,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2[3]),32);
    bufp->fullIData(oldp+201,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t000),32);
    bufp->fullIData(oldp+202,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t001),32);
    bufp->fullIData(oldp+203,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t002),32);
    bufp->fullIData(oldp+204,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t003),32);
    bufp->fullIData(oldp+205,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t010),32);
    bufp->fullIData(oldp+206,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t011),32);
    bufp->fullIData(oldp+207,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t012),32);
    bufp->fullIData(oldp+208,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t013),32);
    bufp->fullIData(oldp+209,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t020),32);
    bufp->fullIData(oldp+210,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t021),32);
    bufp->fullIData(oldp+211,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t022),32);
    bufp->fullIData(oldp+212,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t023),32);
    bufp->fullIData(oldp+213,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t030),32);
    bufp->fullIData(oldp+214,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t031),32);
    bufp->fullIData(oldp+215,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t032),32);
    bufp->fullIData(oldp+216,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__A_t033),32);
    bufp->fullIData(oldp+217,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_00),32);
    bufp->fullIData(oldp+218,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_01),32);
    bufp->fullIData(oldp+219,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_02),32);
    bufp->fullIData(oldp+220,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_03),32);
    bufp->fullIData(oldp+221,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_10),32);
    bufp->fullIData(oldp+222,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_11),32);
    bufp->fullIData(oldp+223,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_12),32);
    bufp->fullIData(oldp+224,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__s_13),32);
    bufp->fullIData(oldp+225,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_00),32);
    bufp->fullIData(oldp+226,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_01),32);
    bufp->fullIData(oldp+227,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_02),32);
    bufp->fullIData(oldp+228,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_03),32);
    bufp->fullIData(oldp+229,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_10),32);
    bufp->fullIData(oldp+230,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_11),32);
    bufp->fullIData(oldp+231,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_12),32);
    bufp->fullIData(oldp+232,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e_13),32);
    bufp->fullIData(oldp+233,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__message),32);
    bufp->fullIData(oldp+234,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key000),32);
    bufp->fullIData(oldp+235,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key001),32);
    bufp->fullIData(oldp+236,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key002),32);
    bufp->fullIData(oldp+237,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key003),32);
    bufp->fullIData(oldp+238,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key010),32);
    bufp->fullIData(oldp+239,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key011),32);
    bufp->fullIData(oldp+240,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key012),32);
    bufp->fullIData(oldp+241,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key013),32);
    bufp->fullIData(oldp+242,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key020),32);
    bufp->fullIData(oldp+243,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key021),32);
    bufp->fullIData(oldp+244,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key022),32);
    bufp->fullIData(oldp+245,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key023),32);
    bufp->fullIData(oldp+246,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key030),32);
    bufp->fullIData(oldp+247,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key031),32);
    bufp->fullIData(oldp+248,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key032),32);
    bufp->fullIData(oldp+249,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key033),32);
    bufp->fullIData(oldp+250,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key100),32);
    bufp->fullIData(oldp+251,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key101),32);
    bufp->fullIData(oldp+252,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key102),32);
    bufp->fullIData(oldp+253,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key103),32);
    bufp->fullIData(oldp+254,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key110),32);
    bufp->fullIData(oldp+255,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key111),32);
    bufp->fullIData(oldp+256,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key112),32);
    bufp->fullIData(oldp+257,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key113),32);
    bufp->fullIData(oldp+258,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_00),32);
    bufp->fullIData(oldp+259,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_01),32);
    bufp->fullIData(oldp+260,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_02),32);
    bufp->fullIData(oldp+261,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_03),32);
    bufp->fullIData(oldp+262,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_10),32);
    bufp->fullIData(oldp+263,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_11),32);
    bufp->fullIData(oldp+264,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_12),32);
    bufp->fullIData(oldp+265,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__r_13),32);
    bufp->fullIData(oldp+266,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_00),32);
    bufp->fullIData(oldp+267,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_01),32);
    bufp->fullIData(oldp+268,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_02),32);
    bufp->fullIData(oldp+269,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_03),32);
    bufp->fullIData(oldp+270,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_10),32);
    bufp->fullIData(oldp+271,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_11),32);
    bufp->fullIData(oldp+272,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_12),32);
    bufp->fullIData(oldp+273,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e1_13),32);
    bufp->fullIData(oldp+274,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_0),32);
    bufp->fullIData(oldp+275,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_1),32);
    bufp->fullIData(oldp+276,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_2),32);
    bufp->fullIData(oldp+277,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__e2_3),32);
    bufp->fullIData(oldp+278,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext000),32);
    bufp->fullIData(oldp+279,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext001),32);
    bufp->fullIData(oldp+280,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext002),32);
    bufp->fullIData(oldp+281,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext003),32);
    bufp->fullIData(oldp+282,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext010),32);
    bufp->fullIData(oldp+283,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext011),32);
    bufp->fullIData(oldp+284,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext012),32);
    bufp->fullIData(oldp+285,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext013),32);
    bufp->fullIData(oldp+286,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext100),32);
    bufp->fullIData(oldp+287,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext101),32);
    bufp->fullIData(oldp+288,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext102),32);
    bufp->fullIData(oldp+289,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__ciphertext103),32);
    bufp->fullIData(oldp+290,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [0U][0U]),32);
    bufp->fullIData(oldp+291,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [0U][1U]),32);
    bufp->fullIData(oldp+292,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [0U][2U]),32);
    bufp->fullIData(oldp+293,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [0U][3U]),32);
    bufp->fullIData(oldp+294,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [1U][0U]),32);
    bufp->fullIData(oldp+295,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [1U][1U]),32);
    bufp->fullIData(oldp+296,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [1U][2U]),32);
    bufp->fullIData(oldp+297,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [1U][3U]),32);
    bufp->fullIData(oldp+298,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
    bufp->fullIData(oldp+299,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
    bufp->fullIData(oldp+300,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
    bufp->fullIData(oldp+301,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
    bufp->fullIData(oldp+302,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
    bufp->fullIData(oldp+303,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
    bufp->fullIData(oldp+304,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
    bufp->fullIData(oldp+305,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
    bufp->fullIData(oldp+306,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [0U][0U]),32);
    bufp->fullIData(oldp+307,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [0U][1U]),32);
    bufp->fullIData(oldp+308,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [0U][2U]),32);
    bufp->fullIData(oldp+309,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [0U][3U]),32);
    bufp->fullIData(oldp+310,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [1U][0U]),32);
    bufp->fullIData(oldp+311,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [1U][1U]),32);
    bufp->fullIData(oldp+312,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [1U][2U]),32);
    bufp->fullIData(oldp+313,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [1U][3U]),32);
    bufp->fullIData(oldp+314,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [0U][0U]),32);
    bufp->fullIData(oldp+315,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [0U][1U]),32);
    bufp->fullIData(oldp+316,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [0U][2U]),32);
    bufp->fullIData(oldp+317,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [0U][3U]),32);
    bufp->fullIData(oldp+318,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [1U][0U]),32);
    bufp->fullIData(oldp+319,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [1U][1U]),32);
    bufp->fullIData(oldp+320,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [1U][2U]),32);
    bufp->fullIData(oldp+321,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [1U][3U]),32);
    bufp->fullIData(oldp+322,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e2[0]),32);
    bufp->fullIData(oldp+323,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e2[1]),32);
    bufp->fullIData(oldp+324,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e2[2]),32);
    bufp->fullIData(oldp+325,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__e2[3]),32);
    bufp->fullCData(oldp+326,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients),4);
    bufp->fullIData(oldp+327,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[0]),32);
    bufp->fullIData(oldp+328,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[1]),32);
    bufp->fullIData(oldp+329,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[2]),32);
    bufp->fullIData(oldp+330,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[3]),32);
    bufp->fullIData(oldp+331,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[0]),32);
    bufp->fullIData(oldp+332,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[1]),32);
    bufp->fullIData(oldp+333,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[2]),32);
    bufp->fullIData(oldp+334,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[3]),32);
    bufp->fullIData(oldp+335,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[0]),32);
    bufp->fullIData(oldp+336,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[1]),32);
    bufp->fullIData(oldp+337,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[2]),32);
    bufp->fullIData(oldp+338,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[3]),32);
    bufp->fullIData(oldp+339,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[0]),32);
    bufp->fullIData(oldp+340,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[1]),32);
    bufp->fullIData(oldp+341,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[2]),32);
    bufp->fullIData(oldp+342,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[3]),32);
    bufp->fullIData(oldp+343,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[0]),32);
    bufp->fullIData(oldp+344,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[1]),32);
    bufp->fullIData(oldp+345,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[2]),32);
    bufp->fullIData(oldp+346,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[3]),32);
    bufp->fullIData(oldp+347,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[0]),32);
    bufp->fullIData(oldp+348,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[1]),32);
    bufp->fullIData(oldp+349,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[2]),32);
    bufp->fullIData(oldp+350,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[3]),32);
    bufp->fullIData(oldp+351,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[0]),32);
    bufp->fullIData(oldp+352,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[1]),32);
    bufp->fullIData(oldp+353,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[2]),32);
    bufp->fullIData(oldp+354,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[3]),32);
    bufp->fullIData(oldp+355,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+356,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+357,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [0U][0U]),32);
    bufp->fullIData(oldp+358,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [0U][1U]),32);
    bufp->fullIData(oldp+359,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [0U][2U]),32);
    bufp->fullIData(oldp+360,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [0U][3U]),32);
    bufp->fullIData(oldp+361,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [1U][0U]),32);
    bufp->fullIData(oldp+362,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [1U][1U]),32);
    bufp->fullIData(oldp+363,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [1U][2U]),32);
    bufp->fullIData(oldp+364,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [1U][3U]),32);
    bufp->fullIData(oldp+365,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [0U][0U]),32);
    bufp->fullIData(oldp+366,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [0U][1U]),32);
    bufp->fullIData(oldp+367,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [0U][2U]),32);
    bufp->fullIData(oldp+368,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [0U][3U]),32);
    bufp->fullIData(oldp+369,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [1U][0U]),32);
    bufp->fullIData(oldp+370,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [1U][1U]),32);
    bufp->fullIData(oldp+371,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [1U][2U]),32);
    bufp->fullIData(oldp+372,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [1U][3U]),32);
    bufp->fullIData(oldp+373,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [0U][0U]),32);
    bufp->fullIData(oldp+374,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [0U][1U]),32);
    bufp->fullIData(oldp+375,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [0U][2U]),32);
    bufp->fullIData(oldp+376,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [0U][3U]),32);
    bufp->fullIData(oldp+377,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [1U][0U]),32);
    bufp->fullIData(oldp+378,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [1U][1U]),32);
    bufp->fullIData(oldp+379,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [1U][2U]),32);
    bufp->fullIData(oldp+380,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [1U][3U]),32);
    bufp->fullIData(oldp+381,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[0]),32);
    bufp->fullIData(oldp+382,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[1]),32);
    bufp->fullIData(oldp+383,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[2]),32);
    bufp->fullIData(oldp+384,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[3]),32);
    bufp->fullIData(oldp+385,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
    bufp->fullIData(oldp+386,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
    bufp->fullIData(oldp+387,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
    bufp->fullIData(oldp+388,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
    bufp->fullIData(oldp+389,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
    bufp->fullIData(oldp+390,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
    bufp->fullIData(oldp+391,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
    bufp->fullIData(oldp+392,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
    bufp->fullIData(oldp+393,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[0]),32);
    bufp->fullIData(oldp+394,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[1]),32);
    bufp->fullIData(oldp+395,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[2]),32);
    bufp->fullIData(oldp+396,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[3]),32);
    bufp->fullIData(oldp+397,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+398,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+399,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+400,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+401,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+402,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+403,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__unnamedblk5__DOT__i),32);
    bufp->fullBit(oldp+404,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__startWBTransaction));
    bufp->fullBit(oldp+405,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stbReg));
    bufp->fullBit(oldp+406,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__cycReg));
    bufp->fullBit(oldp+407,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__weReg));
    bufp->fullIData(oldp+408,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__datReg),32);
    bufp->fullIData(oldp+409,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__adrReg),32);
    bufp->fullCData(oldp+410,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__selReg),4);
    bufp->fullBit(oldp+411,(vlSelf->BabyKyberHarness__DOT__hostAdapter__DOT__stateReg));
    bufp->fullIData(oldp+412,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+413,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+414,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+415,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+416,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+417,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+418,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+419,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+420,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][2U][0U]),32);
    bufp->fullIData(oldp+421,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][2U][1U]),32);
    bufp->fullIData(oldp+422,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][2U][2U]),32);
    bufp->fullIData(oldp+423,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][2U][3U]),32);
    bufp->fullIData(oldp+424,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][3U][0U]),32);
    bufp->fullIData(oldp+425,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][3U][1U]),32);
    bufp->fullIData(oldp+426,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][3U][2U]),32);
    bufp->fullIData(oldp+427,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [0U][3U][3U]),32);
    bufp->fullIData(oldp+428,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+429,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+430,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+431,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+432,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+433,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+434,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+435,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+436,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][2U][0U]),32);
    bufp->fullIData(oldp+437,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][2U][1U]),32);
    bufp->fullIData(oldp+438,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][2U][2U]),32);
    bufp->fullIData(oldp+439,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][2U][3U]),32);
    bufp->fullIData(oldp+440,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][3U][0U]),32);
    bufp->fullIData(oldp+441,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][3U][1U]),32);
    bufp->fullIData(oldp+442,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][3U][2U]),32);
    bufp->fullIData(oldp+443,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__public_key
                              [1U][3U][3U]),32);
    bufp->fullBit(oldp+444,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_key_done));
    bufp->fullBit(oldp+445,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber_decryption_done));
    bufp->fullIData(oldp+446,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+447,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+448,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+449,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+450,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+451,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+452,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+453,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__poly_out1[3]),32);
    bufp->fullBit(oldp+454,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT__decryption_done_next));
    bufp->fullIData(oldp+455,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[0]),32);
    bufp->fullIData(oldp+456,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[1]),32);
    bufp->fullIData(oldp+457,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[2]),32);
    bufp->fullIData(oldp+458,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[3]),32);
    bufp->fullIData(oldp+459,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[0]),32);
    bufp->fullIData(oldp+460,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[1]),32);
    bufp->fullIData(oldp+461,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[2]),32);
    bufp->fullIData(oldp+462,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[3]),32);
    bufp->fullIData(oldp+463,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+464,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+465,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+466,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+467,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+468,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+469,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+470,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+471,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][0U]),32);
    bufp->fullIData(oldp+472,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][1U]),32);
    bufp->fullIData(oldp+473,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][2U]),32);
    bufp->fullIData(oldp+474,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][3U]),32);
    bufp->fullIData(oldp+475,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][0U]),32);
    bufp->fullIData(oldp+476,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][1U]),32);
    bufp->fullIData(oldp+477,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][2U]),32);
    bufp->fullIData(oldp+478,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][3U]),32);
    bufp->fullIData(oldp+479,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+480,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+481,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+482,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+483,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+484,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+485,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+486,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+487,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][0U]),32);
    bufp->fullIData(oldp+488,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][1U]),32);
    bufp->fullIData(oldp+489,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][2U]),32);
    bufp->fullIData(oldp+490,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][3U]),32);
    bufp->fullIData(oldp+491,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][0U]),32);
    bufp->fullIData(oldp+492,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][1U]),32);
    bufp->fullIData(oldp+493,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][2U]),32);
    bufp->fullIData(oldp+494,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][3U]),32);
    bufp->fullIData(oldp+495,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][0U]),32);
    bufp->fullIData(oldp+496,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][1U]),32);
    bufp->fullIData(oldp+497,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][2U]),32);
    bufp->fullIData(oldp+498,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][3U]),32);
    bufp->fullIData(oldp+499,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][0U]),32);
    bufp->fullIData(oldp+500,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][1U]),32);
    bufp->fullIData(oldp+501,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][2U]),32);
    bufp->fullIData(oldp+502,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][3U]),32);
    bufp->fullIData(oldp+503,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][0U]),32);
    bufp->fullIData(oldp+504,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][1U]),32);
    bufp->fullIData(oldp+505,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][2U]),32);
    bufp->fullIData(oldp+506,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][3U]),32);
    bufp->fullIData(oldp+507,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][0U]),32);
    bufp->fullIData(oldp+508,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][1U]),32);
    bufp->fullIData(oldp+509,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][2U]),32);
    bufp->fullIData(oldp+510,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][3U]),32);
    bufp->fullIData(oldp+511,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+512,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+513,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+514,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+515,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+516,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+517,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+518,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out1[3]),32);
    bufp->fullIData(oldp+519,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[0]),32);
    bufp->fullIData(oldp+520,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[1]),32);
    bufp->fullIData(oldp+521,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[2]),32);
    bufp->fullIData(oldp+522,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out2[3]),32);
    bufp->fullIData(oldp+523,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[0]),32);
    bufp->fullIData(oldp+524,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[1]),32);
    bufp->fullIData(oldp+525,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[2]),32);
    bufp->fullIData(oldp+526,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out3[3]),32);
    bufp->fullIData(oldp+527,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[0]),32);
    bufp->fullIData(oldp+528,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[1]),32);
    bufp->fullIData(oldp+529,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[2]),32);
    bufp->fullIData(oldp+530,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out4[3]),32);
    bufp->fullIData(oldp+531,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[0]),32);
    bufp->fullIData(oldp+532,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[1]),32);
    bufp->fullIData(oldp+533,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[2]),32);
    bufp->fullIData(oldp+534,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_out5[3]),32);
    bufp->fullIData(oldp+535,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[0]),32);
    bufp->fullIData(oldp+536,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[1]),32);
    bufp->fullIData(oldp+537,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[2]),32);
    bufp->fullIData(oldp+538,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[3]),32);
    bufp->fullIData(oldp+539,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[0]),32);
    bufp->fullIData(oldp+540,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[1]),32);
    bufp->fullIData(oldp+541,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[2]),32);
    bufp->fullIData(oldp+542,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[3]),32);
    bufp->fullIData(oldp+543,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+544,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+545,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+546,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+547,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[0]),32);
    bufp->fullIData(oldp+548,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[1]),32);
    bufp->fullIData(oldp+549,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[2]),32);
    bufp->fullIData(oldp+550,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[3]),32);
    bufp->fullIData(oldp+551,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[0]),32);
    bufp->fullIData(oldp+552,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[1]),32);
    bufp->fullIData(oldp+553,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[2]),32);
    bufp->fullIData(oldp+554,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[3]),32);
    bufp->fullIData(oldp+555,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+556,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+557,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+558,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+559,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[0]),32);
    bufp->fullIData(oldp+560,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[1]),32);
    bufp->fullIData(oldp+561,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[2]),32);
    bufp->fullIData(oldp+562,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[3]),32);
    bufp->fullIData(oldp+563,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[0]),32);
    bufp->fullIData(oldp+564,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[1]),32);
    bufp->fullIData(oldp+565,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[2]),32);
    bufp->fullIData(oldp+566,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[3]),32);
    bufp->fullIData(oldp+567,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+568,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+569,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+570,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+571,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[0]),32);
    bufp->fullIData(oldp+572,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[1]),32);
    bufp->fullIData(oldp+573,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[2]),32);
    bufp->fullIData(oldp+574,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[3]),32);
    bufp->fullIData(oldp+575,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[0]),32);
    bufp->fullIData(oldp+576,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[1]),32);
    bufp->fullIData(oldp+577,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[2]),32);
    bufp->fullIData(oldp+578,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[3]),32);
    bufp->fullIData(oldp+579,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+580,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+581,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+582,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+583,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[0]),32);
    bufp->fullIData(oldp+584,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[1]),32);
    bufp->fullIData(oldp+585,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[2]),32);
    bufp->fullIData(oldp+586,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[3]),32);
    bufp->fullIData(oldp+587,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[0]),32);
    bufp->fullIData(oldp+588,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[1]),32);
    bufp->fullIData(oldp+589,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[2]),32);
    bufp->fullIData(oldp+590,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[3]),32);
    bufp->fullIData(oldp+591,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+592,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+593,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+594,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+595,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[0]),32);
    bufp->fullIData(oldp+596,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[1]),32);
    bufp->fullIData(oldp+597,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[2]),32);
    bufp->fullIData(oldp+598,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[3]),32);
    bufp->fullIData(oldp+599,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[0]),32);
    bufp->fullIData(oldp+600,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[1]),32);
    bufp->fullIData(oldp+601,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[2]),32);
    bufp->fullIData(oldp+602,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[3]),32);
    bufp->fullIData(oldp+603,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+604,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+605,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+606,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+607,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][0U]),32);
    bufp->fullIData(oldp+608,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][1U]),32);
    bufp->fullIData(oldp+609,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][2U]),32);
    bufp->fullIData(oldp+610,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][3U]),32);
    bufp->fullIData(oldp+611,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][0U]),32);
    bufp->fullIData(oldp+612,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][1U]),32);
    bufp->fullIData(oldp+613,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][2U]),32);
    bufp->fullIData(oldp+614,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][3U]),32);
    bufp->fullIData(oldp+615,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][0U]),32);
    bufp->fullIData(oldp+616,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][1U]),32);
    bufp->fullIData(oldp+617,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][2U]),32);
    bufp->fullIData(oldp+618,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][3U]),32);
    bufp->fullIData(oldp+619,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][0U]),32);
    bufp->fullIData(oldp+620,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][1U]),32);
    bufp->fullIData(oldp+621,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][2U]),32);
    bufp->fullIData(oldp+622,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][3U]),32);
    bufp->fullIData(oldp+623,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][0U]),32);
    bufp->fullIData(oldp+624,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][1U]),32);
    bufp->fullIData(oldp+625,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][2U]),32);
    bufp->fullIData(oldp+626,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][3U]),32);
    bufp->fullIData(oldp+627,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][0U]),32);
    bufp->fullIData(oldp+628,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][1U]),32);
    bufp->fullIData(oldp+629,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][2U]),32);
    bufp->fullIData(oldp+630,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][3U]),32);
    bufp->fullIData(oldp+631,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][0U]),32);
    bufp->fullIData(oldp+632,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][1U]),32);
    bufp->fullIData(oldp+633,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][2U]),32);
    bufp->fullIData(oldp+634,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][3U]),32);
    bufp->fullIData(oldp+635,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][0U]),32);
    bufp->fullIData(oldp+636,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][1U]),32);
    bufp->fullIData(oldp+637,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][2U]),32);
    bufp->fullIData(oldp+638,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][3U]),32);
    bufp->fullIData(oldp+639,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+640,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+641,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+642,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+643,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+644,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+645,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+646,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+647,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][2U][0U]),32);
    bufp->fullIData(oldp+648,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][2U][1U]),32);
    bufp->fullIData(oldp+649,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][2U][2U]),32);
    bufp->fullIData(oldp+650,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][2U][3U]),32);
    bufp->fullIData(oldp+651,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][3U][0U]),32);
    bufp->fullIData(oldp+652,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][3U][1U]),32);
    bufp->fullIData(oldp+653,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][3U][2U]),32);
    bufp->fullIData(oldp+654,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][3U][3U]),32);
    bufp->fullIData(oldp+655,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+656,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+657,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+658,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+659,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+660,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+661,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+662,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+663,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][2U][0U]),32);
    bufp->fullIData(oldp+664,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][2U][1U]),32);
    bufp->fullIData(oldp+665,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][2U][2U]),32);
    bufp->fullIData(oldp+666,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][2U][3U]),32);
    bufp->fullIData(oldp+667,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][3U][0U]),32);
    bufp->fullIData(oldp+668,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][3U][1U]),32);
    bufp->fullIData(oldp+669,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][3U][2U]),32);
    bufp->fullIData(oldp+670,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][3U][3U]),32);
    bufp->fullIData(oldp+671,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+672,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+673,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+674,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+675,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+676,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+677,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+678,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out1[3]),32);
    bufp->fullIData(oldp+679,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[0]),32);
    bufp->fullIData(oldp+680,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[1]),32);
    bufp->fullIData(oldp+681,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[2]),32);
    bufp->fullIData(oldp+682,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out2[3]),32);
    bufp->fullIData(oldp+683,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[0]),32);
    bufp->fullIData(oldp+684,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[1]),32);
    bufp->fullIData(oldp+685,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[2]),32);
    bufp->fullIData(oldp+686,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_out3[3]),32);
    bufp->fullBit(oldp+687,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__key_done_next));
    bufp->fullIData(oldp+688,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[0]),32);
    bufp->fullIData(oldp+689,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[1]),32);
    bufp->fullIData(oldp+690,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[2]),32);
    bufp->fullIData(oldp+691,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[3]),32);
    bufp->fullIData(oldp+692,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[0]),32);
    bufp->fullIData(oldp+693,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[1]),32);
    bufp->fullIData(oldp+694,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[2]),32);
    bufp->fullIData(oldp+695,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[3]),32);
    bufp->fullIData(oldp+696,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[0]),32);
    bufp->fullIData(oldp+697,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[1]),32);
    bufp->fullIData(oldp+698,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[2]),32);
    bufp->fullIData(oldp+699,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[3]),32);
    bufp->fullIData(oldp+700,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[0]),32);
    bufp->fullIData(oldp+701,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[1]),32);
    bufp->fullIData(oldp+702,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[2]),32);
    bufp->fullIData(oldp+703,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[3]),32);
    bufp->fullIData(oldp+704,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+705,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullIData(oldp+706,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+707,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
    bufp->fullIData(oldp+708,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k),32);
    bufp->fullIData(oldp+709,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+710,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
    bufp->fullIData(oldp+711,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [0U][0U]),32);
    bufp->fullIData(oldp+712,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [0U][1U]),32);
    bufp->fullIData(oldp+713,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [0U][2U]),32);
    bufp->fullIData(oldp+714,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [0U][3U]),32);
    bufp->fullIData(oldp+715,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [1U][0U]),32);
    bufp->fullIData(oldp+716,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [1U][1U]),32);
    bufp->fullIData(oldp+717,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [1U][2U]),32);
    bufp->fullIData(oldp+718,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [1U][3U]),32);
    bufp->fullIData(oldp+719,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [2U][0U]),32);
    bufp->fullIData(oldp+720,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [2U][1U]),32);
    bufp->fullIData(oldp+721,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [2U][2U]),32);
    bufp->fullIData(oldp+722,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [2U][3U]),32);
    bufp->fullIData(oldp+723,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [3U][0U]),32);
    bufp->fullIData(oldp+724,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [3U][1U]),32);
    bufp->fullIData(oldp+725,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [3U][2U]),32);
    bufp->fullIData(oldp+726,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [3U][3U]),32);
    bufp->fullIData(oldp+727,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[0]),32);
    bufp->fullIData(oldp+728,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[1]),32);
    bufp->fullIData(oldp+729,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[2]),32);
    bufp->fullIData(oldp+730,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[3]),32);
    bufp->fullIData(oldp+731,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+732,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+733,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+734,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+735,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
    bufp->fullIData(oldp+736,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
    bufp->fullIData(oldp+737,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
    bufp->fullIData(oldp+738,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
    bufp->fullIData(oldp+739,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+740,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+741,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+742,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+743,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
    bufp->fullIData(oldp+744,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
    bufp->fullIData(oldp+745,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
    bufp->fullIData(oldp+746,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
    bufp->fullIData(oldp+747,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+748,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+749,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+750,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+751,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[0]),32);
    bufp->fullIData(oldp+752,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[1]),32);
    bufp->fullIData(oldp+753,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[2]),32);
    bufp->fullIData(oldp+754,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[3]),32);
    bufp->fullIData(oldp+755,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+756,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+757,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+758,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3]),32);
    bufp->fullBit(oldp+759,(vlSelf->clock));
    bufp->fullBit(oldp+760,(vlSelf->reset));
    bufp->fullBit(oldp+761,(vlSelf->io_req_ready));
    bufp->fullBit(oldp+762,(vlSelf->io_req_valid));
    bufp->fullIData(oldp+763,(vlSelf->io_req_bits_addrRequest),32);
    bufp->fullIData(oldp+764,(vlSelf->io_req_bits_dataRequest),32);
    bufp->fullCData(oldp+765,(vlSelf->io_req_bits_activeByteLane),4);
    bufp->fullBit(oldp+766,(vlSelf->io_req_bits_isWrite));
    bufp->fullBit(oldp+767,(vlSelf->io_rsp_ready));
    bufp->fullBit(oldp+768,(vlSelf->io_rsp_valid));
    bufp->fullIData(oldp+769,(vlSelf->io_rsp_bits_dataResponse),32);
    bufp->fullBit(oldp+770,(vlSelf->io_rsp_bits_error));
    bufp->fullBit(oldp+771,(vlSelf->io_enable));
    bufp->fullBit(oldp+772,(vlSelf->io_key_enable));
    bufp->fullBit(oldp+773,(vlSelf->io_encryption_enable));
    bufp->fullBit(oldp+774,(vlSelf->io_decryption_enable));
    bufp->fullBit(oldp+775,(vlSelf->io_cio_babykyber_intr_key));
    bufp->fullBit(oldp+776,(vlSelf->io_cio_babykyber_intr_encrypt));
    bufp->fullBit(oldp+777,(vlSelf->io_cio_babykyber_intr_decrypt));
    bufp->fullBit(oldp+778,(1U));
    bufp->fullIData(oldp+779,(0x11U),32);
    bufp->fullIData(oldp+780,(4U),32);
    bufp->fullIData(oldp+781,(1U),32);
    bufp->fullIData(oldp+782,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__temp[0]),32);
    bufp->fullIData(oldp+783,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__temp[1]),32);
    bufp->fullIData(oldp+784,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__temp[2]),32);
    bufp->fullIData(oldp+785,(vlSelf->BabyKyberHarness__DOT__babykyber__DOT__bkyber__DOT__encryption__DOT__temp[3]),32);
    bufp->fullIData(oldp+786,(2U),32);
}
