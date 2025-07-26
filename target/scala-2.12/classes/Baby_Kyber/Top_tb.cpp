/* Created By Hamna Mohiuddin @hamnamohi as a Google Summer of Code 2024 Project.*/

#include <iostream>
#include <verilated.h>
#include <verilated_vcd_c.h>
#include "VTop.h"

int main(int argc, char **argv, char **env) {
    Verilated::commandArgs(argc, argv);

    VTop* top = new VTop;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("waveform.vcd");

    // Initialize signals
    top->clk = 0;
    top->rst_n = 0;
    top->enable = 0;
    top->key_enable = 0;
    top->encryption_enable = 0;
    top->decryption_enable = 0;
    top->data_Req = 0;
    top->addr_Req = 0;
    top->wen_Req = 0;
    top->bytelane_Req = 0;

    // Reset the design
    for (int i = 0; i < 4; i++) {
        top->clk = !top->clk;
        top->eval();
        tfp->dump(i);
    }
    top->rst_n = 1;

    // Set enable high
    top->enable = 1;
    top->bytelane_Req = 0xFF;

    // Write Key Generation inputs
    struct {
        uint32_t addr;
        int32_t data;
    } keygen_inputs[] = {
        // A_t matrix (4x4)
        {0x40007000, 1}, {0x40007004, 2}, {0x40007008, 3}, {0x40007012, 4},
        {0x40007016, 5}, {0x40007020, 6}, {0x40007024, 7}, {0x40007028, 8},
        {0x40007032, 9}, {0x40007036, 10}, {0x40007040, 11}, {0x40007044, 12},
        {0x40007048, 13}, {0x40007052, 14}, {0x40007056, 15}, {0x40007060, 16},
        // s matrix (2x4)
        {0x40007064, 17}, {0x40007068, 18}, {0x40007072, 19}, {0x40007076, 20},
        {0x40007080, 21}, {0x40007084, 22}, {0x40007088, 23}, {0x40007092, 24},
        // e matrix (2x4)
        {0x40007096, 25}, {0x40007100, 26}, {0x40007104, 27}, {0x40007108, 28},
        {0x40007112, 29}, {0x40007116, 30}, {0x40007120, 31}, {0x40007124, 32}
    };

    top->wen_Req = 1;
    for (int i = 0; i < sizeof(keygen_inputs) / sizeof(keygen_inputs[0]); i++) {
        top->addr_Req = keygen_inputs[i].addr;
        top->data_Req = keygen_inputs[i].data;
        top->clk = !top->clk; // Rising edge
        top->eval();
        tfp->dump(4 + 2 * i);
        top->clk = !top->clk; // Falling edge
        top->eval();
        tfp->dump(4 + 2 * i + 1);
        std::cout << "Writing KeyGen input: addr = 0x" << std::hex << keygen_inputs[i].addr 
                  << ", data = " << std::dec << keygen_inputs[i].data << std::endl;
    }

    // Enable Key Generation
    top->key_enable = 1;
    for (int i = 0; i < 4; i++) {
        top->clk = !top->clk;
        top->eval();
        tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + i);
    }
    top->key_enable = 0;

    // Read Key Generation outputs (public_key)
    top->wen_Req = 0;
    uint32_t public_key_addrs[] = {
        0x40007000, 0x40007004, 0x40007008, 0x40007012,
        0x40007016, 0x40007020, 0x40007024, 0x40007028,
        0x40007032, 0x40007036, 0x40007040, 0x40007044,
        0x40007048, 0x40007052, 0x40007056, 0x40007060,
        0x40007064, 0x40007068, 0x40007072, 0x40007076,
        0x40007080, 0x40007084, 0x40007088, 0x40007092
    };

    for (int i = 0; i < sizeof(public_key_addrs) / sizeof(public_key_addrs[0]); i++) {
        top->addr_Req = public_key_addrs[i];
        top->clk = !top->clk; // Rising edge
        top->eval();
        tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * i);
        top->clk = !top->clk; // Falling edge
        top->eval();
        tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * i + 1);
        std::cout << "Public Key output: addr = 0x" << std::hex << public_key_addrs[i] 
                  << ", data_Resp = " << std::dec << top->data_Resp << std::endl;
    }

    // Write Encryption inputs
    struct {
        uint32_t addr;
        int32_t data;
    } encrypt_inputs[] = {
        // message
        {0x40007128, 42},
        // public_key (2x4x4)
        {0x40007132, 1}, {0x40007136, 2}, {0x40007140, 3}, {0x40007144, 4},
        {0x40007148, 5}, {0x40007152, 6}, {0x40007156, 7}, {0x40007160, 8},
        {0x40007164, 9}, {0x40007168, 10}, {0x40007172, 11}, {0x40007176, 12},
        {0x40007180, 13}, {0x40007184, 14}, {0x40007188, 15}, {0x40007192, 16},
        {0x40007196, 17}, {0x40007200, 18}, {0x40007204, 19}, {0x40007208, 20},
        {0x40007212, 21}, {0x40007216, 22}, {0x40007220, 23}, {0x40007224, 24},
        // r (2x4)
        {0x40007228, 25}, {0x40007232, 26}, {0x40007236, 27}, {0x40007240, 28},
        {0x40007244, 29}, {0x40007248, 30}, {0x40007252, 31}, {0x40007256, 32},
        // e1 (2x4)
        {0x40007260, 33}, {0x40007264, 34}, {0x40007268, 35}, {0x40007272, 36},
        {0x40007276, 37}, {0x40007280, 38}, {0x40007284, 39}, {0x40007288, 40},
        // e2 (4)
        {0x40007292, 41}, {0x40007296, 42}, {0x40007300, 43}, {0x40007304, 44}
    };

    top->wen_Req = 1;
    for (int i = 0; i < sizeof(encrypt_inputs) / sizeof(encrypt_inputs[0]); i++) {
        top->addr_Req = encrypt_inputs[i].addr;
        top->data_Req = encrypt_inputs[i].data;
        top->clk = !top->clk; // Rising edge
        top->eval();
        tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * (sizeof(public_key_addrs) / sizeof(public_key_addrs[0])) + 2 * i);
        top->clk = !top->clk; // Falling edge
        top->eval();
        tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * (sizeof(public_key_addrs) / sizeof(public_key_addrs[0])) + 2 * i + 1);
        std::cout << "Writing Encrypt input: addr = 0x" << std::hex << encrypt_inputs[i].addr 
                  << ", data = " << std::dec << encrypt_inputs[i].data << std::endl;
    }

    // Enable Encryption
    top->encryption_enable = 1;
    for (int i = 0; i < 4; i++) {
        top->clk = !top->clk;
        top->eval();
        tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * (sizeof(public_key_addrs) / sizeof(public_key_addrs[0])) + 2 * (sizeof(encrypt_inputs) / sizeof(encrypt_inputs[0])) + i);
    }
    top->encryption_enable = 0;

    // Read Encryption outputs (ciphertext)
    top->wen_Req = 0;
    uint32_t ciphertext_addrs[] = {
        0x40007096, 0x40007100, 0x40007104, 0x40007108,
        0x40007112, 0x40007116, 0x40007120, 0x40007124,
        0x40007128, 0x40007132, 0x40007136, 0x40007140
    };

    for (int i = 0; i < sizeof(ciphertext_addrs) / sizeof(ciphertext_addrs[0]); i++) {
        top->addr_Req = ciphertext_addrs[i];
        top->clk = !top->clk; // Rising edge
        top->eval();
        tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * (sizeof(public_key_addrs) / sizeof(public_key_addrs[0])) + 2 * (sizeof(encrypt_inputs) / sizeof(encrypt_inputs[0])) + 4 + 2 * i);
        top->clk = !top->clk; // Falling edge
        top->eval();
        tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * (sizeof(public_key_addrs) / sizeof(public_key_addrs[0])) + 2 * (sizeof(encrypt_inputs) / sizeof(encrypt_inputs[0])) + 4 + 2 * i + 1);
        std::cout << "Ciphertext output: addr = 0x" << std::hex << ciphertext_addrs[i] 
                  << ", data_Resp = " << std::dec << top->data_Resp << std::endl;
    }

    // Write Decryption inputs
    struct {
        uint32_t addr;
        int32_t data;
    } decrypt_inputs[] = {
        // ciphertext (2x2x4)
        {0x40007308, 1}, {0x40007312, 2}, {0x40007316, 3}, {0x40007320, 4},
        {0x40007324, 5}, {0x40007328, 6}, {0x40007332, 7}, {0x40007336, 8},
        {0x40007340, 9}, {0x40007344, 10}, {0x40007348, 11}, {0x40007352, 12}
    };

    top->wen_Req = 1;
    for (int i = 0; i < sizeof(decrypt_inputs) / sizeof(decrypt_inputs[0]); i++) {
        top->addr_Req = decrypt_inputs[i].addr;
        top->data_Req = decrypt_inputs[i].data;
        top->clk = !top->clk; // Rising edge
        top->eval();
        tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * (sizeof(public_key_addrs) / sizeof(public_key_addrs[0])) + 2 * (sizeof(encrypt_inputs) / sizeof(encrypt_inputs[0])) + 4 + 2 * (sizeof(ciphertext_addrs) / sizeof(ciphertext_addrs[0])) + 2 * i);
        top->clk = !top->clk; // Falling edge
        top->eval();
        tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * (sizeof(public_key_addrs) / sizeof(public_key_addrs[0])) + 2 * (sizeof(encrypt_inputs) / sizeof(encrypt_inputs[0])) + 4 + 2 * (sizeof(ciphertext_addrs) / sizeof(ciphertext_addrs[0])) + 2 * i + 1);
        std::cout << "Writing Decrypt input: addr = 0x" << std::hex << decrypt_inputs[i].addr 
                  << ", data = " << std::dec << decrypt_inputs[i].data << std::endl;
    }

    // Enable Decryption
    top->decryption_enable = 1;
    for (int i = 0; i < 4; i++) {
        top->clk = !top->clk;
        top->eval();
        tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * (sizeof(public_key_addrs) / sizeof(public_key_addrs[0])) + 2 * (sizeof(encrypt_inputs) / sizeof(encrypt_inputs[0])) + 4 + 2 * (sizeof(ciphertext_addrs) / sizeof(ciphertext_addrs[0])) + 2 * (sizeof(decrypt_inputs) / sizeof(decrypt_inputs[0])) + i);
    }
    top->decryption_enable = 0;

    // Read Decryption output (message)
    top->wen_Req = 0;
    top->addr_Req = 0x40007144;
    top->clk = !top->clk; // Rising edge
    top->eval();
    tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * (sizeof(public_key_addrs) / sizeof(public_key_addrs[0])) + 2 * (sizeof(encrypt_inputs) / sizeof(encrypt_inputs[0])) + 4 + 2 * (sizeof(ciphertext_addrs) / sizeof(ciphertext_addrs[0])) + 2 * (sizeof(decrypt_inputs) / sizeof(decrypt_inputs[0])) + 4);
    top->clk = !top->clk; // Falling edge
    top->eval();
    tfp->dump(4 + 2 * (sizeof(keygen_inputs) / sizeof(keygen_inputs[0])) + 4 + 2 * (sizeof(public_key_addrs) / sizeof(public_key_addrs[0])) + 2 * (sizeof(encrypt_inputs) / sizeof(encrypt_inputs[0])) + 4 + 2 * (sizeof(ciphertext_addrs) / sizeof(ciphertext_addrs[0])) + 2 * (sizeof(decrypt_inputs) / sizeof(decrypt_inputs[0])) + 5);
    std::cout << "Decrypted message: addr = 0x40007144, data_Resp = " << top->data_Resp << std::endl;

    // Finalize simulation
    top->final();
    tfp->close();
    delete tfp;
    delete top;

    return 0;
}
