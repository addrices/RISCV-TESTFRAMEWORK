// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See SingleRiscv.h for the primary calling header

#include "SingleRiscv.h"       // For This
#include "SingleRiscv__Syms.h"


//--------------------
// STATIC VARIABLES

VL_ST_SIG8(SingleRiscv::__Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[32],0,0);
VL_ST_SIG8(SingleRiscv::__Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[32],0,0);

//--------------------

VL_CTOR_IMP(SingleRiscv) {
    SingleRiscv__Syms* __restrict vlSymsp = __VlSymsp = new SingleRiscv__Syms(this, name());
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void SingleRiscv::__Vconfigure(SingleRiscv__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

SingleRiscv::~SingleRiscv() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void SingleRiscv::eval() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate SingleRiscv::eval\n"); );
    SingleRiscv__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void SingleRiscv::_eval_initial_loop(SingleRiscv__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    int __VclockLoop = 0;
    QData __Vchange = 1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (VL_UNLIKELY(++__VclockLoop > 100)) VL_FATAL_MT(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void SingleRiscv::_initial__TOP__1(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_initial__TOP__1\n"); );
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at src/cpu.v:725
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs[0U] = 0U;
}

VL_INLINE_OPT void SingleRiscv::_sequent__TOP__2(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_sequent__TOP__2\n"); );
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIGW(__Vtemp1,95,0,3);
    // Body
    // ALWAYS at src/cpu.v:79
    if (VL_UNLIKELY(vlTOPp->reset)) {
	__Vtemp1[0U] = 0x2e686578U;
	__Vtemp1[1U] = (IData)(vlTOPp->testcase);
	__Vtemp1[2U] = (IData)((vlTOPp->testcase >> 0x20U));
	VL_READMEM_W (true,32,65536, 0,3, __Vtemp1, vlTOPp->cpu_tst__DOT__instructions__DOT__ram
		      ,0,~0);
	VL_WRITEF("~~~ Begin test case %s ~~~\n",64,
		  vlTOPp->testcase);
    }
    // ALWAYS at src/cpu.v:134
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr) {
	vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
	    = vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram
	    [(0x7fffU & (vlTOPp->cpu_tst__DOT__daddr 
			 >> 2U))];
    } else {
	vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
	    = vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram
	    [(0x7fffU & (vlTOPp->cpu_tst__DOT__daddr 
			 >> 2U))];
    }
}

VL_INLINE_OPT void SingleRiscv::_sequent__TOP__3(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_sequent__TOP__3\n"); );
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0,4,0);
    VL_SIG8(__Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0,0,0);
    VL_SIG8(__Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0,0,0);
    VL_SIG16(__Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0,14,0);
    VL_SIG(__Vdly__cpu_tst__DOT__mycpu__DOT__pc_r,31,0);
    VL_SIG(__Vdlyvval__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0,31,0);
    VL_SIG(__Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0,31,0);
    // Body
    __Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 = 0U;
    __Vdly__cpu_tst__DOT__mycpu__DOT__pc_r = vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 = 0U;
    // ALWAYS at src/cpu.v:147
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr) {
	__Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 
	    = vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin;
	__Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 = 1U;
	__Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 
	    = (0x7fffU & (vlTOPp->cpu_tst__DOT__daddr 
			  >> 2U));
    }
    // ALWAYS at src/cpu.v:312
    if (vlTOPp->reset) {
	__Vdly__cpu_tst__DOT__mycpu__DOT__pc_r = 0U;
	vlTOPp->cpu_tst__DOT__mycpu__DOT__wb_r = 0U;
    } else {
	vlTOPp->cpu_tst__DOT__mycpu__DOT__wb_r = (0U 
						  != vlTOPp->cpu_tst__DOT__idataout);
	vlTOPp->cpu_tst__DOT__mycpu__DOT__dbg_pc_r 
	    = vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r;
	__Vdly__cpu_tst__DOT__mycpu__DOT__pc_r = vlTOPp->cpu_tst__DOT__mycpu__DOT__nextpc;
    }
    // ALWAYS at src/cpu.v:731
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr) {
	__Vdlyvval__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 
	    = ((0U == (0x1fU & (vlTOPp->cpu_tst__DOT__idataout 
				>> 7U))) ? 0U : ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__memtoreg)
						  ? 
						 ((0x4000U 
						   & vlTOPp->cpu_tst__DOT__idataout)
						   ? 
						  ((0x2000U 
						    & vlTOPp->cpu_tst__DOT__idataout)
						    ? vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout
						    : 
						   ((0x1000U 
						     & vlTOPp->cpu_tst__DOT__idataout)
						     ? (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wordout)
						     : (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__byteout)))
						   : 
						  ((0x2000U 
						    & vlTOPp->cpu_tst__DOT__idataout)
						    ? vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout
						    : 
						   ((0x1000U 
						     & vlTOPp->cpu_tst__DOT__idataout)
						     ? 
						    ((0xffff0000U 
						      & (VL_NEGATE_I((IData)(
									     (1U 
									      & ((IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wordout) 
										>> 0xfU)))) 
							 << 0x10U)) 
						     | (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wordout))
						     : 
						    ((0xffffff00U 
						      & (VL_NEGATE_I((IData)(
									     (1U 
									      & ((IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__byteout) 
										>> 7U)))) 
							 << 8U)) 
						     | (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__byteout)))))
						  : 
						 ((4U 
						   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
						   ? 
						  ((2U 
						    & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
						     ? 
						    (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
						     & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
						     : 
						    (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
						     | vlTOPp->cpu_tst__DOT__mycpu__DOT__alub))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
						     ? vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout
						     : 
						    (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
						     ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)))
						   : 
						  ((2U 
						    & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
						    ? 
						   ((1U 
						     & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
						     ? vlTOPp->cpu_tst__DOT__mycpu__DOT__alub
						     : (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__less))
						    : 
						   ((1U 
						     & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
						     ? vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout
						     : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout)))));
	__Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 = 1U;
	__Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 
	    = (0x1fU & (vlTOPp->cpu_tst__DOT__idataout 
			>> 7U));
    }
    // ALWAYSPOST at src/cpu.v:151
    if (__Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0) {
	vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram[__Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0] 
	    = __Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r = __Vdly__cpu_tst__DOT__mycpu__DOT__pc_r;
    // ALWAYSPOST at src/cpu.v:733
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0) {
	vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs[__Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0] 
	    = __Vdlyvval__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0;
    }
    vlTOPp->wb = vlTOPp->cpu_tst__DOT__mycpu__DOT__wb_r;
    vlTOPp->dbg_pc = vlTOPp->cpu_tst__DOT__mycpu__DOT__dbg_pc_r;
    // ALWAYS at src/cpu.v:104
    vlTOPp->cpu_tst__DOT__idataout = vlTOPp->cpu_tst__DOT__instructions__DOT__ram
	[(0xffffU & (((IData)(vlTOPp->reset) ? 0U : vlTOPp->cpu_tst__DOT__mycpu__DOT__nextpc) 
		     >> 2U))];
    vlTOPp->done = (0U == vlTOPp->cpu_tst__DOT__idataout);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
	[(0x1fU & (vlTOPp->cpu_tst__DOT__idataout >> 0x14U))];
    vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
	[(0x1fU & (vlTOPp->cpu_tst__DOT__idataout >> 0xfU))];
    vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI 
	= ((0xfffff000U & (VL_NEGATE_I((IData)((1U 
						& (vlTOPp->cpu_tst__DOT__idataout 
						   >> 0x1fU)))) 
			   << 0xcU)) | (0xfffU & (vlTOPp->cpu_tst__DOT__idataout 
						  >> 0x14U)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__op = (0x7fU & vlTOPp->cpu_tst__DOT__idataout);
    vlTOPp->cpu_tst__DOT__datamem__DOT__memin = ((0U 
						  == 
						  (3U 
						   & (vlTOPp->cpu_tst__DOT__idataout 
						      >> 0xcU)))
						  ? 
						 ((0xff000000U 
						   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
						      << 0x18U)) 
						  | ((0xff0000U 
						      & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
							 << 0x10U)) 
						     | ((0xff00U 
							 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
							    << 8U)) 
							| (0xffU 
							   & vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data))))
						  : 
						 ((2U 
						   == 
						   (3U 
						    & (vlTOPp->cpu_tst__DOT__idataout 
						       >> 0xcU)))
						   ? vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data
						   : 
						  ((0xffff0000U 
						    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
						       << 0x10U)) 
						   | (0xffffU 
						      & vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data))));
    // ALWAYS at src/cpu.v:582
    vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__branch = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__memtoreg = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr = 0U;
    if ((0x40U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
	if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
	    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
			  >> 4U)))) {
		if ((8U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
		    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 4U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__branch = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 2U;
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 0U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__branch = 2U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 2U;
		    } else {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 3U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__branch 
			    = (4U | ((2U & (vlTOPp->cpu_tst__DOT__idataout 
					    >> 0xdU)) 
				     | (1U & (vlTOPp->cpu_tst__DOT__idataout 
					      >> 0xcU))));
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr 
			    = ((3U == (3U & (vlTOPp->cpu_tst__DOT__idataout 
					     >> 0xdU)))
			        ? 0xaU : 2U);
		    }
		}
	    }
	}
    } else {
	if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
	    if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
		if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
			      >> 3U)))) {
		    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr = 3U;
		    } else {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr 
			    = ((3U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
					     >> 0xcU)))
			        ? 0xaU : ((8U & (vlTOPp->cpu_tst__DOT__idataout 
						 >> 0x1bU)) 
					  | (7U & (vlTOPp->cpu_tst__DOT__idataout 
						   >> 0xcU))));
		    }
		}
	    } else {
		if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
			      >> 3U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
				  >> 2U)))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 2U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
		    }
		}
	    }
	} else {
	    if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
		if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
			      >> 3U)))) {
		    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr = 0U;
		    } else {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr 
			    = ((3U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
					     >> 0xcU)))
			        ? 0xaU : (((5U == (7U 
						   & (vlTOPp->cpu_tst__DOT__idataout 
						      >> 0xcU))) 
					   & (vlTOPp->cpu_tst__DOT__idataout 
					      >> 0x1eU))
					   ? 0xdU : 
					  (7U & (vlTOPp->cpu_tst__DOT__idataout 
						 >> 0xcU))));
		    }
		}
	    } else {
		if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
			      >> 3U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
				  >> 2U)))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__memtoreg = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
		    }
		}
	    }
	}
    }
    vlTOPp->cpu_tst__DOT__daddr = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr)
				    ? (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data 
				       + ((0xfffff000U 
					   & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlTOPp->cpu_tst__DOT__idataout 
								      >> 0x1fU)))) 
					      << 0xcU)) 
					  | ((0xfe0U 
					      & (vlTOPp->cpu_tst__DOT__idataout 
						 >> 0x14U)) 
					     | (0x1fU 
						& (vlTOPp->cpu_tst__DOT__idataout 
						   >> 7U)))))
				    : (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data 
				       + ((0xfffff000U 
					   & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlTOPp->cpu_tst__DOT__idataout 
								      >> 0x1fU)))) 
					      << 0xcU)) 
					  | (0xfffU 
					     & (vlTOPp->cpu_tst__DOT__idataout 
						>> 0x14U)))));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__alua = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc)
					       ? vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r
					       : vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa 
	= (1U & (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr) 
		  >> 3U) | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr) 
			    >> 1U)));
    // ALWAYS at src/cpu.v:677
    vlTOPp->cpu_tst__DOT__mycpu__DOT__imm = ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
					      ? ((2U 
						  & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
						  ? vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI
						  : 
						 ((1U 
						   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
						   ? vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI
						   : 
						  ((0xfff00000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->cpu_tst__DOT__idataout 
									       >> 0x1fU)))) 
						       << 0x14U)) 
						   | ((0xff000U 
						       & vlTOPp->cpu_tst__DOT__idataout) 
						      | ((0x800U 
							  & (vlTOPp->cpu_tst__DOT__idataout 
							     >> 9U)) 
							 | (0x7feU 
							    & (vlTOPp->cpu_tst__DOT__idataout 
							       >> 0x14U)))))))
					      : ((2U 
						  & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
						  ? 
						 ((1U 
						   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
						   ? 
						  ((0xfffff000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->cpu_tst__DOT__idataout 
									       >> 0x1fU)))) 
						       << 0xcU)) 
						   | ((0x800U 
						       & (vlTOPp->cpu_tst__DOT__idataout 
							  << 4U)) 
						      | ((0x7e0U 
							  & (vlTOPp->cpu_tst__DOT__idataout 
							     >> 0x14U)) 
							 | (0x1eU 
							    & (vlTOPp->cpu_tst__DOT__idataout 
							       >> 7U)))))
						   : 
						  ((0xfffff000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->cpu_tst__DOT__idataout 
									       >> 0x1fU)))) 
						       << 0xcU)) 
						   | ((0xfe0U 
						       & (vlTOPp->cpu_tst__DOT__idataout 
							  >> 0x14U)) 
						      | (0x1fU 
							 & (vlTOPp->cpu_tst__DOT__idataout 
							    >> 7U)))))
						  : 
						 ((1U 
						   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
						   ? 
						  (0xfffff000U 
						   & vlTOPp->cpu_tst__DOT__idataout)
						   : vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI)));
    // ALWAYS at src/cpu.v:201
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr) {
	if ((0U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
			  >> 0xcU)))) {
	    vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		= ((0xeU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		   | (0U == (3U & vlTOPp->cpu_tst__DOT__daddr)));
	    vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		= ((0xdU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		   | ((1U == (3U & vlTOPp->cpu_tst__DOT__daddr)) 
		      << 1U));
	    vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		= ((0xbU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		   | ((2U == (3U & vlTOPp->cpu_tst__DOT__daddr)) 
		      << 2U));
	    vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		= ((7U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		   | ((3U == (3U & vlTOPp->cpu_tst__DOT__daddr)) 
		      << 3U));
	} else {
	    if ((1U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
			      >> 0xcU)))) {
		vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		    = ((0xeU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		       | (1U & (~ (vlTOPp->cpu_tst__DOT__daddr 
				   >> 1U))));
		vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		    = ((0xdU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		       | (2U & ((~ (vlTOPp->cpu_tst__DOT__daddr 
				    >> 1U)) << 1U)));
		vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		    = ((0xbU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		       | (4U & (vlTOPp->cpu_tst__DOT__daddr 
				<< 1U)));
		vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		    = ((7U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		       | (8U & (vlTOPp->cpu_tst__DOT__daddr 
				<< 2U)));
	    } else {
		vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		    = ((2U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
				     >> 0xcU))) ? 0xfU
		        : 0U);
	    }
	}
    } else {
	vlTOPp->cpu_tst__DOT__datamem__DOT__wmask = 0U;
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
	= ((8U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	    ? VL_NEGATE_I((IData)((1U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
					 >> 0x1fU))))
	    : 0U);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__alub = ((2U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc))
					       ? 4U
					       : ((1U 
						   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc))
						   ? vlTOPp->cpu_tst__DOT__mycpu__DOT__imm
						   : vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data));
    // ALWAYS at src/cpu.v:456
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
	= ((0x10U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
	    ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	        ? ((0xffff0000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
				   << 0x10U)) | (0xffffU 
						 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
						    >> 0x10U)))
	        : (0xffff0000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
				  << 0x10U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__alua);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin 
	= (VL_NEGATE_I((IData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))) 
	   ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__alub);
    // ALWAYS at src/cpu.v:467
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
	= ((8U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
	    ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	        ? ((0xff000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
				   << 0x18U)) | (0xffffffU 
						 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
						    >> 8U)))
	        : (0xffffff00U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
				  << 8U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
	= ((vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
	    + vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin) 
	   + (IData)((QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))));
    // ALWAYS at src/cpu.v:478
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
	= ((4U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
	    ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	        ? ((0xf0000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
				   << 0x1cU)) | (0xfffffffU 
						 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
						    >> 4U)))
	        : (0xfffffff0U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
				  << 4U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__less = (1U & 
					      ((8U 
						& (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
					        ? ((IData)(
							   (VL_ULL(1) 
							    & ((((QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__alua)) 
								 + (QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin))) 
								+ (QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))) 
							       >> 0x20U))) 
						   ^ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))
					        : (
						   (((vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
						      >> 0x1fU) 
						     ^ ~ 
						     (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin 
						      >> 0x1fU)) 
						    & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
							^ vlTOPp->cpu_tst__DOT__mycpu__DOT__alua) 
						       >> 0x1fU)) 
						   ^ 
						   (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
						    >> 0x1fU))));
    // ALWAYS at src/cpu.v:489
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
	= ((2U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
	    ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	        ? ((0xc0000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
				   << 0x1eU)) | (0x3fffffffU 
						 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
						    >> 2U)))
	        : (0xfffffffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
				  << 2U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out);
    // ALWAYS at src/cpu.v:520
    vlTOPp->__Vtableidx1 = ((0x10U & ((~ (IData)((0U 
						  != vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout))) 
				      << 4U)) | (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__less) 
						  << 3U) 
						 | (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__branch)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__pcasrc = vlTOPp->__Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc
	[vlTOPp->__Vtableidx1];
    vlTOPp->cpu_tst__DOT__mycpu__DOT__pcbsrc = vlTOPp->__Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc
	[vlTOPp->__Vtableidx1];
    // ALWAYS at src/cpu.v:500
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout 
	= ((1U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
	    ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	        ? ((0x80000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
				   << 0x1fU)) | (0x7fffffffU 
						 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
						    >> 1U)))
	        : (0xfffffffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
				  << 1U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__nextpc = ((0U 
						 != vlTOPp->cpu_tst__DOT__idataout)
						 ? 
						(((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__pcasrc)
						   ? 
						  (0xfffffffeU 
						   & vlTOPp->cpu_tst__DOT__mycpu__DOT__imm)
						   : 4U) 
						 + 
						 ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__pcbsrc)
						   ? 
						  (0xfffffffeU 
						   & vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data)
						   : vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r))
						 : vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r);
}

