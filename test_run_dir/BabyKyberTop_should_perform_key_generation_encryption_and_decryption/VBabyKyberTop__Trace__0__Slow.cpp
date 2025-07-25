// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VBabyKyberTop__Syms.h"


VL_ATTR_COLD void VBabyKyberTop___024root__trace_init_sub__TOP__0(VBabyKyberTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+738,"clock", false,-1);
    tracep->declBit(c+739,"reset", false,-1);
    tracep->declBit(c+740,"io_req_ready", false,-1);
    tracep->declBit(c+741,"io_req_valid", false,-1);
    tracep->declBus(c+742,"io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+743,"io_req_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+744,"io_req_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+745,"io_req_bits_isWrite", false,-1);
    tracep->declBit(c+746,"io_rsp_ready", false,-1);
    tracep->declBit(c+747,"io_rsp_valid", false,-1);
    tracep->declBus(c+748,"io_rsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+749,"io_enable", false,-1);
    tracep->declBit(c+750,"io_key_enable", false,-1);
    tracep->declBit(c+751,"io_encryption_enable", false,-1);
    tracep->declBit(c+752,"io_decryption_enable", false,-1);
    tracep->declBit(c+753,"io_key_done", false,-1);
    tracep->declBit(c+754,"io_encryption_done", false,-1);
    tracep->declBit(c+755,"io_decryption_done", false,-1);
    tracep->pushNamePrefix("BabyKyberTop ");
    tracep->declBit(c+738,"clock", false,-1);
    tracep->declBit(c+739,"reset", false,-1);
    tracep->declBit(c+740,"io_req_ready", false,-1);
    tracep->declBit(c+741,"io_req_valid", false,-1);
    tracep->declBus(c+742,"io_req_bits_addrRequest", false,-1, 31,0);
    tracep->declBus(c+743,"io_req_bits_dataRequest", false,-1, 31,0);
    tracep->declBus(c+744,"io_req_bits_activeByteLane", false,-1, 3,0);
    tracep->declBit(c+745,"io_req_bits_isWrite", false,-1);
    tracep->declBit(c+746,"io_rsp_ready", false,-1);
    tracep->declBit(c+747,"io_rsp_valid", false,-1);
    tracep->declBus(c+748,"io_rsp_bits_dataResponse", false,-1, 31,0);
    tracep->declBit(c+749,"io_enable", false,-1);
    tracep->declBit(c+750,"io_key_enable", false,-1);
    tracep->declBit(c+751,"io_encryption_enable", false,-1);
    tracep->declBit(c+752,"io_decryption_enable", false,-1);
    tracep->declBit(c+753,"io_key_done", false,-1);
    tracep->declBit(c+754,"io_encryption_done", false,-1);
    tracep->declBit(c+755,"io_decryption_done", false,-1);
    tracep->declBit(c+738,"bkyber_clk", false,-1);
    tracep->declBit(c+1,"bkyber_rst_n", false,-1);
    tracep->declBit(c+749,"bkyber_enable", false,-1);
    tracep->declBit(c+750,"bkyber_key_enable", false,-1);
    tracep->declBit(c+751,"bkyber_encryption_enable", false,-1);
    tracep->declBit(c+752,"bkyber_decryption_enable", false,-1);
    tracep->declBus(c+743,"bkyber_data_Req", false,-1, 31,0);
    tracep->declBus(c+742,"bkyber_addr_Req", false,-1, 31,0);
    tracep->declBit(c+2,"bkyber_wen_Req", false,-1);
    tracep->declBus(c+756,"bkyber_bytelane_Req", false,-1, 7,0);
    tracep->declBus(c+125,"bkyber_data_Resp", false,-1, 31,0);
    tracep->declBit(c+423,"bkyber_key_done", false,-1);
    tracep->declBit(c+126,"bkyber_encryption_done", false,-1);
    tracep->declBit(c+424,"bkyber_decryption_done", false,-1);
    tracep->declBit(c+127,"validReg", false,-1);
    tracep->pushNamePrefix("bkyber ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+749,"enable", false,-1);
    tracep->declBit(c+750,"key_enable", false,-1);
    tracep->declBit(c+751,"encryption_enable", false,-1);
    tracep->declBit(c+752,"decryption_enable", false,-1);
    tracep->declBus(c+743,"data_Req", false,-1, 31,0);
    tracep->declBus(c+742,"addr_Req", false,-1, 31,0);
    tracep->declBit(c+2,"wen_Req", false,-1);
    tracep->declBit(c+423,"key_done", false,-1);
    tracep->declBit(c+126,"encryption_done", false,-1);
    tracep->declBit(c+424,"decryption_done", false,-1);
    tracep->declBus(c+756,"bytelane_Req", false,-1, 7,0);
    tracep->declBus(c+125,"data_Resp", false,-1, 31,0);
    tracep->pushNamePrefix("secretkey");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+128,"[0]", false,-1, 31,0);
    tracep->declBus(c+129,"[1]", false,-1, 31,0);
    tracep->declBus(c+130,"[2]", false,-1, 31,0);
    tracep->declBus(c+131,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+132,"[0]", false,-1, 31,0);
    tracep->declBus(c+133,"[1]", false,-1, 31,0);
    tracep->declBus(c+134,"[2]", false,-1, 31,0);
    tracep->declBus(c+135,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+101,"[0]", false,-1, 31,0);
    tracep->declBus(c+102,"[1]", false,-1, 31,0);
    tracep->declBus(c+103,"[2]", false,-1, 31,0);
    tracep->declBus(c+104,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+105,"[0]", false,-1, 31,0);
    tracep->declBus(c+106,"[1]", false,-1, 31,0);
    tracep->declBus(c+107,"[2]", false,-1, 31,0);
    tracep->declBus(c+108,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("public_key");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+391,"[0]", false,-1, 31,0);
    tracep->declBus(c+392,"[1]", false,-1, 31,0);
    tracep->declBus(c+393,"[2]", false,-1, 31,0);
    tracep->declBus(c+394,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+395,"[0]", false,-1, 31,0);
    tracep->declBus(c+396,"[1]", false,-1, 31,0);
    tracep->declBus(c+397,"[2]", false,-1, 31,0);
    tracep->declBus(c+398,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+399,"[0]", false,-1, 31,0);
    tracep->declBus(c+400,"[1]", false,-1, 31,0);
    tracep->declBus(c+401,"[2]", false,-1, 31,0);
    tracep->declBus(c+402,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+403,"[0]", false,-1, 31,0);
    tracep->declBus(c+404,"[1]", false,-1, 31,0);
    tracep->declBus(c+405,"[2]", false,-1, 31,0);
    tracep->declBus(c+406,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+407,"[0]", false,-1, 31,0);
    tracep->declBus(c+408,"[1]", false,-1, 31,0);
    tracep->declBus(c+409,"[2]", false,-1, 31,0);
    tracep->declBus(c+410,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+411,"[0]", false,-1, 31,0);
    tracep->declBus(c+412,"[1]", false,-1, 31,0);
    tracep->declBus(c+413,"[2]", false,-1, 31,0);
    tracep->declBus(c+414,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+415,"[0]", false,-1, 31,0);
    tracep->declBus(c+416,"[1]", false,-1, 31,0);
    tracep->declBus(c+417,"[2]", false,-1, 31,0);
    tracep->declBus(c+418,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+419,"[0]", false,-1, 31,0);
    tracep->declBus(c+420,"[1]", false,-1, 31,0);
    tracep->declBus(c+421,"[2]", false,-1, 31,0);
    tracep->declBus(c+422,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("A_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+136,"[0]", false,-1, 31,0);
    tracep->declBus(c+137,"[1]", false,-1, 31,0);
    tracep->declBus(c+138,"[2]", false,-1, 31,0);
    tracep->declBus(c+139,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+140,"[0]", false,-1, 31,0);
    tracep->declBus(c+141,"[1]", false,-1, 31,0);
    tracep->declBus(c+142,"[2]", false,-1, 31,0);
    tracep->declBus(c+143,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+144,"[0]", false,-1, 31,0);
    tracep->declBus(c+145,"[1]", false,-1, 31,0);
    tracep->declBus(c+146,"[2]", false,-1, 31,0);
    tracep->declBus(c+147,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+148,"[0]", false,-1, 31,0);
    tracep->declBus(c+149,"[1]", false,-1, 31,0);
    tracep->declBus(c+150,"[2]", false,-1, 31,0);
    tracep->declBus(c+151,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("s_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+152,"[0]", false,-1, 31,0);
    tracep->declBus(c+153,"[1]", false,-1, 31,0);
    tracep->declBus(c+154,"[2]", false,-1, 31,0);
    tracep->declBus(c+155,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+156,"[0]", false,-1, 31,0);
    tracep->declBus(c+157,"[1]", false,-1, 31,0);
    tracep->declBus(c+158,"[2]", false,-1, 31,0);
    tracep->declBus(c+159,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e_reg");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+160,"[0]", false,-1, 31,0);
    tracep->declBus(c+161,"[1]", false,-1, 31,0);
    tracep->declBus(c+162,"[2]", false,-1, 31,0);
    tracep->declBus(c+163,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+164,"[0]", false,-1, 31,0);
    tracep->declBus(c+165,"[1]", false,-1, 31,0);
    tracep->declBus(c+166,"[2]", false,-1, 31,0);
    tracep->declBus(c+167,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ciphertext");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+109,"[0]", false,-1, 31,0);
    tracep->declBus(c+110,"[1]", false,-1, 31,0);
    tracep->declBus(c+111,"[2]", false,-1, 31,0);
    tracep->declBus(c+112,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+113,"[0]", false,-1, 31,0);
    tracep->declBus(c+114,"[1]", false,-1, 31,0);
    tracep->declBus(c+115,"[2]", false,-1, 31,0);
    tracep->declBus(c+116,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+117,"[0]", false,-1, 31,0);
    tracep->declBus(c+118,"[1]", false,-1, 31,0);
    tracep->declBus(c+119,"[2]", false,-1, 31,0);
    tracep->declBus(c+120,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+121,"[0]", false,-1, 31,0);
    tracep->declBus(c+122,"[1]", false,-1, 31,0);
    tracep->declBus(c+123,"[2]", false,-1, 31,0);
    tracep->declBus(c+124,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("r");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+168,"[0]", false,-1, 31,0);
    tracep->declBus(c+169,"[1]", false,-1, 31,0);
    tracep->declBus(c+170,"[2]", false,-1, 31,0);
    tracep->declBus(c+171,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+172,"[0]", false,-1, 31,0);
    tracep->declBus(c+173,"[1]", false,-1, 31,0);
    tracep->declBus(c+174,"[2]", false,-1, 31,0);
    tracep->declBus(c+175,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e1");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+176,"[0]", false,-1, 31,0);
    tracep->declBus(c+177,"[1]", false,-1, 31,0);
    tracep->declBus(c+178,"[2]", false,-1, 31,0);
    tracep->declBus(c+179,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+180,"[0]", false,-1, 31,0);
    tracep->declBus(c+181,"[1]", false,-1, 31,0);
    tracep->declBus(c+182,"[2]", false,-1, 31,0);
    tracep->declBus(c+183,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+184+i*1,"e2", true,(i+0), 31,0);
    }
    tracep->declBus(c+3,"decimal_value", false,-1, 31,0);
    tracep->declBus(c+4,"m_b", false,-1, 3,0);
    tracep->declBus(c+188,"A_t000", false,-1, 31,0);
    tracep->declBus(c+189,"A_t001", false,-1, 31,0);
    tracep->declBus(c+190,"A_t002", false,-1, 31,0);
    tracep->declBus(c+191,"A_t003", false,-1, 31,0);
    tracep->declBus(c+192,"A_t010", false,-1, 31,0);
    tracep->declBus(c+193,"A_t011", false,-1, 31,0);
    tracep->declBus(c+194,"A_t012", false,-1, 31,0);
    tracep->declBus(c+195,"A_t013", false,-1, 31,0);
    tracep->declBus(c+196,"A_t020", false,-1, 31,0);
    tracep->declBus(c+197,"A_t021", false,-1, 31,0);
    tracep->declBus(c+198,"A_t022", false,-1, 31,0);
    tracep->declBus(c+199,"A_t023", false,-1, 31,0);
    tracep->declBus(c+200,"A_t030", false,-1, 31,0);
    tracep->declBus(c+201,"A_t031", false,-1, 31,0);
    tracep->declBus(c+202,"A_t032", false,-1, 31,0);
    tracep->declBus(c+203,"A_t033", false,-1, 31,0);
    tracep->declBus(c+204,"s_00", false,-1, 31,0);
    tracep->declBus(c+205,"s_01", false,-1, 31,0);
    tracep->declBus(c+206,"s_02", false,-1, 31,0);
    tracep->declBus(c+207,"s_03", false,-1, 31,0);
    tracep->declBus(c+208,"s_10", false,-1, 31,0);
    tracep->declBus(c+209,"s_11", false,-1, 31,0);
    tracep->declBus(c+210,"s_12", false,-1, 31,0);
    tracep->declBus(c+211,"s_13", false,-1, 31,0);
    tracep->declBus(c+212,"e_00", false,-1, 31,0);
    tracep->declBus(c+213,"e_01", false,-1, 31,0);
    tracep->declBus(c+214,"e_02", false,-1, 31,0);
    tracep->declBus(c+215,"e_03", false,-1, 31,0);
    tracep->declBus(c+216,"e_10", false,-1, 31,0);
    tracep->declBus(c+217,"e_11", false,-1, 31,0);
    tracep->declBus(c+218,"e_12", false,-1, 31,0);
    tracep->declBus(c+219,"e_13", false,-1, 31,0);
    tracep->declBus(c+220,"message", false,-1, 31,0);
    tracep->declBus(c+221,"public_key000", false,-1, 31,0);
    tracep->declBus(c+222,"public_key001", false,-1, 31,0);
    tracep->declBus(c+223,"public_key002", false,-1, 31,0);
    tracep->declBus(c+224,"public_key003", false,-1, 31,0);
    tracep->declBus(c+225,"public_key010", false,-1, 31,0);
    tracep->declBus(c+226,"public_key011", false,-1, 31,0);
    tracep->declBus(c+227,"public_key012", false,-1, 31,0);
    tracep->declBus(c+228,"public_key013", false,-1, 31,0);
    tracep->declBus(c+229,"public_key020", false,-1, 31,0);
    tracep->declBus(c+230,"public_key021", false,-1, 31,0);
    tracep->declBus(c+231,"public_key022", false,-1, 31,0);
    tracep->declBus(c+232,"public_key023", false,-1, 31,0);
    tracep->declBus(c+233,"public_key030", false,-1, 31,0);
    tracep->declBus(c+234,"public_key031", false,-1, 31,0);
    tracep->declBus(c+235,"public_key032", false,-1, 31,0);
    tracep->declBus(c+236,"public_key033", false,-1, 31,0);
    tracep->declBus(c+237,"public_key100", false,-1, 31,0);
    tracep->declBus(c+238,"public_key101", false,-1, 31,0);
    tracep->declBus(c+239,"public_key102", false,-1, 31,0);
    tracep->declBus(c+240,"public_key103", false,-1, 31,0);
    tracep->declBus(c+241,"public_key110", false,-1, 31,0);
    tracep->declBus(c+242,"public_key111", false,-1, 31,0);
    tracep->declBus(c+243,"public_key112", false,-1, 31,0);
    tracep->declBus(c+244,"public_key113", false,-1, 31,0);
    tracep->declBus(c+245,"r_00", false,-1, 31,0);
    tracep->declBus(c+246,"r_01", false,-1, 31,0);
    tracep->declBus(c+247,"r_02", false,-1, 31,0);
    tracep->declBus(c+248,"r_03", false,-1, 31,0);
    tracep->declBus(c+249,"r_10", false,-1, 31,0);
    tracep->declBus(c+250,"r_11", false,-1, 31,0);
    tracep->declBus(c+251,"r_12", false,-1, 31,0);
    tracep->declBus(c+252,"r_13", false,-1, 31,0);
    tracep->declBus(c+253,"e1_00", false,-1, 31,0);
    tracep->declBus(c+254,"e1_01", false,-1, 31,0);
    tracep->declBus(c+255,"e1_02", false,-1, 31,0);
    tracep->declBus(c+256,"e1_03", false,-1, 31,0);
    tracep->declBus(c+257,"e1_10", false,-1, 31,0);
    tracep->declBus(c+258,"e1_11", false,-1, 31,0);
    tracep->declBus(c+259,"e1_12", false,-1, 31,0);
    tracep->declBus(c+260,"e1_13", false,-1, 31,0);
    tracep->declBus(c+261,"e2_0", false,-1, 31,0);
    tracep->declBus(c+262,"e2_1", false,-1, 31,0);
    tracep->declBus(c+263,"e2_2", false,-1, 31,0);
    tracep->declBus(c+264,"e2_3", false,-1, 31,0);
    tracep->declBus(c+265,"ciphertext000", false,-1, 31,0);
    tracep->declBus(c+266,"ciphertext001", false,-1, 31,0);
    tracep->declBus(c+267,"ciphertext002", false,-1, 31,0);
    tracep->declBus(c+268,"ciphertext003", false,-1, 31,0);
    tracep->declBus(c+269,"ciphertext010", false,-1, 31,0);
    tracep->declBus(c+270,"ciphertext011", false,-1, 31,0);
    tracep->declBus(c+271,"ciphertext012", false,-1, 31,0);
    tracep->declBus(c+272,"ciphertext013", false,-1, 31,0);
    tracep->declBus(c+273,"ciphertext100", false,-1, 31,0);
    tracep->declBus(c+274,"ciphertext101", false,-1, 31,0);
    tracep->declBus(c+275,"ciphertext102", false,-1, 31,0);
    tracep->declBus(c+276,"ciphertext103", false,-1, 31,0);
    tracep->pushNamePrefix("decryption ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+752,"decryption_enable", false,-1);
    tracep->pushNamePrefix("secret_key");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+277,"[0]", false,-1, 31,0);
    tracep->declBus(c+278,"[1]", false,-1, 31,0);
    tracep->declBus(c+279,"[2]", false,-1, 31,0);
    tracep->declBus(c+280,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+281,"[0]", false,-1, 31,0);
    tracep->declBus(c+282,"[1]", false,-1, 31,0);
    tracep->declBus(c+283,"[2]", false,-1, 31,0);
    tracep->declBus(c+284,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ciphertext");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+5,"[0]", false,-1, 31,0);
    tracep->declBus(c+6,"[1]", false,-1, 31,0);
    tracep->declBus(c+7,"[2]", false,-1, 31,0);
    tracep->declBus(c+8,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+9,"[0]", false,-1, 31,0);
    tracep->declBus(c+10,"[1]", false,-1, 31,0);
    tracep->declBus(c+11,"[2]", false,-1, 31,0);
    tracep->declBus(c+12,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+13,"[0]", false,-1, 31,0);
    tracep->declBus(c+14,"[1]", false,-1, 31,0);
    tracep->declBus(c+15,"[2]", false,-1, 31,0);
    tracep->declBus(c+16,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+17,"[0]", false,-1, 31,0);
    tracep->declBus(c+18,"[1]", false,-1, 31,0);
    tracep->declBus(c+19,"[2]", false,-1, 31,0);
    tracep->declBus(c+20,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBus(c+4,"m_b", false,-1, 3,0);
    tracep->declBit(c+424,"decryption_done", false,-1);
    tracep->declBus(c+3,"decimal_value", false,-1, 31,0);
    tracep->declBus(c+757,"Q", false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+425+i*1,"poly_out0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+429+i*1,"poly_out1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+21+i*1,"temp_m_n", true,(i+0), 31,0);
    }
    tracep->declBit(c+433,"decryption_done_next", false,-1);
    tracep->pushNamePrefix("poly_mult1 ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+752,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+25+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+285+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+434+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+29+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult2 ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+752,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+33+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+289+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+438+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+37+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("encryption ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+751,"encryption_enable", false,-1);
    tracep->declBus(c+220,"message", false,-1, 31,0);
    tracep->pushNamePrefix("r");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+293,"[0]", false,-1, 31,0);
    tracep->declBus(c+294,"[1]", false,-1, 31,0);
    tracep->declBus(c+295,"[2]", false,-1, 31,0);
    tracep->declBus(c+296,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+297,"[0]", false,-1, 31,0);
    tracep->declBus(c+298,"[1]", false,-1, 31,0);
    tracep->declBus(c+299,"[2]", false,-1, 31,0);
    tracep->declBus(c+300,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e1");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+301,"[0]", false,-1, 31,0);
    tracep->declBus(c+302,"[1]", false,-1, 31,0);
    tracep->declBus(c+303,"[2]", false,-1, 31,0);
    tracep->declBus(c+304,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+305,"[0]", false,-1, 31,0);
    tracep->declBus(c+306,"[1]", false,-1, 31,0);
    tracep->declBus(c+307,"[2]", false,-1, 31,0);
    tracep->declBus(c+308,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+309+i*1,"e2", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("combined_output");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+442,"[0]", false,-1, 31,0);
    tracep->declBus(c+443,"[1]", false,-1, 31,0);
    tracep->declBus(c+444,"[2]", false,-1, 31,0);
    tracep->declBus(c+445,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+446,"[0]", false,-1, 31,0);
    tracep->declBus(c+447,"[1]", false,-1, 31,0);
    tracep->declBus(c+448,"[2]", false,-1, 31,0);
    tracep->declBus(c+449,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+450,"[0]", false,-1, 31,0);
    tracep->declBus(c+451,"[1]", false,-1, 31,0);
    tracep->declBus(c+452,"[2]", false,-1, 31,0);
    tracep->declBus(c+453,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+454,"[0]", false,-1, 31,0);
    tracep->declBus(c+455,"[1]", false,-1, 31,0);
    tracep->declBus(c+456,"[2]", false,-1, 31,0);
    tracep->declBus(c+457,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+458,"[0]", false,-1, 31,0);
    tracep->declBus(c+459,"[1]", false,-1, 31,0);
    tracep->declBus(c+460,"[2]", false,-1, 31,0);
    tracep->declBus(c+461,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+462,"[0]", false,-1, 31,0);
    tracep->declBus(c+463,"[1]", false,-1, 31,0);
    tracep->declBus(c+464,"[2]", false,-1, 31,0);
    tracep->declBus(c+465,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+466,"[0]", false,-1, 31,0);
    tracep->declBus(c+467,"[1]", false,-1, 31,0);
    tracep->declBus(c+468,"[2]", false,-1, 31,0);
    tracep->declBus(c+469,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+470,"[0]", false,-1, 31,0);
    tracep->declBus(c+471,"[1]", false,-1, 31,0);
    tracep->declBus(c+472,"[2]", false,-1, 31,0);
    tracep->declBus(c+473,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ciphertext");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+41,"[0]", false,-1, 31,0);
    tracep->declBus(c+42,"[1]", false,-1, 31,0);
    tracep->declBus(c+43,"[2]", false,-1, 31,0);
    tracep->declBus(c+44,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+45,"[0]", false,-1, 31,0);
    tracep->declBus(c+46,"[1]", false,-1, 31,0);
    tracep->declBus(c+47,"[2]", false,-1, 31,0);
    tracep->declBus(c+48,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+49,"[0]", false,-1, 31,0);
    tracep->declBus(c+50,"[1]", false,-1, 31,0);
    tracep->declBus(c+51,"[2]", false,-1, 31,0);
    tracep->declBus(c+52,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+53,"[0]", false,-1, 31,0);
    tracep->declBus(c+54,"[1]", false,-1, 31,0);
    tracep->declBus(c+55,"[2]", false,-1, 31,0);
    tracep->declBus(c+56,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+126,"encryption_done", false,-1);
    tracep->pushNamePrefix("transposed_matrix");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+474,"[0]", false,-1, 31,0);
    tracep->declBus(c+475,"[1]", false,-1, 31,0);
    tracep->declBus(c+476,"[2]", false,-1, 31,0);
    tracep->declBus(c+477,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+478,"[0]", false,-1, 31,0);
    tracep->declBus(c+479,"[1]", false,-1, 31,0);
    tracep->declBus(c+480,"[2]", false,-1, 31,0);
    tracep->declBus(c+481,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+482,"[0]", false,-1, 31,0);
    tracep->declBus(c+483,"[1]", false,-1, 31,0);
    tracep->declBus(c+484,"[2]", false,-1, 31,0);
    tracep->declBus(c+485,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+486,"[0]", false,-1, 31,0);
    tracep->declBus(c+487,"[1]", false,-1, 31,0);
    tracep->declBus(c+488,"[2]", false,-1, 31,0);
    tracep->declBus(c+489,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+490+i*1,"poly_out0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+494+i*1,"poly_out1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+498+i*1,"poly_out2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+502+i*1,"poly_out3", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+506+i*1,"poly_out4", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+510+i*1,"poly_out5", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+57+i*1,"added", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+61+i*1,"added1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+65+i*1,"added2", true,(i+0), 31,0);
    }
    tracep->declBus(c+313,"coefficients", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+314+i*1,"coefficients_scaled", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("u");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+69,"[0]", false,-1, 31,0);
    tracep->declBus(c+70,"[1]", false,-1, 31,0);
    tracep->declBus(c+71,"[2]", false,-1, 31,0);
    tracep->declBus(c+72,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+73,"[0]", false,-1, 31,0);
    tracep->declBus(c+74,"[1]", false,-1, 31,0);
    tracep->declBus(c+75,"[2]", false,-1, 31,0);
    tracep->declBus(c+76,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+77+i*1,"v", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+760+i*1,"temp", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("poly_mult_inst ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+751,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+514+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+318+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+518+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+522+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst1 ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+751,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+526+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+322+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+530+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+534+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst2 ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+751,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+538+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+326+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+542+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+546+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst3 ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+751,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+550+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+330+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+554+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+558+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst4 ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+751,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+562+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+334+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+566+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+570+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult_inst5 ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+751,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+574+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+338+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+578+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+582+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("transpose_inst ");
    tracep->pushNamePrefix("matrix_in");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+586,"[0]", false,-1, 31,0);
    tracep->declBus(c+587,"[1]", false,-1, 31,0);
    tracep->declBus(c+588,"[2]", false,-1, 31,0);
    tracep->declBus(c+589,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+590,"[0]", false,-1, 31,0);
    tracep->declBus(c+591,"[1]", false,-1, 31,0);
    tracep->declBus(c+592,"[2]", false,-1, 31,0);
    tracep->declBus(c+593,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+594,"[0]", false,-1, 31,0);
    tracep->declBus(c+595,"[1]", false,-1, 31,0);
    tracep->declBus(c+596,"[2]", false,-1, 31,0);
    tracep->declBus(c+597,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+598,"[0]", false,-1, 31,0);
    tracep->declBus(c+599,"[1]", false,-1, 31,0);
    tracep->declBus(c+600,"[2]", false,-1, 31,0);
    tracep->declBus(c+601,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("matrix_out");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+602,"[0]", false,-1, 31,0);
    tracep->declBus(c+603,"[1]", false,-1, 31,0);
    tracep->declBus(c+604,"[2]", false,-1, 31,0);
    tracep->declBus(c+605,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+606,"[0]", false,-1, 31,0);
    tracep->declBus(c+607,"[1]", false,-1, 31,0);
    tracep->declBus(c+608,"[2]", false,-1, 31,0);
    tracep->declBus(c+609,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+610,"[0]", false,-1, 31,0);
    tracep->declBus(c+611,"[1]", false,-1, 31,0);
    tracep->declBus(c+612,"[2]", false,-1, 31,0);
    tracep->declBus(c+613,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+614,"[0]", false,-1, 31,0);
    tracep->declBus(c+615,"[1]", false,-1, 31,0);
    tracep->declBus(c+616,"[2]", false,-1, 31,0);
    tracep->declBus(c+617,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+342,"j", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+343,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+81,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+82,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+764,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+758,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("keygen ");
    tracep->pushNamePrefix("A");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+690,"[0]", false,-1, 31,0);
    tracep->declBus(c+691,"[1]", false,-1, 31,0);
    tracep->declBus(c+692,"[2]", false,-1, 31,0);
    tracep->declBus(c+693,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+694,"[0]", false,-1, 31,0);
    tracep->declBus(c+695,"[1]", false,-1, 31,0);
    tracep->declBus(c+696,"[2]", false,-1, 31,0);
    tracep->declBus(c+697,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+698,"[0]", false,-1, 31,0);
    tracep->declBus(c+699,"[1]", false,-1, 31,0);
    tracep->declBus(c+700,"[2]", false,-1, 31,0);
    tracep->declBus(c+701,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+702,"[0]", false,-1, 31,0);
    tracep->declBus(c+703,"[1]", false,-1, 31,0);
    tracep->declBus(c+704,"[2]", false,-1, 31,0);
    tracep->declBus(c+705,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("e");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+344,"[0]", false,-1, 31,0);
    tracep->declBus(c+345,"[1]", false,-1, 31,0);
    tracep->declBus(c+346,"[2]", false,-1, 31,0);
    tracep->declBus(c+347,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+348,"[0]", false,-1, 31,0);
    tracep->declBus(c+349,"[1]", false,-1, 31,0);
    tracep->declBus(c+350,"[2]", false,-1, 31,0);
    tracep->declBus(c+351,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("secret_key");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+352,"[0]", false,-1, 31,0);
    tracep->declBus(c+353,"[1]", false,-1, 31,0);
    tracep->declBus(c+354,"[2]", false,-1, 31,0);
    tracep->declBus(c+355,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+356,"[0]", false,-1, 31,0);
    tracep->declBus(c+357,"[1]", false,-1, 31,0);
    tracep->declBus(c+358,"[2]", false,-1, 31,0);
    tracep->declBus(c+359,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("secretkey");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+360,"[0]", false,-1, 31,0);
    tracep->declBus(c+361,"[1]", false,-1, 31,0);
    tracep->declBus(c+362,"[2]", false,-1, 31,0);
    tracep->declBus(c+363,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+364,"[0]", false,-1, 31,0);
    tracep->declBus(c+365,"[1]", false,-1, 31,0);
    tracep->declBus(c+366,"[2]", false,-1, 31,0);
    tracep->declBus(c+367,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("result");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+83,"[0]", false,-1, 31,0);
    tracep->declBus(c+84,"[1]", false,-1, 31,0);
    tracep->declBus(c+85,"[2]", false,-1, 31,0);
    tracep->declBus(c+86,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+87,"[0]", false,-1, 31,0);
    tracep->declBus(c+88,"[1]", false,-1, 31,0);
    tracep->declBus(c+89,"[2]", false,-1, 31,0);
    tracep->declBus(c+90,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("combined_output");
    tracep->pushNamePrefix("[0]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+618,"[0]", false,-1, 31,0);
    tracep->declBus(c+619,"[1]", false,-1, 31,0);
    tracep->declBus(c+620,"[2]", false,-1, 31,0);
    tracep->declBus(c+621,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+622,"[0]", false,-1, 31,0);
    tracep->declBus(c+623,"[1]", false,-1, 31,0);
    tracep->declBus(c+624,"[2]", false,-1, 31,0);
    tracep->declBus(c+625,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+626,"[0]", false,-1, 31,0);
    tracep->declBus(c+627,"[1]", false,-1, 31,0);
    tracep->declBus(c+628,"[2]", false,-1, 31,0);
    tracep->declBus(c+629,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+630,"[0]", false,-1, 31,0);
    tracep->declBus(c+631,"[1]", false,-1, 31,0);
    tracep->declBus(c+632,"[2]", false,-1, 31,0);
    tracep->declBus(c+633,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->pushNamePrefix("[0]");
    tracep->declBus(c+634,"[0]", false,-1, 31,0);
    tracep->declBus(c+635,"[1]", false,-1, 31,0);
    tracep->declBus(c+636,"[2]", false,-1, 31,0);
    tracep->declBus(c+637,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[1]");
    tracep->declBus(c+638,"[0]", false,-1, 31,0);
    tracep->declBus(c+639,"[1]", false,-1, 31,0);
    tracep->declBus(c+640,"[2]", false,-1, 31,0);
    tracep->declBus(c+641,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[2]");
    tracep->declBus(c+642,"[0]", false,-1, 31,0);
    tracep->declBus(c+643,"[1]", false,-1, 31,0);
    tracep->declBus(c+644,"[2]", false,-1, 31,0);
    tracep->declBus(c+645,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("[3]");
    tracep->declBus(c+646,"[0]", false,-1, 31,0);
    tracep->declBus(c+647,"[1]", false,-1, 31,0);
    tracep->declBus(c+648,"[2]", false,-1, 31,0);
    tracep->declBus(c+649,"[3]", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->popNamePrefix(1);
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+750,"key_enable", false,-1);
    tracep->declBit(c+423,"key_done", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+650+i*1,"poly_out0", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+654+i*1,"poly_out1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+658+i*1,"poly_out2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+662+i*1,"poly_out3", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+91+i*1,"added", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+95+i*1,"added1", true,(i+0), 31,0);
    }
    tracep->declBit(c+666,"key_done_next", false,-1);
    tracep->pushNamePrefix("poly_mult0 ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+750,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+706+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+368+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+667+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+710+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult1 ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+750,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+714+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+372+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+671+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+718+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult2 ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+750,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+722+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+376+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+675+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+726+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("poly_mult3 ");
    tracep->declBit(c+738,"clk", false,-1);
    tracep->declBit(c+1,"rst_n", false,-1);
    tracep->declBit(c+750,"enable", false,-1);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+730+i*1,"polynomial1", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+380+i*1,"polynomial2", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+679+i*1,"polynomial_out", true,(i+0), 31,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+734+i*1,"temp_result", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+759,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+758,"a", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+758,"b", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+758,"k", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+384,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+385,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk11 ");
    tracep->declBus(c+683,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk12 ");
    tracep->declBus(c+684,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+758,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+99,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+100,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+685,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+686,"j", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+687,"k", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk9 ");
    tracep->declBus(c+688,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk10 ");
    tracep->declBus(c+689,"j", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+386,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+387,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+388,"i", false,-1, 31,0);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+389,"j", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+390,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void VBabyKyberTop___024root__trace_init_top(VBabyKyberTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root__trace_init_top\n"); );
    // Body
    VBabyKyberTop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VBabyKyberTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBabyKyberTop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VBabyKyberTop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VBabyKyberTop___024root__trace_register(VBabyKyberTop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VBabyKyberTop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VBabyKyberTop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VBabyKyberTop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VBabyKyberTop___024root__trace_full_sub_0(VBabyKyberTop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VBabyKyberTop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root__trace_full_top_0\n"); );
    // Init
    VBabyKyberTop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VBabyKyberTop___024root*>(voidSelf);
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VBabyKyberTop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VBabyKyberTop___024root__trace_full_sub_0(VBabyKyberTop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VBabyKyberTop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VBabyKyberTop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->BabyKyberTop__DOT__bkyber_rst_n));
    bufp->fullBit(oldp+2,(vlSelf->BabyKyberTop__DOT__bkyber_wen_Req));
    bufp->fullIData(oldp+3,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decimal_value),32);
    bufp->fullCData(oldp+4,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__m_b),4);
    bufp->fullIData(oldp+5,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][0U]),32);
    bufp->fullIData(oldp+6,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][1U]),32);
    bufp->fullIData(oldp+7,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][2U]),32);
    bufp->fullIData(oldp+8,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                            [0U][0U][3U]),32);
    bufp->fullIData(oldp+9,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                            [0U][1U][0U]),32);
    bufp->fullIData(oldp+10,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [0U][1U][1U]),32);
    bufp->fullIData(oldp+11,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [0U][1U][2U]),32);
    bufp->fullIData(oldp+12,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [0U][1U][3U]),32);
    bufp->fullIData(oldp+13,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][0U]),32);
    bufp->fullIData(oldp+14,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][1U]),32);
    bufp->fullIData(oldp+15,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][2U]),32);
    bufp->fullIData(oldp+16,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][0U][3U]),32);
    bufp->fullIData(oldp+17,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][0U]),32);
    bufp->fullIData(oldp+18,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][1U]),32);
    bufp->fullIData(oldp+19,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][2U]),32);
    bufp->fullIData(oldp+20,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__ciphertext
                             [1U][1U][3U]),32);
    bufp->fullIData(oldp+21,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[0]),32);
    bufp->fullIData(oldp+22,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[1]),32);
    bufp->fullIData(oldp+23,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[2]),32);
    bufp->fullIData(oldp+24,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__temp_m_n[3]),32);
    bufp->fullIData(oldp+25,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
    bufp->fullIData(oldp+26,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
    bufp->fullIData(oldp+27,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
    bufp->fullIData(oldp+28,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
    bufp->fullIData(oldp+29,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+30,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+31,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+32,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+33,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
    bufp->fullIData(oldp+34,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
    bufp->fullIData(oldp+35,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
    bufp->fullIData(oldp+36,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
    bufp->fullIData(oldp+37,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+38,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+39,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+40,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_mult2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+41,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][0U]),32);
    bufp->fullIData(oldp+42,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][1U]),32);
    bufp->fullIData(oldp+43,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][2U]),32);
    bufp->fullIData(oldp+44,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][0U][3U]),32);
    bufp->fullIData(oldp+45,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][0U]),32);
    bufp->fullIData(oldp+46,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][1U]),32);
    bufp->fullIData(oldp+47,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][2U]),32);
    bufp->fullIData(oldp+48,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [0U][1U][3U]),32);
    bufp->fullIData(oldp+49,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][0U]),32);
    bufp->fullIData(oldp+50,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][1U]),32);
    bufp->fullIData(oldp+51,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][2U]),32);
    bufp->fullIData(oldp+52,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][0U][3U]),32);
    bufp->fullIData(oldp+53,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][0U]),32);
    bufp->fullIData(oldp+54,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][1U]),32);
    bufp->fullIData(oldp+55,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][2U]),32);
    bufp->fullIData(oldp+56,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__encryption__ciphertext
                             [1U][1U][3U]),32);
    bufp->fullIData(oldp+57,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[0]),32);
    bufp->fullIData(oldp+58,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[1]),32);
    bufp->fullIData(oldp+59,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[2]),32);
    bufp->fullIData(oldp+60,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added[3]),32);
    bufp->fullIData(oldp+61,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[0]),32);
    bufp->fullIData(oldp+62,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[1]),32);
    bufp->fullIData(oldp+63,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[2]),32);
    bufp->fullIData(oldp+64,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added1[3]),32);
    bufp->fullIData(oldp+65,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[0]),32);
    bufp->fullIData(oldp+66,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[1]),32);
    bufp->fullIData(oldp+67,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[2]),32);
    bufp->fullIData(oldp+68,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__added2[3]),32);
    bufp->fullIData(oldp+69,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][0U]),32);
    bufp->fullIData(oldp+70,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][1U]),32);
    bufp->fullIData(oldp+71,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][2U]),32);
    bufp->fullIData(oldp+72,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                             [0U][3U]),32);
    bufp->fullIData(oldp+73,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][0U]),32);
    bufp->fullIData(oldp+74,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][1U]),32);
    bufp->fullIData(oldp+75,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][2U]),32);
    bufp->fullIData(oldp+76,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__u
                             [1U][3U]),32);
    bufp->fullIData(oldp+77,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[0]),32);
    bufp->fullIData(oldp+78,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[1]),32);
    bufp->fullIData(oldp+79,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[2]),32);
    bufp->fullIData(oldp+80,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__v[3]),32);
    bufp->fullIData(oldp+81,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+82,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+83,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                             [0U][0U]),32);
    bufp->fullIData(oldp+84,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                             [0U][1U]),32);
    bufp->fullIData(oldp+85,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                             [0U][2U]),32);
    bufp->fullIData(oldp+86,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                             [0U][3U]),32);
    bufp->fullIData(oldp+87,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                             [1U][0U]),32);
    bufp->fullIData(oldp+88,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                             [1U][1U]),32);
    bufp->fullIData(oldp+89,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                             [1U][2U]),32);
    bufp->fullIData(oldp+90,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__result
                             [1U][3U]),32);
    bufp->fullIData(oldp+91,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[0]),32);
    bufp->fullIData(oldp+92,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[1]),32);
    bufp->fullIData(oldp+93,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[2]),32);
    bufp->fullIData(oldp+94,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added[3]),32);
    bufp->fullIData(oldp+95,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[0]),32);
    bufp->fullIData(oldp+96,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[1]),32);
    bufp->fullIData(oldp+97,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[2]),32);
    bufp->fullIData(oldp+98,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__added1[3]),32);
    bufp->fullIData(oldp+99,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__unnamedblk4__DOT__i),32);
    bufp->fullIData(oldp+100,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+101,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                              [0U][0U]),32);
    bufp->fullIData(oldp+102,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                              [0U][1U]),32);
    bufp->fullIData(oldp+103,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                              [0U][2U]),32);
    bufp->fullIData(oldp+104,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                              [0U][3U]),32);
    bufp->fullIData(oldp+105,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                              [1U][0U]),32);
    bufp->fullIData(oldp+106,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                              [1U][1U]),32);
    bufp->fullIData(oldp+107,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                              [1U][2U]),32);
    bufp->fullIData(oldp+108,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__result
                              [1U][3U]),32);
    bufp->fullIData(oldp+109,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+110,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+111,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+112,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+113,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+114,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+115,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+116,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+117,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+118,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+119,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+120,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+121,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+122,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+123,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+124,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+125,(vlSelf->BabyKyberTop__DOT__bkyber_data_Resp),32);
    bufp->fullBit(oldp+126,(vlSelf->BabyKyberTop__DOT__bkyber_encryption_done));
    bufp->fullBit(oldp+127,(vlSelf->BabyKyberTop__DOT__validReg));
    bufp->fullIData(oldp+128,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                              [0U][0U]),32);
    bufp->fullIData(oldp+129,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                              [0U][1U]),32);
    bufp->fullIData(oldp+130,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                              [0U][2U]),32);
    bufp->fullIData(oldp+131,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                              [0U][3U]),32);
    bufp->fullIData(oldp+132,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                              [1U][0U]),32);
    bufp->fullIData(oldp+133,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                              [1U][1U]),32);
    bufp->fullIData(oldp+134,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                              [1U][2U]),32);
    bufp->fullIData(oldp+135,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__secretkey
                              [1U][3U]),32);
    bufp->fullIData(oldp+136,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+137,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+138,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+139,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+140,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+141,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+142,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+143,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+144,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [2U][0U]),32);
    bufp->fullIData(oldp+145,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [2U][1U]),32);
    bufp->fullIData(oldp+146,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [2U][2U]),32);
    bufp->fullIData(oldp+147,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [2U][3U]),32);
    bufp->fullIData(oldp+148,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [3U][0U]),32);
    bufp->fullIData(oldp+149,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [3U][1U]),32);
    bufp->fullIData(oldp+150,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [3U][2U]),32);
    bufp->fullIData(oldp+151,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_reg
                              [3U][3U]),32);
    bufp->fullIData(oldp+152,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+153,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+154,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+155,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+156,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+157,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+158,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+159,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+160,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
                              [0U][0U]),32);
    bufp->fullIData(oldp+161,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
                              [0U][1U]),32);
    bufp->fullIData(oldp+162,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
                              [0U][2U]),32);
    bufp->fullIData(oldp+163,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
                              [0U][3U]),32);
    bufp->fullIData(oldp+164,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
                              [1U][0U]),32);
    bufp->fullIData(oldp+165,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
                              [1U][1U]),32);
    bufp->fullIData(oldp+166,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
                              [1U][2U]),32);
    bufp->fullIData(oldp+167,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_reg
                              [1U][3U]),32);
    bufp->fullIData(oldp+168,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
                              [0U][0U]),32);
    bufp->fullIData(oldp+169,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
                              [0U][1U]),32);
    bufp->fullIData(oldp+170,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
                              [0U][2U]),32);
    bufp->fullIData(oldp+171,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
                              [0U][3U]),32);
    bufp->fullIData(oldp+172,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
                              [1U][0U]),32);
    bufp->fullIData(oldp+173,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
                              [1U][1U]),32);
    bufp->fullIData(oldp+174,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
                              [1U][2U]),32);
    bufp->fullIData(oldp+175,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r
                              [1U][3U]),32);
    bufp->fullIData(oldp+176,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
                              [0U][0U]),32);
    bufp->fullIData(oldp+177,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
                              [0U][1U]),32);
    bufp->fullIData(oldp+178,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
                              [0U][2U]),32);
    bufp->fullIData(oldp+179,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
                              [0U][3U]),32);
    bufp->fullIData(oldp+180,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
                              [1U][0U]),32);
    bufp->fullIData(oldp+181,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
                              [1U][1U]),32);
    bufp->fullIData(oldp+182,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
                              [1U][2U]),32);
    bufp->fullIData(oldp+183,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1
                              [1U][3U]),32);
    bufp->fullIData(oldp+184,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[0]),32);
    bufp->fullIData(oldp+185,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[1]),32);
    bufp->fullIData(oldp+186,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[2]),32);
    bufp->fullIData(oldp+187,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2[3]),32);
    bufp->fullIData(oldp+188,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t000),32);
    bufp->fullIData(oldp+189,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t001),32);
    bufp->fullIData(oldp+190,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t002),32);
    bufp->fullIData(oldp+191,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t003),32);
    bufp->fullIData(oldp+192,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t010),32);
    bufp->fullIData(oldp+193,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t011),32);
    bufp->fullIData(oldp+194,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t012),32);
    bufp->fullIData(oldp+195,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t013),32);
    bufp->fullIData(oldp+196,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t020),32);
    bufp->fullIData(oldp+197,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t021),32);
    bufp->fullIData(oldp+198,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t022),32);
    bufp->fullIData(oldp+199,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t023),32);
    bufp->fullIData(oldp+200,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t030),32);
    bufp->fullIData(oldp+201,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t031),32);
    bufp->fullIData(oldp+202,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t032),32);
    bufp->fullIData(oldp+203,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__A_t033),32);
    bufp->fullIData(oldp+204,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_00),32);
    bufp->fullIData(oldp+205,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_01),32);
    bufp->fullIData(oldp+206,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_02),32);
    bufp->fullIData(oldp+207,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_03),32);
    bufp->fullIData(oldp+208,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_10),32);
    bufp->fullIData(oldp+209,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_11),32);
    bufp->fullIData(oldp+210,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_12),32);
    bufp->fullIData(oldp+211,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__s_13),32);
    bufp->fullIData(oldp+212,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_00),32);
    bufp->fullIData(oldp+213,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_01),32);
    bufp->fullIData(oldp+214,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_02),32);
    bufp->fullIData(oldp+215,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_03),32);
    bufp->fullIData(oldp+216,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_10),32);
    bufp->fullIData(oldp+217,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_11),32);
    bufp->fullIData(oldp+218,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_12),32);
    bufp->fullIData(oldp+219,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e_13),32);
    bufp->fullIData(oldp+220,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__message),32);
    bufp->fullIData(oldp+221,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key000),32);
    bufp->fullIData(oldp+222,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key001),32);
    bufp->fullIData(oldp+223,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key002),32);
    bufp->fullIData(oldp+224,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key003),32);
    bufp->fullIData(oldp+225,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key010),32);
    bufp->fullIData(oldp+226,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key011),32);
    bufp->fullIData(oldp+227,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key012),32);
    bufp->fullIData(oldp+228,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key013),32);
    bufp->fullIData(oldp+229,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key020),32);
    bufp->fullIData(oldp+230,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key021),32);
    bufp->fullIData(oldp+231,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key022),32);
    bufp->fullIData(oldp+232,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key023),32);
    bufp->fullIData(oldp+233,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key030),32);
    bufp->fullIData(oldp+234,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key031),32);
    bufp->fullIData(oldp+235,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key032),32);
    bufp->fullIData(oldp+236,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key033),32);
    bufp->fullIData(oldp+237,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key100),32);
    bufp->fullIData(oldp+238,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key101),32);
    bufp->fullIData(oldp+239,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key102),32);
    bufp->fullIData(oldp+240,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key103),32);
    bufp->fullIData(oldp+241,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key110),32);
    bufp->fullIData(oldp+242,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key111),32);
    bufp->fullIData(oldp+243,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key112),32);
    bufp->fullIData(oldp+244,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key113),32);
    bufp->fullIData(oldp+245,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_00),32);
    bufp->fullIData(oldp+246,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_01),32);
    bufp->fullIData(oldp+247,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_02),32);
    bufp->fullIData(oldp+248,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_03),32);
    bufp->fullIData(oldp+249,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_10),32);
    bufp->fullIData(oldp+250,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_11),32);
    bufp->fullIData(oldp+251,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_12),32);
    bufp->fullIData(oldp+252,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__r_13),32);
    bufp->fullIData(oldp+253,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_00),32);
    bufp->fullIData(oldp+254,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_01),32);
    bufp->fullIData(oldp+255,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_02),32);
    bufp->fullIData(oldp+256,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_03),32);
    bufp->fullIData(oldp+257,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_10),32);
    bufp->fullIData(oldp+258,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_11),32);
    bufp->fullIData(oldp+259,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_12),32);
    bufp->fullIData(oldp+260,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e1_13),32);
    bufp->fullIData(oldp+261,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_0),32);
    bufp->fullIData(oldp+262,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_1),32);
    bufp->fullIData(oldp+263,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_2),32);
    bufp->fullIData(oldp+264,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__e2_3),32);
    bufp->fullIData(oldp+265,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext000),32);
    bufp->fullIData(oldp+266,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext001),32);
    bufp->fullIData(oldp+267,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext002),32);
    bufp->fullIData(oldp+268,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext003),32);
    bufp->fullIData(oldp+269,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext010),32);
    bufp->fullIData(oldp+270,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext011),32);
    bufp->fullIData(oldp+271,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext012),32);
    bufp->fullIData(oldp+272,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext013),32);
    bufp->fullIData(oldp+273,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext100),32);
    bufp->fullIData(oldp+274,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext101),32);
    bufp->fullIData(oldp+275,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext102),32);
    bufp->fullIData(oldp+276,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__ciphertext103),32);
    bufp->fullIData(oldp+277,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [0U][0U]),32);
    bufp->fullIData(oldp+278,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [0U][1U]),32);
    bufp->fullIData(oldp+279,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [0U][2U]),32);
    bufp->fullIData(oldp+280,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [0U][3U]),32);
    bufp->fullIData(oldp+281,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [1U][0U]),32);
    bufp->fullIData(oldp+282,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [1U][1U]),32);
    bufp->fullIData(oldp+283,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [1U][2U]),32);
    bufp->fullIData(oldp+284,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__decryption__secret_key
                              [1U][3U]),32);
    bufp->fullIData(oldp+285,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
    bufp->fullIData(oldp+286,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
    bufp->fullIData(oldp+287,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
    bufp->fullIData(oldp+288,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
    bufp->fullIData(oldp+289,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
    bufp->fullIData(oldp+290,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
    bufp->fullIData(oldp+291,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
    bufp->fullIData(oldp+292,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
    bufp->fullIData(oldp+293,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [0U][0U]),32);
    bufp->fullIData(oldp+294,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [0U][1U]),32);
    bufp->fullIData(oldp+295,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [0U][2U]),32);
    bufp->fullIData(oldp+296,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [0U][3U]),32);
    bufp->fullIData(oldp+297,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [1U][0U]),32);
    bufp->fullIData(oldp+298,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [1U][1U]),32);
    bufp->fullIData(oldp+299,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [1U][2U]),32);
    bufp->fullIData(oldp+300,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__r
                              [1U][3U]),32);
    bufp->fullIData(oldp+301,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [0U][0U]),32);
    bufp->fullIData(oldp+302,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [0U][1U]),32);
    bufp->fullIData(oldp+303,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [0U][2U]),32);
    bufp->fullIData(oldp+304,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [0U][3U]),32);
    bufp->fullIData(oldp+305,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [1U][0U]),32);
    bufp->fullIData(oldp+306,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [1U][1U]),32);
    bufp->fullIData(oldp+307,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [1U][2U]),32);
    bufp->fullIData(oldp+308,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e1
                              [1U][3U]),32);
    bufp->fullIData(oldp+309,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2[0]),32);
    bufp->fullIData(oldp+310,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2[1]),32);
    bufp->fullIData(oldp+311,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2[2]),32);
    bufp->fullIData(oldp+312,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__e2[3]),32);
    bufp->fullCData(oldp+313,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients),4);
    bufp->fullIData(oldp+314,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[0]),32);
    bufp->fullIData(oldp+315,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[1]),32);
    bufp->fullIData(oldp+316,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[2]),32);
    bufp->fullIData(oldp+317,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__coefficients_scaled[3]),32);
    bufp->fullIData(oldp+318,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[0]),32);
    bufp->fullIData(oldp+319,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[1]),32);
    bufp->fullIData(oldp+320,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[2]),32);
    bufp->fullIData(oldp+321,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial2[3]),32);
    bufp->fullIData(oldp+322,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[0]),32);
    bufp->fullIData(oldp+323,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[1]),32);
    bufp->fullIData(oldp+324,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[2]),32);
    bufp->fullIData(oldp+325,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial2[3]),32);
    bufp->fullIData(oldp+326,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[0]),32);
    bufp->fullIData(oldp+327,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[1]),32);
    bufp->fullIData(oldp+328,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[2]),32);
    bufp->fullIData(oldp+329,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial2[3]),32);
    bufp->fullIData(oldp+330,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[0]),32);
    bufp->fullIData(oldp+331,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[1]),32);
    bufp->fullIData(oldp+332,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[2]),32);
    bufp->fullIData(oldp+333,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial2[3]),32);
    bufp->fullIData(oldp+334,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[0]),32);
    bufp->fullIData(oldp+335,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[1]),32);
    bufp->fullIData(oldp+336,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[2]),32);
    bufp->fullIData(oldp+337,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial2[3]),32);
    bufp->fullIData(oldp+338,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[0]),32);
    bufp->fullIData(oldp+339,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[1]),32);
    bufp->fullIData(oldp+340,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[2]),32);
    bufp->fullIData(oldp+341,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial2[3]),32);
    bufp->fullIData(oldp+342,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+343,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+344,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [0U][0U]),32);
    bufp->fullIData(oldp+345,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [0U][1U]),32);
    bufp->fullIData(oldp+346,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [0U][2U]),32);
    bufp->fullIData(oldp+347,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [0U][3U]),32);
    bufp->fullIData(oldp+348,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [1U][0U]),32);
    bufp->fullIData(oldp+349,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [1U][1U]),32);
    bufp->fullIData(oldp+350,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [1U][2U]),32);
    bufp->fullIData(oldp+351,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__e
                              [1U][3U]),32);
    bufp->fullIData(oldp+352,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [0U][0U]),32);
    bufp->fullIData(oldp+353,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [0U][1U]),32);
    bufp->fullIData(oldp+354,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [0U][2U]),32);
    bufp->fullIData(oldp+355,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [0U][3U]),32);
    bufp->fullIData(oldp+356,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [1U][0U]),32);
    bufp->fullIData(oldp+357,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [1U][1U]),32);
    bufp->fullIData(oldp+358,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [1U][2U]),32);
    bufp->fullIData(oldp+359,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__secret_key
                              [1U][3U]),32);
    bufp->fullIData(oldp+360,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [0U][0U]),32);
    bufp->fullIData(oldp+361,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [0U][1U]),32);
    bufp->fullIData(oldp+362,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [0U][2U]),32);
    bufp->fullIData(oldp+363,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [0U][3U]),32);
    bufp->fullIData(oldp+364,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [1U][0U]),32);
    bufp->fullIData(oldp+365,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [1U][1U]),32);
    bufp->fullIData(oldp+366,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [1U][2U]),32);
    bufp->fullIData(oldp+367,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__secretkey
                              [1U][3U]),32);
    bufp->fullIData(oldp+368,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[0]),32);
    bufp->fullIData(oldp+369,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[1]),32);
    bufp->fullIData(oldp+370,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[2]),32);
    bufp->fullIData(oldp+371,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial2[3]),32);
    bufp->fullIData(oldp+372,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[0]),32);
    bufp->fullIData(oldp+373,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[1]),32);
    bufp->fullIData(oldp+374,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[2]),32);
    bufp->fullIData(oldp+375,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial2[3]),32);
    bufp->fullIData(oldp+376,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[0]),32);
    bufp->fullIData(oldp+377,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[1]),32);
    bufp->fullIData(oldp+378,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[2]),32);
    bufp->fullIData(oldp+379,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial2[3]),32);
    bufp->fullIData(oldp+380,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[0]),32);
    bufp->fullIData(oldp+381,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[1]),32);
    bufp->fullIData(oldp+382,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[2]),32);
    bufp->fullIData(oldp+383,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial2[3]),32);
    bufp->fullIData(oldp+384,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+385,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+386,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+387,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
    bufp->fullIData(oldp+388,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+389,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
    bufp->fullIData(oldp+390,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__unnamedblk5__DOT__i),32);
    bufp->fullIData(oldp+391,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+392,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+393,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+394,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+395,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+396,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+397,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+398,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+399,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][2U][0U]),32);
    bufp->fullIData(oldp+400,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][2U][1U]),32);
    bufp->fullIData(oldp+401,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][2U][2U]),32);
    bufp->fullIData(oldp+402,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][2U][3U]),32);
    bufp->fullIData(oldp+403,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][3U][0U]),32);
    bufp->fullIData(oldp+404,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][3U][1U]),32);
    bufp->fullIData(oldp+405,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][3U][2U]),32);
    bufp->fullIData(oldp+406,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [0U][3U][3U]),32);
    bufp->fullIData(oldp+407,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+408,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+409,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+410,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+411,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+412,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+413,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+414,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+415,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][2U][0U]),32);
    bufp->fullIData(oldp+416,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][2U][1U]),32);
    bufp->fullIData(oldp+417,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][2U][2U]),32);
    bufp->fullIData(oldp+418,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][2U][3U]),32);
    bufp->fullIData(oldp+419,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][3U][0U]),32);
    bufp->fullIData(oldp+420,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][3U][1U]),32);
    bufp->fullIData(oldp+421,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][3U][2U]),32);
    bufp->fullIData(oldp+422,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__public_key
                              [1U][3U][3U]),32);
    bufp->fullBit(oldp+423,(vlSelf->BabyKyberTop__DOT__bkyber_key_done));
    bufp->fullBit(oldp+424,(vlSelf->BabyKyberTop__DOT__bkyber_decryption_done));
    bufp->fullIData(oldp+425,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+426,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+427,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+428,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+429,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+430,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+431,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+432,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__poly_out1[3]),32);
    bufp->fullBit(oldp+433,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT__decryption_done_next));
    bufp->fullIData(oldp+434,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[0]),32);
    bufp->fullIData(oldp+435,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[1]),32);
    bufp->fullIData(oldp+436,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[2]),32);
    bufp->fullIData(oldp+437,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult1__polynomial_out[3]),32);
    bufp->fullIData(oldp+438,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[0]),32);
    bufp->fullIData(oldp+439,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[1]),32);
    bufp->fullIData(oldp+440,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[2]),32);
    bufp->fullIData(oldp+441,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__decryption__DOT____Vcellout__poly_mult2__polynomial_out[3]),32);
    bufp->fullIData(oldp+442,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+443,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+444,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+445,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+446,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+447,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+448,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+449,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+450,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][0U]),32);
    bufp->fullIData(oldp+451,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][1U]),32);
    bufp->fullIData(oldp+452,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][2U]),32);
    bufp->fullIData(oldp+453,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][2U][3U]),32);
    bufp->fullIData(oldp+454,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][0U]),32);
    bufp->fullIData(oldp+455,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][1U]),32);
    bufp->fullIData(oldp+456,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][2U]),32);
    bufp->fullIData(oldp+457,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [0U][3U][3U]),32);
    bufp->fullIData(oldp+458,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+459,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+460,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+461,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+462,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+463,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+464,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+465,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+466,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][0U]),32);
    bufp->fullIData(oldp+467,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][1U]),32);
    bufp->fullIData(oldp+468,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][2U]),32);
    bufp->fullIData(oldp+469,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][2U][3U]),32);
    bufp->fullIData(oldp+470,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][0U]),32);
    bufp->fullIData(oldp+471,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][1U]),32);
    bufp->fullIData(oldp+472,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][2U]),32);
    bufp->fullIData(oldp+473,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__encryption__combined_output
                              [1U][3U][3U]),32);
    bufp->fullIData(oldp+474,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][0U]),32);
    bufp->fullIData(oldp+475,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][1U]),32);
    bufp->fullIData(oldp+476,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][2U]),32);
    bufp->fullIData(oldp+477,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [0U][3U]),32);
    bufp->fullIData(oldp+478,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][0U]),32);
    bufp->fullIData(oldp+479,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][1U]),32);
    bufp->fullIData(oldp+480,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][2U]),32);
    bufp->fullIData(oldp+481,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [1U][3U]),32);
    bufp->fullIData(oldp+482,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][0U]),32);
    bufp->fullIData(oldp+483,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][1U]),32);
    bufp->fullIData(oldp+484,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][2U]),32);
    bufp->fullIData(oldp+485,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [2U][3U]),32);
    bufp->fullIData(oldp+486,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][0U]),32);
    bufp->fullIData(oldp+487,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][1U]),32);
    bufp->fullIData(oldp+488,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][2U]),32);
    bufp->fullIData(oldp+489,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__transposed_matrix
                              [3U][3U]),32);
    bufp->fullIData(oldp+490,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+491,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+492,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+493,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+494,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+495,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+496,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+497,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out1[3]),32);
    bufp->fullIData(oldp+498,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[0]),32);
    bufp->fullIData(oldp+499,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[1]),32);
    bufp->fullIData(oldp+500,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[2]),32);
    bufp->fullIData(oldp+501,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out2[3]),32);
    bufp->fullIData(oldp+502,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[0]),32);
    bufp->fullIData(oldp+503,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[1]),32);
    bufp->fullIData(oldp+504,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[2]),32);
    bufp->fullIData(oldp+505,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out3[3]),32);
    bufp->fullIData(oldp+506,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[0]),32);
    bufp->fullIData(oldp+507,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[1]),32);
    bufp->fullIData(oldp+508,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[2]),32);
    bufp->fullIData(oldp+509,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out4[3]),32);
    bufp->fullIData(oldp+510,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[0]),32);
    bufp->fullIData(oldp+511,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[1]),32);
    bufp->fullIData(oldp+512,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[2]),32);
    bufp->fullIData(oldp+513,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_out5[3]),32);
    bufp->fullIData(oldp+514,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[0]),32);
    bufp->fullIData(oldp+515,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[1]),32);
    bufp->fullIData(oldp+516,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[2]),32);
    bufp->fullIData(oldp+517,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst__polynomial1[3]),32);
    bufp->fullIData(oldp+518,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[0]),32);
    bufp->fullIData(oldp+519,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[1]),32);
    bufp->fullIData(oldp+520,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[2]),32);
    bufp->fullIData(oldp+521,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst__polynomial_out[3]),32);
    bufp->fullIData(oldp+522,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+523,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+524,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+525,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+526,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[0]),32);
    bufp->fullIData(oldp+527,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[1]),32);
    bufp->fullIData(oldp+528,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[2]),32);
    bufp->fullIData(oldp+529,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst1__polynomial1[3]),32);
    bufp->fullIData(oldp+530,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[0]),32);
    bufp->fullIData(oldp+531,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[1]),32);
    bufp->fullIData(oldp+532,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[2]),32);
    bufp->fullIData(oldp+533,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst1__polynomial_out[3]),32);
    bufp->fullIData(oldp+534,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+535,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+536,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+537,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+538,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[0]),32);
    bufp->fullIData(oldp+539,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[1]),32);
    bufp->fullIData(oldp+540,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[2]),32);
    bufp->fullIData(oldp+541,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst2__polynomial1[3]),32);
    bufp->fullIData(oldp+542,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[0]),32);
    bufp->fullIData(oldp+543,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[1]),32);
    bufp->fullIData(oldp+544,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[2]),32);
    bufp->fullIData(oldp+545,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst2__polynomial_out[3]),32);
    bufp->fullIData(oldp+546,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+547,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+548,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+549,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+550,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[0]),32);
    bufp->fullIData(oldp+551,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[1]),32);
    bufp->fullIData(oldp+552,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[2]),32);
    bufp->fullIData(oldp+553,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst3__polynomial1[3]),32);
    bufp->fullIData(oldp+554,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[0]),32);
    bufp->fullIData(oldp+555,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[1]),32);
    bufp->fullIData(oldp+556,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[2]),32);
    bufp->fullIData(oldp+557,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst3__polynomial_out[3]),32);
    bufp->fullIData(oldp+558,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+559,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+560,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+561,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst3__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+562,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[0]),32);
    bufp->fullIData(oldp+563,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[1]),32);
    bufp->fullIData(oldp+564,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[2]),32);
    bufp->fullIData(oldp+565,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst4__polynomial1[3]),32);
    bufp->fullIData(oldp+566,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[0]),32);
    bufp->fullIData(oldp+567,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[1]),32);
    bufp->fullIData(oldp+568,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[2]),32);
    bufp->fullIData(oldp+569,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst4__polynomial_out[3]),32);
    bufp->fullIData(oldp+570,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+571,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+572,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+573,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst4__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+574,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[0]),32);
    bufp->fullIData(oldp+575,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[1]),32);
    bufp->fullIData(oldp+576,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[2]),32);
    bufp->fullIData(oldp+577,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__poly_mult_inst5__polynomial1[3]),32);
    bufp->fullIData(oldp+578,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[0]),32);
    bufp->fullIData(oldp+579,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[1]),32);
    bufp->fullIData(oldp+580,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[2]),32);
    bufp->fullIData(oldp+581,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__poly_mult_inst5__polynomial_out[3]),32);
    bufp->fullIData(oldp+582,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+583,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+584,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+585,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__poly_mult_inst5__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+586,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][0U]),32);
    bufp->fullIData(oldp+587,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][1U]),32);
    bufp->fullIData(oldp+588,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][2U]),32);
    bufp->fullIData(oldp+589,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [0U][3U]),32);
    bufp->fullIData(oldp+590,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][0U]),32);
    bufp->fullIData(oldp+591,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][1U]),32);
    bufp->fullIData(oldp+592,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][2U]),32);
    bufp->fullIData(oldp+593,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [1U][3U]),32);
    bufp->fullIData(oldp+594,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][0U]),32);
    bufp->fullIData(oldp+595,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][1U]),32);
    bufp->fullIData(oldp+596,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][2U]),32);
    bufp->fullIData(oldp+597,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [2U][3U]),32);
    bufp->fullIData(oldp+598,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][0U]),32);
    bufp->fullIData(oldp+599,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][1U]),32);
    bufp->fullIData(oldp+600,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][2U]),32);
    bufp->fullIData(oldp+601,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellinp__transpose_inst__matrix_in
                              [3U][3U]),32);
    bufp->fullIData(oldp+602,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][0U]),32);
    bufp->fullIData(oldp+603,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][1U]),32);
    bufp->fullIData(oldp+604,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][2U]),32);
    bufp->fullIData(oldp+605,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [0U][3U]),32);
    bufp->fullIData(oldp+606,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][0U]),32);
    bufp->fullIData(oldp+607,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][1U]),32);
    bufp->fullIData(oldp+608,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][2U]),32);
    bufp->fullIData(oldp+609,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [1U][3U]),32);
    bufp->fullIData(oldp+610,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][0U]),32);
    bufp->fullIData(oldp+611,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][1U]),32);
    bufp->fullIData(oldp+612,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][2U]),32);
    bufp->fullIData(oldp+613,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [2U][3U]),32);
    bufp->fullIData(oldp+614,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][0U]),32);
    bufp->fullIData(oldp+615,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][1U]),32);
    bufp->fullIData(oldp+616,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][2U]),32);
    bufp->fullIData(oldp+617,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT____Vcellout__transpose_inst__matrix_out
                              [3U][3U]),32);
    bufp->fullIData(oldp+618,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][0U][0U]),32);
    bufp->fullIData(oldp+619,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][0U][1U]),32);
    bufp->fullIData(oldp+620,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][0U][2U]),32);
    bufp->fullIData(oldp+621,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][0U][3U]),32);
    bufp->fullIData(oldp+622,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][1U][0U]),32);
    bufp->fullIData(oldp+623,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][1U][1U]),32);
    bufp->fullIData(oldp+624,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][1U][2U]),32);
    bufp->fullIData(oldp+625,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][1U][3U]),32);
    bufp->fullIData(oldp+626,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][2U][0U]),32);
    bufp->fullIData(oldp+627,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][2U][1U]),32);
    bufp->fullIData(oldp+628,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][2U][2U]),32);
    bufp->fullIData(oldp+629,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][2U][3U]),32);
    bufp->fullIData(oldp+630,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][3U][0U]),32);
    bufp->fullIData(oldp+631,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][3U][1U]),32);
    bufp->fullIData(oldp+632,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][3U][2U]),32);
    bufp->fullIData(oldp+633,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [0U][3U][3U]),32);
    bufp->fullIData(oldp+634,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][0U][0U]),32);
    bufp->fullIData(oldp+635,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][0U][1U]),32);
    bufp->fullIData(oldp+636,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][0U][2U]),32);
    bufp->fullIData(oldp+637,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][0U][3U]),32);
    bufp->fullIData(oldp+638,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][1U][0U]),32);
    bufp->fullIData(oldp+639,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][1U][1U]),32);
    bufp->fullIData(oldp+640,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][1U][2U]),32);
    bufp->fullIData(oldp+641,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][1U][3U]),32);
    bufp->fullIData(oldp+642,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][2U][0U]),32);
    bufp->fullIData(oldp+643,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][2U][1U]),32);
    bufp->fullIData(oldp+644,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][2U][2U]),32);
    bufp->fullIData(oldp+645,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][2U][3U]),32);
    bufp->fullIData(oldp+646,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][3U][0U]),32);
    bufp->fullIData(oldp+647,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][3U][1U]),32);
    bufp->fullIData(oldp+648,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][3U][2U]),32);
    bufp->fullIData(oldp+649,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellout__keygen__combined_output
                              [1U][3U][3U]),32);
    bufp->fullIData(oldp+650,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[0]),32);
    bufp->fullIData(oldp+651,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[1]),32);
    bufp->fullIData(oldp+652,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[2]),32);
    bufp->fullIData(oldp+653,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out0[3]),32);
    bufp->fullIData(oldp+654,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[0]),32);
    bufp->fullIData(oldp+655,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[1]),32);
    bufp->fullIData(oldp+656,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[2]),32);
    bufp->fullIData(oldp+657,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out1[3]),32);
    bufp->fullIData(oldp+658,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[0]),32);
    bufp->fullIData(oldp+659,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[1]),32);
    bufp->fullIData(oldp+660,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[2]),32);
    bufp->fullIData(oldp+661,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out2[3]),32);
    bufp->fullIData(oldp+662,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[0]),32);
    bufp->fullIData(oldp+663,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[1]),32);
    bufp->fullIData(oldp+664,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[2]),32);
    bufp->fullIData(oldp+665,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_out3[3]),32);
    bufp->fullBit(oldp+666,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__key_done_next));
    bufp->fullIData(oldp+667,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[0]),32);
    bufp->fullIData(oldp+668,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[1]),32);
    bufp->fullIData(oldp+669,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[2]),32);
    bufp->fullIData(oldp+670,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult0__polynomial_out[3]),32);
    bufp->fullIData(oldp+671,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[0]),32);
    bufp->fullIData(oldp+672,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[1]),32);
    bufp->fullIData(oldp+673,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[2]),32);
    bufp->fullIData(oldp+674,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult1__polynomial_out[3]),32);
    bufp->fullIData(oldp+675,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[0]),32);
    bufp->fullIData(oldp+676,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[1]),32);
    bufp->fullIData(oldp+677,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[2]),32);
    bufp->fullIData(oldp+678,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult2__polynomial_out[3]),32);
    bufp->fullIData(oldp+679,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[0]),32);
    bufp->fullIData(oldp+680,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[1]),32);
    bufp->fullIData(oldp+681,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[2]),32);
    bufp->fullIData(oldp+682,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellout__poly_mult3__polynomial_out[3]),32);
    bufp->fullIData(oldp+683,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__i),32);
    bufp->fullIData(oldp+684,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__unnamedblk11__DOT__unnamedblk12__DOT__j),32);
    bufp->fullIData(oldp+685,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__i),32);
    bufp->fullIData(oldp+686,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
    bufp->fullIData(oldp+687,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__k),32);
    bufp->fullIData(oldp+688,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__i),32);
    bufp->fullIData(oldp+689,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
    bufp->fullIData(oldp+690,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [0U][0U]),32);
    bufp->fullIData(oldp+691,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [0U][1U]),32);
    bufp->fullIData(oldp+692,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [0U][2U]),32);
    bufp->fullIData(oldp+693,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [0U][3U]),32);
    bufp->fullIData(oldp+694,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [1U][0U]),32);
    bufp->fullIData(oldp+695,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [1U][1U]),32);
    bufp->fullIData(oldp+696,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [1U][2U]),32);
    bufp->fullIData(oldp+697,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [1U][3U]),32);
    bufp->fullIData(oldp+698,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [2U][0U]),32);
    bufp->fullIData(oldp+699,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [2U][1U]),32);
    bufp->fullIData(oldp+700,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [2U][2U]),32);
    bufp->fullIData(oldp+701,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [2U][3U]),32);
    bufp->fullIData(oldp+702,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [3U][0U]),32);
    bufp->fullIData(oldp+703,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [3U][1U]),32);
    bufp->fullIData(oldp+704,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [3U][2U]),32);
    bufp->fullIData(oldp+705,(vlSelf->BabyKyberTop__DOT__bkyber__DOT____Vcellinp__keygen__A
                              [3U][3U]),32);
    bufp->fullIData(oldp+706,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[0]),32);
    bufp->fullIData(oldp+707,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[1]),32);
    bufp->fullIData(oldp+708,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[2]),32);
    bufp->fullIData(oldp+709,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult0__polynomial1[3]),32);
    bufp->fullIData(oldp+710,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+711,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+712,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+713,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult0__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+714,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[0]),32);
    bufp->fullIData(oldp+715,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[1]),32);
    bufp->fullIData(oldp+716,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[2]),32);
    bufp->fullIData(oldp+717,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult1__polynomial1[3]),32);
    bufp->fullIData(oldp+718,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+719,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+720,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+721,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult1__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+722,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[0]),32);
    bufp->fullIData(oldp+723,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[1]),32);
    bufp->fullIData(oldp+724,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[2]),32);
    bufp->fullIData(oldp+725,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult2__polynomial1[3]),32);
    bufp->fullIData(oldp+726,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+727,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+728,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+729,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult2__DOT__temp_result[3]),32);
    bufp->fullIData(oldp+730,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[0]),32);
    bufp->fullIData(oldp+731,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[1]),32);
    bufp->fullIData(oldp+732,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[2]),32);
    bufp->fullIData(oldp+733,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT____Vcellinp__poly_mult3__polynomial1[3]),32);
    bufp->fullIData(oldp+734,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[0]),32);
    bufp->fullIData(oldp+735,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[1]),32);
    bufp->fullIData(oldp+736,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[2]),32);
    bufp->fullIData(oldp+737,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__keygen__DOT__poly_mult3__DOT__temp_result[3]),32);
    bufp->fullBit(oldp+738,(vlSelf->clock));
    bufp->fullBit(oldp+739,(vlSelf->reset));
    bufp->fullBit(oldp+740,(vlSelf->io_req_ready));
    bufp->fullBit(oldp+741,(vlSelf->io_req_valid));
    bufp->fullIData(oldp+742,(vlSelf->io_req_bits_addrRequest),32);
    bufp->fullIData(oldp+743,(vlSelf->io_req_bits_dataRequest),32);
    bufp->fullCData(oldp+744,(vlSelf->io_req_bits_activeByteLane),4);
    bufp->fullBit(oldp+745,(vlSelf->io_req_bits_isWrite));
    bufp->fullBit(oldp+746,(vlSelf->io_rsp_ready));
    bufp->fullBit(oldp+747,(vlSelf->io_rsp_valid));
    bufp->fullIData(oldp+748,(vlSelf->io_rsp_bits_dataResponse),32);
    bufp->fullBit(oldp+749,(vlSelf->io_enable));
    bufp->fullBit(oldp+750,(vlSelf->io_key_enable));
    bufp->fullBit(oldp+751,(vlSelf->io_encryption_enable));
    bufp->fullBit(oldp+752,(vlSelf->io_decryption_enable));
    bufp->fullBit(oldp+753,(vlSelf->io_key_done));
    bufp->fullBit(oldp+754,(vlSelf->io_encryption_done));
    bufp->fullBit(oldp+755,(vlSelf->io_decryption_done));
    bufp->fullCData(oldp+756,(vlSelf->io_req_bits_activeByteLane),8);
    bufp->fullIData(oldp+757,(0x11U),32);
    bufp->fullIData(oldp+758,(4U),32);
    bufp->fullIData(oldp+759,(1U),32);
    bufp->fullIData(oldp+760,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__temp[0]),32);
    bufp->fullIData(oldp+761,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__temp[1]),32);
    bufp->fullIData(oldp+762,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__temp[2]),32);
    bufp->fullIData(oldp+763,(vlSelf->BabyKyberTop__DOT__bkyber__DOT__encryption__DOT__temp[3]),32);
    bufp->fullIData(oldp+764,(2U),32);
}
