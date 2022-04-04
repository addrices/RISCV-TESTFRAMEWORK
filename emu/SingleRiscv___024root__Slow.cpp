// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See SingleRiscv.h for the primary calling header

#include "verilated.h"

#include "SingleRiscv__Syms.h"
#include "SingleRiscv___024root.h"

void SingleRiscv___024root___ctor_var_reset(SingleRiscv___024root* vlSelf);

SingleRiscv___024root::SingleRiscv___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    SingleRiscv___024root___ctor_var_reset(this);
}

void SingleRiscv___024root::__Vconfigure(SingleRiscv__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

SingleRiscv___024root::~SingleRiscv___024root() {
}