void SingleRiscv::_settle__TOP__4(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_settle__TOP__4\n"); );
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dbg_pc = vlTOPp->cpu_tst__DOT__mycpu__DOT__dbg_pc_r;
    vlTOPp->wb = vlTOPp->cpu_tst__DOT__mycpu__DOT__wb_r;
    vlTOPp->done = (0U == vlTOPp->cpu_tst__DOT__idataout);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI 
	= ((0xfffff000U & (VL_NEGATE_I((IData)((1U 
						& (vlTOPp->cpu_tst__DOT__idataout 
						   >> 0x1fU)))) 
			   << 0xcU)) | (0xfffU & (vlTOPp->cpu_tst__DOT__idataout 
						  >> 0x14U)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__op = (0x7fU & vlTOPp->cpu_tst__DOT__idataout);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
	[(0x1fU & (vlTOPp->cpu_tst__DOT__idataout >> 0x14U))];
    vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data = vlTOPp->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
	[(0x1fU & (vlTOPp->cpu_tst__DOT__idataout >> 0xfU))];
    // ALWAYS at src/cpu.v:582
    vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__branch = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__memtoreg = 0U;
    vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr = 0U;
    if ((0x40U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
	if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
	    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
			  >> 4U)))) {
		if ((8U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
		    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 4U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__branch = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 2U;
		    }
		} else {
		    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 0U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__branch = 2U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 2U;
		    } else {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 3U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__branch 
			    = (4U | ((2U & (vlTOPp->cpu_tst__DOT__idataout 
					    >> 0xdU)) 
				     | (1U & (vlTOPp->cpu_tst__DOT__idataout 
					      >> 0xcU))));
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr 
			    = ((3U == (3U & (vlTOPp->cpu_tst__DOT__idataout 
					     >> 0xdU)))
			        ? 0xaU : 2U);
		    }
		}
	    }
	}
    } else {
	if ((0x20U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
	    if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
		if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
			      >> 3U)))) {
		    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr = 3U;
		    } else {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr 
			    = ((3U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
					     >> 0xcU)))
			        ? 0xaU : ((8U & (vlTOPp->cpu_tst__DOT__idataout 
						 >> 0x1bU)) 
					  | (7U & (vlTOPp->cpu_tst__DOT__idataout 
						   >> 0xcU))));
		    }
		}
	    } else {
		if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
			      >> 3U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
				  >> 2U)))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 2U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
		    }
		}
	    }
	} else {
	    if ((0x10U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
		if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
			      >> 3U)))) {
		    if ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__extop = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr = 0U;
		    } else {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr 
			    = ((3U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
					     >> 0xcU)))
			        ? 0xaU : (((5U == (7U 
						   & (vlTOPp->cpu_tst__DOT__idataout 
						      >> 0xcU))) 
					   & (vlTOPp->cpu_tst__DOT__idataout 
					      >> 0x1eU))
					   ? 0xdU : 
					  (7U & (vlTOPp->cpu_tst__DOT__idataout 
						 >> 0xcU))));
		    }
		}
	    } else {
		if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
			      >> 3U)))) {
		    if ((1U & (~ ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__op) 
				  >> 2U)))) {
			vlTOPp->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__memtoreg = 1U;
			vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
		    }
		}
	    }
	}
    }
    vlTOPp->cpu_tst__DOT__datamem__DOT__memin = ((0U 
						  == 
						  (3U 
						   & (vlTOPp->cpu_tst__DOT__idataout 
						      >> 0xcU)))
						  ? 
						 ((0xff000000U 
						   & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
						      << 0x18U)) 
						  | ((0xff0000U 
						      & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
							 << 0x10U)) 
						     | ((0xff00U 
							 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
							    << 8U)) 
							| (0xffU 
							   & vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data))))
						  : 
						 ((2U 
						   == 
						   (3U 
						    & (vlTOPp->cpu_tst__DOT__idataout 
						       >> 0xcU)))
						   ? vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data
						   : 
						  ((0xffff0000U 
						    & (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data 
						       << 0x10U)) 
						   | (0xffffU 
						      & vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data))));
    vlTOPp->cpu_tst__DOT__daddr = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr)
				    ? (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data 
				       + ((0xfffff000U 
					   & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlTOPp->cpu_tst__DOT__idataout 
								      >> 0x1fU)))) 
					      << 0xcU)) 
					  | ((0xfe0U 
					      & (vlTOPp->cpu_tst__DOT__idataout 
						 >> 0x14U)) 
					     | (0x1fU 
						& (vlTOPp->cpu_tst__DOT__idataout 
						   >> 7U)))))
				    : (vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data 
				       + ((0xfffff000U 
					   & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlTOPp->cpu_tst__DOT__idataout 
								      >> 0x1fU)))) 
					      << 0xcU)) 
					  | (0xfffU 
					     & (vlTOPp->cpu_tst__DOT__idataout 
						>> 0x14U)))));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__alua = ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluasrc)
					       ? vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r
					       : vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa 
	= (1U & (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr) 
		  >> 3U) | ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr) 
			    >> 1U)));
    // ALWAYS at src/cpu.v:677
    vlTOPp->cpu_tst__DOT__mycpu__DOT__imm = ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
					      ? ((2U 
						  & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
						  ? vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI
						  : 
						 ((1U 
						   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
						   ? vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI
						   : 
						  ((0xfff00000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->cpu_tst__DOT__idataout 
									       >> 0x1fU)))) 
						       << 0x14U)) 
						   | ((0xff000U 
						       & vlTOPp->cpu_tst__DOT__idataout) 
						      | ((0x800U 
							  & (vlTOPp->cpu_tst__DOT__idataout 
							     >> 9U)) 
							 | (0x7feU 
							    & (vlTOPp->cpu_tst__DOT__idataout 
							       >> 0x14U)))))))
					      : ((2U 
						  & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
						  ? 
						 ((1U 
						   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
						   ? 
						  ((0xfffff000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->cpu_tst__DOT__idataout 
									       >> 0x1fU)))) 
						       << 0xcU)) 
						   | ((0x800U 
						       & (vlTOPp->cpu_tst__DOT__idataout 
							  << 4U)) 
						      | ((0x7e0U 
							  & (vlTOPp->cpu_tst__DOT__idataout 
							     >> 0x14U)) 
							 | (0x1eU 
							    & (vlTOPp->cpu_tst__DOT__idataout 
							       >> 7U)))))
						   : 
						  ((0xfffff000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlTOPp->cpu_tst__DOT__idataout 
									       >> 0x1fU)))) 
						       << 0xcU)) 
						   | ((0xfe0U 
						       & (vlTOPp->cpu_tst__DOT__idataout 
							  >> 0x14U)) 
						      | (0x1fU 
							 & (vlTOPp->cpu_tst__DOT__idataout 
							    >> 7U)))))
						  : 
						 ((1U 
						   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__extop))
						   ? 
						  (0xfffff000U 
						   & vlTOPp->cpu_tst__DOT__idataout)
						   : vlTOPp->cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI)));
    vlTOPp->cpu_tst__DOT__datamem__DOT__wordout = (0xffffU 
						   & ((2U 
						       & vlTOPp->cpu_tst__DOT__daddr)
						       ? 
						      (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
						       >> 0x10U)
						       : vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout));
    vlTOPp->cpu_tst__DOT__datamem__DOT__byteout = (0xffU 
						   & ((2U 
						       & vlTOPp->cpu_tst__DOT__daddr)
						       ? 
						      ((1U 
							& vlTOPp->cpu_tst__DOT__daddr)
						        ? 
						       (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
							>> 0x18U)
						        : 
						       (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
							>> 0x10U))
						       : 
						      ((1U 
							& vlTOPp->cpu_tst__DOT__daddr)
						        ? 
						       (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
							>> 8U)
						        : vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout)));
    // ALWAYS at src/cpu.v:201
    if (vlTOPp->cpu_tst__DOT__mycpu__DOT__memwr) {
	if ((0U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
			  >> 0xcU)))) {
	    vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		= ((0xeU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		   | (0U == (3U & vlTOPp->cpu_tst__DOT__daddr)));
	    vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		= ((0xdU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		   | ((1U == (3U & vlTOPp->cpu_tst__DOT__daddr)) 
		      << 1U));
	    vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		= ((0xbU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		   | ((2U == (3U & vlTOPp->cpu_tst__DOT__daddr)) 
		      << 2U));
	    vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		= ((7U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		   | ((3U == (3U & vlTOPp->cpu_tst__DOT__daddr)) 
		      << 3U));
	} else {
	    if ((1U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
			      >> 0xcU)))) {
		vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		    = ((0xeU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		       | (1U & (~ (vlTOPp->cpu_tst__DOT__daddr 
				   >> 1U))));
		vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		    = ((0xdU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		       | (2U & ((~ (vlTOPp->cpu_tst__DOT__daddr 
				    >> 1U)) << 1U)));
		vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		    = ((0xbU & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		       | (4U & (vlTOPp->cpu_tst__DOT__daddr 
				<< 1U)));
		vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		    = ((7U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask)) 
		       | (8U & (vlTOPp->cpu_tst__DOT__daddr 
				<< 2U)));
	    } else {
		vlTOPp->cpu_tst__DOT__datamem__DOT__wmask 
		    = ((2U == (7U & (vlTOPp->cpu_tst__DOT__idataout 
				     >> 0xcU))) ? 0xfU
		        : 0U);
	    }
	}
    } else {
	vlTOPp->cpu_tst__DOT__datamem__DOT__wmask = 0U;
    }
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
	= ((8U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	    ? VL_NEGATE_I((IData)((1U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
					 >> 0x1fU))))
	    : 0U);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__alub = ((2U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc))
					       ? 4U
					       : ((1U 
						   & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__alubsrc))
						   ? vlTOPp->cpu_tst__DOT__mycpu__DOT__imm
						   : vlTOPp->cpu_tst__DOT__mycpu__DOT__rs2data));
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
	= ((0xffffff00U & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
	   | (0xffU & ((1U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
		        ? vlTOPp->cpu_tst__DOT__datamem__DOT__memin
		        : vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout)));
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
	= ((0xffff00ffU & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
	   | (0xff00U & (((2U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
			   ? (vlTOPp->cpu_tst__DOT__datamem__DOT__memin 
			      >> 8U) : (vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
					>> 8U)) << 8U)));
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
	= ((0xff00ffffU & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
	   | (0xff0000U & (((4U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
			     ? (vlTOPp->cpu_tst__DOT__datamem__DOT__memin 
				>> 0x10U) : (vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
					     >> 0x10U)) 
			   << 0x10U)));
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
	= ((0xffffffU & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
	   | (0xff000000U & (((8U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
			       ? (vlTOPp->cpu_tst__DOT__datamem__DOT__memin 
				  >> 0x18U) : (vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
					       >> 0x18U)) 
			     << 0x18U)));
    // ALWAYS at src/cpu.v:456
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
	= ((0x10U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
	    ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	        ? ((0xffff0000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
				   << 0x10U)) | (0xffffU 
						 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
						    >> 0x10U)))
	        : (0xffff0000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
				  << 0x10U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__alua);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin 
	= (VL_NEGATE_I((IData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))) 
	   ^ vlTOPp->cpu_tst__DOT__mycpu__DOT__alub);
    // ALWAYS at src/cpu.v:467
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
	= ((8U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
	    ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	        ? ((0xff000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
				   << 0x18U)) | (0xffffffU 
						 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
						    >> 8U)))
	        : (0xffffff00U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
				  << 8U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
	= ((vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
	    + vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin) 
	   + (IData)((QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))));
    // ALWAYS at src/cpu.v:478
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
	= ((4U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
	    ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	        ? ((0xf0000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
				   << 0x1cU)) | (0xfffffffU 
						 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
						    >> 4U)))
	        : (0xfffffff0U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
				  << 4U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__less = (1U & 
					      ((8U 
						& (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
					        ? ((IData)(
							   (VL_ULL(1) 
							    & ((((QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__alua)) 
								 + (QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin))) 
								+ (QData)((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))) 
							       >> 0x20U))) 
						   ^ (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))
					        : (
						   (((vlTOPp->cpu_tst__DOT__mycpu__DOT__alua 
						      >> 0x1fU) 
						     ^ ~ 
						     (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin 
						      >> 0x1fU)) 
						    & ((vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
							^ vlTOPp->cpu_tst__DOT__mycpu__DOT__alua) 
						       >> 0x1fU)) 
						   ^ 
						   (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
						    >> 0x1fU))));
    // ALWAYS at src/cpu.v:489
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
	= ((2U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
	    ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	        ? ((0xc0000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
				   << 0x1eU)) | (0x3fffffffU 
						 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
						    >> 2U)))
	        : (0xfffffffcU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
				  << 2U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out);
    // ALWAYS at src/cpu.v:520
    vlTOPp->__Vtableidx1 = ((0x10U & ((~ (IData)((0U 
						  != vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout))) 
				      << 4U)) | (((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__less) 
						  << 3U) 
						 | (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__branch)));
    vlTOPp->cpu_tst__DOT__mycpu__DOT__pcasrc = vlTOPp->__Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc
	[vlTOPp->__Vtableidx1];
    vlTOPp->cpu_tst__DOT__mycpu__DOT__pcbsrc = vlTOPp->__Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc
	[vlTOPp->__Vtableidx1];
    // ALWAYS at src/cpu.v:500
    vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout 
	= ((1U & vlTOPp->cpu_tst__DOT__mycpu__DOT__alub)
	    ? ((4U & (IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__aluctr))
	        ? ((0x80000000U & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
				   << 0x1fU)) | (0x7fffffffU 
						 & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
						    >> 1U)))
	        : (0xfffffffeU & (vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
				  << 1U))) : vlTOPp->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out);
    vlTOPp->cpu_tst__DOT__mycpu__DOT__nextpc = ((0U 
						 != vlTOPp->cpu_tst__DOT__idataout)
						 ? 
						(((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__pcasrc)
						   ? 
						  (0xfffffffeU 
						   & vlTOPp->cpu_tst__DOT__mycpu__DOT__imm)
						   : 4U) 
						 + 
						 ((IData)(vlTOPp->cpu_tst__DOT__mycpu__DOT__pcbsrc)
						   ? 
						  (0xfffffffeU 
						   & vlTOPp->cpu_tst__DOT__mycpu__DOT__rs1data)
						   : vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r))
						 : vlTOPp->cpu_tst__DOT__mycpu__DOT__pc_r);
}

VL_INLINE_OPT void SingleRiscv::_multiclk__TOP__5(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_multiclk__TOP__5\n"); );
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->cpu_tst__DOT__datamem__DOT__wordout = (0xffffU 
						   & ((2U 
						       & vlTOPp->cpu_tst__DOT__daddr)
						       ? 
						      (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
						       >> 0x10U)
						       : vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout));
    vlTOPp->cpu_tst__DOT__datamem__DOT__byteout = (0xffU 
						   & ((2U 
						       & vlTOPp->cpu_tst__DOT__daddr)
						       ? 
						      ((1U 
							& vlTOPp->cpu_tst__DOT__daddr)
						        ? 
						       (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
							>> 0x18U)
						        : 
						       (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
							>> 0x10U))
						       : 
						      ((1U 
							& vlTOPp->cpu_tst__DOT__daddr)
						        ? 
						       (vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout 
							>> 8U)
						        : vlTOPp->cpu_tst__DOT__datamem__DOT__dwordout)));
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
	= ((0xffffff00U & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
	   | (0xffU & ((1U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
		        ? vlTOPp->cpu_tst__DOT__datamem__DOT__memin
		        : vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout)));
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
	= ((0xffff00ffU & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
	   | (0xff00U & (((2U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
			   ? (vlTOPp->cpu_tst__DOT__datamem__DOT__memin 
			      >> 8U) : (vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
					>> 8U)) << 8U)));
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
	= ((0xff00ffffU & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
	   | (0xff0000U & (((4U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
			     ? (vlTOPp->cpu_tst__DOT__datamem__DOT__memin 
				>> 0x10U) : (vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
					     >> 0x10U)) 
			   << 0x10U)));
    vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
	= ((0xffffffU & vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
	   | (0xff000000U & (((8U & (IData)(vlTOPp->cpu_tst__DOT__datamem__DOT__wmask))
			       ? (vlTOPp->cpu_tst__DOT__datamem__DOT__memin 
				  >> 0x18U) : (vlTOPp->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
					       >> 0x18U)) 
			     << 0x18U)));
}

void SingleRiscv::_eval(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_eval\n"); );
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->clk)) & (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    if (((IData)(vlTOPp->clk) ^ (IData)(vlTOPp->__Vclklast__TOP__clk))) {
	vlTOPp->_multiclk__TOP__5(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void SingleRiscv::_eval_initial(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_eval_initial\n"); );
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void SingleRiscv::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::final\n"); );
    // Variables
    SingleRiscv__Syms* __restrict vlSymsp = this->__VlSymsp;
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void SingleRiscv::_eval_settle(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_eval_settle\n"); );
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__4(vlSymsp);
}

VL_INLINE_OPT QData SingleRiscv::_change_request(SingleRiscv__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_change_request\n"); );
    SingleRiscv* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void SingleRiscv::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
	Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
	Verilated::overWidthError("reset");}
}
#endif // VL_DEBUG

void SingleRiscv::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    testcase = VL_RAND_RESET_Q(64);
    dbg_pc = VL_RAND_RESET_I(32);
    dbgregs_0 = VL_RAND_RESET_I(32);
    dbgregs_1 = VL_RAND_RESET_I(32);
    dbgregs_2 = VL_RAND_RESET_I(32);
    dbgregs_3 = VL_RAND_RESET_I(32);
    dbgregs_4 = VL_RAND_RESET_I(32);
    dbgregs_5 = VL_RAND_RESET_I(32);
    dbgregs_6 = VL_RAND_RESET_I(32);
    dbgregs_7 = VL_RAND_RESET_I(32);
    dbgregs_8 = VL_RAND_RESET_I(32);
    dbgregs_9 = VL_RAND_RESET_I(32);
    dbgregs_10 = VL_RAND_RESET_I(32);
    dbgregs_11 = VL_RAND_RESET_I(32);
    dbgregs_12 = VL_RAND_RESET_I(32);
    dbgregs_13 = VL_RAND_RESET_I(32);
    dbgregs_14 = VL_RAND_RESET_I(32);
    dbgregs_15 = VL_RAND_RESET_I(32);
    dbgregs_16 = VL_RAND_RESET_I(32);
    dbgregs_17 = VL_RAND_RESET_I(32);
    dbgregs_18 = VL_RAND_RESET_I(32);
    dbgregs_19 = VL_RAND_RESET_I(32);
    dbgregs_20 = VL_RAND_RESET_I(32);
    dbgregs_21 = VL_RAND_RESET_I(32);
    dbgregs_22 = VL_RAND_RESET_I(32);
    dbgregs_23 = VL_RAND_RESET_I(32);
    dbgregs_24 = VL_RAND_RESET_I(32);
    dbgregs_25 = VL_RAND_RESET_I(32);
    dbgregs_26 = VL_RAND_RESET_I(32);
    dbgregs_27 = VL_RAND_RESET_I(32);
    dbgregs_28 = VL_RAND_RESET_I(32);
    dbgregs_29 = VL_RAND_RESET_I(32);
    dbgregs_30 = VL_RAND_RESET_I(32);
    dbgregs_31 = VL_RAND_RESET_I(32);
    done = VL_RAND_RESET_I(1);
    wb = VL_RAND_RESET_I(1);
    cpu_tst__DOT__idataout = VL_RAND_RESET_I(32);
    cpu_tst__DOT__daddr = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__pc_r = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__dbg_pc_r = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__nextpc = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__rs1data = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__rs2data = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__op = VL_RAND_RESET_I(7);
    cpu_tst__DOT__mycpu__DOT__imm = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__alua = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__alub = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__less = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__extop = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__regwr = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__aluasrc = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__alubsrc = VL_RAND_RESET_I(2);
    cpu_tst__DOT__mycpu__DOT__aluctr = VL_RAND_RESET_I(4);
    cpu_tst__DOT__mycpu__DOT__branch = VL_RAND_RESET_I(3);
    cpu_tst__DOT__mycpu__DOT__memtoreg = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__memwr = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__pcasrc = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__pcbsrc = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__wb_r = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }}
    cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa = VL_RAND_RESET_I(1);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out = VL_RAND_RESET_I(32);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<65536; ++__Vi0) {
	    cpu_tst__DOT__instructions__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    cpu_tst__DOT__datamem__DOT__memin = VL_RAND_RESET_I(32);
    cpu_tst__DOT__datamem__DOT__wmask = VL_RAND_RESET_I(4);
    cpu_tst__DOT__datamem__DOT__byteout = VL_RAND_RESET_I(8);
    cpu_tst__DOT__datamem__DOT__wordout = VL_RAND_RESET_I(16);
    cpu_tst__DOT__datamem__DOT__dwordout = VL_RAND_RESET_I(32);
    cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout = VL_RAND_RESET_I(32);
    cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<32768; ++__Vi0) {
	    cpu_tst__DOT__datamem__DOT__mymem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vtableidx1 = VL_RAND_RESET_I(5);
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[0] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[1] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[2] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[3] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[4] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[5] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[6] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[7] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[8] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[9] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[10] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[11] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[12] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[13] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[14] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[15] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[16] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[17] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[18] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[19] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[20] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[21] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[22] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[23] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[24] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[25] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[26] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[27] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[28] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[29] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[30] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcasrc[31] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[0] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[1] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[2] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[3] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[4] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[5] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[6] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[7] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[8] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[9] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[10] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[11] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[12] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[13] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[14] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[15] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[16] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[17] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[18] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[19] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[20] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[21] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[22] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[23] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[24] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[25] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[26] = 1U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[27] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[28] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[29] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[30] = 0U;
    __Vtable1_cpu_tst__DOT__mycpu__DOT__pcbsrc[31] = 0U;
    __Vclklast__TOP__clk = VL_RAND_RESET_I(1);
}
