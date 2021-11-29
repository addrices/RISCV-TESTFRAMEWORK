// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _SingleRiscv__Syms_H_
#define _SingleRiscv__Syms_H_

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "SingleRiscv.h"

// SYMS CLASS
class SingleRiscv__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    SingleRiscv*                   TOPp;
    
    // CREATORS
    SingleRiscv__Syms(SingleRiscv* topp, const char* namep);
    ~SingleRiscv__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(64);

#endif // guard
