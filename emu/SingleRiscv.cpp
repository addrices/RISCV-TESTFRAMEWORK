// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "SingleRiscv.h"
#include "SingleRiscv__Syms.h"

//============================================================
// Constructors

SingleRiscv::SingleRiscv(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new SingleRiscv__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , done{vlSymsp->TOP.done}
    , wb{vlSymsp->TOP.wb}
    , dbg_pc{vlSymsp->TOP.dbg_pc}
    , dbgregs_0{vlSymsp->TOP.dbgregs_0}
    , dbgregs_1{vlSymsp->TOP.dbgregs_1}
    , dbgregs_2{vlSymsp->TOP.dbgregs_2}
    , dbgregs_3{vlSymsp->TOP.dbgregs_3}
    , dbgregs_4{vlSymsp->TOP.dbgregs_4}
    , dbgregs_5{vlSymsp->TOP.dbgregs_5}
    , dbgregs_6{vlSymsp->TOP.dbgregs_6}
    , dbgregs_7{vlSymsp->TOP.dbgregs_7}
    , dbgregs_8{vlSymsp->TOP.dbgregs_8}
    , dbgregs_9{vlSymsp->TOP.dbgregs_9}
    , dbgregs_10{vlSymsp->TOP.dbgregs_10}
    , dbgregs_11{vlSymsp->TOP.dbgregs_11}
    , dbgregs_12{vlSymsp->TOP.dbgregs_12}
    , dbgregs_13{vlSymsp->TOP.dbgregs_13}
    , dbgregs_14{vlSymsp->TOP.dbgregs_14}
    , dbgregs_15{vlSymsp->TOP.dbgregs_15}
    , dbgregs_16{vlSymsp->TOP.dbgregs_16}
    , dbgregs_17{vlSymsp->TOP.dbgregs_17}
    , dbgregs_18{vlSymsp->TOP.dbgregs_18}
    , dbgregs_19{vlSymsp->TOP.dbgregs_19}
    , dbgregs_20{vlSymsp->TOP.dbgregs_20}
    , dbgregs_21{vlSymsp->TOP.dbgregs_21}
    , dbgregs_22{vlSymsp->TOP.dbgregs_22}
    , dbgregs_23{vlSymsp->TOP.dbgregs_23}
    , dbgregs_24{vlSymsp->TOP.dbgregs_24}
    , dbgregs_25{vlSymsp->TOP.dbgregs_25}
    , dbgregs_26{vlSymsp->TOP.dbgregs_26}
    , dbgregs_27{vlSymsp->TOP.dbgregs_27}
    , dbgregs_28{vlSymsp->TOP.dbgregs_28}
    , dbgregs_29{vlSymsp->TOP.dbgregs_29}
    , dbgregs_30{vlSymsp->TOP.dbgregs_30}
    , dbgregs_31{vlSymsp->TOP.dbgregs_31}
    , testcase{vlSymsp->TOP.testcase}
    , rootp{&(vlSymsp->TOP)}
{
}

SingleRiscv::SingleRiscv(const char* _vcname__)
    : SingleRiscv(nullptr, _vcname__)
{
}

//============================================================
// Destructor

SingleRiscv::~SingleRiscv() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void SingleRiscv___024root___eval_initial(SingleRiscv___024root* vlSelf);
void SingleRiscv___024root___eval_settle(SingleRiscv___024root* vlSelf);
void SingleRiscv___024root___eval(SingleRiscv___024root* vlSelf);
#ifdef VL_DEBUG
void SingleRiscv___024root___eval_debug_assertions(SingleRiscv___024root* vlSelf);
#endif  // VL_DEBUG
void SingleRiscv___024root___final(SingleRiscv___024root* vlSelf);

static void _eval_initial_loop(SingleRiscv__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    SingleRiscv___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        SingleRiscv___024root___eval_settle(&(vlSymsp->TOP));
        SingleRiscv___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void SingleRiscv::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate SingleRiscv::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    SingleRiscv___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        SingleRiscv___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* SingleRiscv::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* SingleRiscv::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void SingleRiscv::final() {
    SingleRiscv___024root___final(&(vlSymsp->TOP));
}
