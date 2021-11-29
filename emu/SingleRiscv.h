// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _SingleRiscv_H_
#define _SingleRiscv_H_

#include "verilated_heavy.h"

class SingleRiscv__Syms;

//----------

VL_MODULE(SingleRiscv) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(done,0,0);
    VL_OUT8(wb,0,0);
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
    VL_IN64(testcase,64,1);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__op,6,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__less,0,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__extop,2,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__regwr,0,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__aluasrc,0,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__alubsrc,1,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__aluctr,3,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__branch,2,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__memtoreg,0,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__memwr,0,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__pcasrc,0,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__pcbsrc,0,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__wb_r,0,0);
    VL_SIG8(cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa,0,0);
    VL_SIG8(cpu_tst__DOT__datamem__DOT__wmask,3,0);
    VL_SIG8(cpu_tst__DOT__datamem__DOT__byteout,7,0);
    VL_SIG16(cpu_tst__DOT__datamem__DOT__wordout,15,0);
    VL_SIG(cpu_tst__DOT__idataout,31,0);
    VL_SIG(cpu_tst__DOT__daddr,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__pc_r,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__dbg_pc_r,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__nextpc,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__rs1data,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__rs2data,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__imm,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__alua,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__alub,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin,31,0);
    VL_SIG(cpu_tst__DOT__datamem__DOT__memin,31,0);
    VL_SIG(cpu_tst__DOT__datamem__DOT__dwordout,31,0);
    VL_SIG(cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout,31,0);
    VL_SIG(cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin,31,0);
    VL_SIG(cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs[32],31,0);
    VL_SIG(cpu_tst__DOT__instructions__DOT__ram[65536],31,0);
    VL_SIG(cpu_tst__DOT__datamem__DOT__mymem__DOT__ram[32768],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    static VL_ST_SIG8(__Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[32],0,0);
    static VL_ST_SIG8(__Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[32],0,0);
    VL_SIG8(__Vtableidx1,4,0);
    VL_SIG8(__Vclklast__TOP__clk,0,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    SingleRiscv__Syms* __VlSymsp;  // Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    SingleRiscv& operator= (const SingleRiscv&);  ///< Copying not allowed
    SingleRiscv(const SingleRiscv&);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    SingleRiscv(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~SingleRiscv();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(SingleRiscv__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(SingleRiscv__Syms* symsp, bool first);
  private:
    static QData _change_request(SingleRiscv__Syms* __restrict vlSymsp);
    void _ctor_var_reset();
  public:
    static void _eval(SingleRiscv__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif // VL_DEBUG
  public:
    static void _eval_initial(SingleRiscv__Syms* __restrict vlSymsp);
    static void _eval_settle(SingleRiscv__Syms* __restrict vlSymsp);
    static void _initial__TOP__1(SingleRiscv__Syms* __restrict vlSymsp);
    static void _multiclk__TOP__5(SingleRiscv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__2(SingleRiscv__Syms* __restrict vlSymsp);
    static void _sequent__TOP__3(SingleRiscv__Syms* __restrict vlSymsp);
    static void _settle__TOP__4(SingleRiscv__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif // guard
