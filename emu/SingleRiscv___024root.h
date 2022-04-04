// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See SingleRiscv.h for the primary calling header

#ifndef VERILATED_SINGLERISCV___024ROOT_H_
#define VERILATED_SINGLERISCV___024ROOT_H_  // guard

#include "verilated.h"

class SingleRiscv__Syms;
VL_MODULE(SingleRiscv___024root) {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(wb,0,0);
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__less;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__regwr;
    CData/*3:0*/ cpu_tst__DOT__mycpu__DOT__aluctr;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__memtoreg;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__memwr;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__wb_r;
    CData/*3:0*/ cpu_tst__DOT__datamem__DOT__wmask;
    CData/*7:0*/ cpu_tst__DOT__datamem__DOT__byteout;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*15:0*/ cpu_tst__DOT__datamem__DOT__wordout;
    VL_OUT(dbg_pc,31,0);
    VL_OUT(dbgregs_0,31,0);
    VL_OUT(dbgregs_1,31,0);
    VL_OUT(dbgregs_2,31,0);
    VL_OUT(dbgregs_3,31,0);
    VL_OUT(dbgregs_4,31,0);
    VL_OUT(dbgregs_5,31,0);
    VL_OUT(dbgregs_6,31,0);
    VL_OUT(dbgregs_7,31,0);
    VL_OUT(dbgregs_8,31,0);
    VL_OUT(dbgregs_9,31,0);
    VL_OUT(dbgregs_10,31,0);
    VL_OUT(dbgregs_11,31,0);
    VL_OUT(dbgregs_12,31,0);
    VL_OUT(dbgregs_13,31,0);
    VL_OUT(dbgregs_14,31,0);
    VL_OUT(dbgregs_15,31,0);
    VL_OUT(dbgregs_16,31,0);
    VL_OUT(dbgregs_17,31,0);
    VL_OUT(dbgregs_18,31,0);
    VL_OUT(dbgregs_19,31,0);
    VL_OUT(dbgregs_20,31,0);
    VL_OUT(dbgregs_21,31,0);
    VL_OUT(dbgregs_22,31,0);
    VL_OUT(dbgregs_23,31,0);
    VL_OUT(dbgregs_24,31,0);
    VL_OUT(dbgregs_25,31,0);
    VL_OUT(dbgregs_26,31,0);
    VL_OUT(dbgregs_27,31,0);
    VL_OUT(dbgregs_28,31,0);
    VL_OUT(dbgregs_29,31,0);
    VL_OUT(dbgregs_30,31,0);
    VL_OUT(dbgregs_31,31,0);
    IData/*31:0*/ cpu_tst__DOT__idataout;
    IData/*31:0*/ cpu_tst__DOT__daddr;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__pc_r;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__dbg_pc_r;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__nextpc;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__alua;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__alub;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout;
    IData/*31:0*/ cpu_tst__DOT__datamem__DOT__memin;
    IData/*31:0*/ cpu_tst__DOT__datamem__DOT__dwordout;
    IData/*31:0*/ cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout;
    IData/*31:0*/ cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin;
    VL_IN64(testcase,64,1);
    VlUnpacked<IData/*31:0*/, 32> cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs;
    VlUnpacked<IData/*31:0*/, 65536> cpu_tst__DOT__instructions__DOT__ram;
    VlUnpacked<IData/*31:0*/, 32768> cpu_tst__DOT__datamem__DOT__mymem__DOT__ram;

    // INTERNAL VARIABLES
    SingleRiscv__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
    SingleRiscv___024root(const char* name);
    ~SingleRiscv___024root();
    VL_UNCOPYABLE(SingleRiscv___024root);

    // INTERNAL METHODS
    void __Vconfigure(SingleRiscv__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
