// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_SINGLERISCV__SYMS_H_
#define VERILATED_SINGLERISCV__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "SingleRiscv.h"

// INCLUDE MODULE CLASSES
#include "SingleRiscv___024root.h"

// SYMS CLASS (contains all model state)
class SingleRiscv__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    SingleRiscv* const __Vm_modelp;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    SingleRiscv___024root          TOP;

    // CONSTRUCTORS
    SingleRiscv__Syms(VerilatedContext* contextp, const char* namep, SingleRiscv* modelp);
    ~SingleRiscv__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
