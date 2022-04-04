// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See SingleRiscv.h for the primary calling header

#include "verilated.h"

#include "SingleRiscv___024root.h"

VL_INLINE_OPT void SingleRiscv___024root___sequent__TOP__2(SingleRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SingleRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv___024root___sequent__TOP__2\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h9359f800__0;
    VlWide<4>/*127:0*/ __Vtemp_h28514897__0;
    // Body
    if (VL_UNLIKELY(vlSelf->reset)) {
        __Vtemp_h9359f800__0[0U] = 0x2e686578U;
        __Vtemp_h9359f800__0[1U] = (IData)(vlSelf->testcase);
        __Vtemp_h9359f800__0[2U] = (IData)((vlSelf->testcase 
                                            >> 0x20U));
        VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(3, __Vtemp_h9359f800__0)
                     ,  &(vlSelf->cpu_tst__DOT__instructions__DOT__ram)
                     , 0, ~0ULL);
        __Vtemp_h28514897__0[0U] = 0x2e686578U;
        __Vtemp_h28514897__0[1U] = (0x5f64U | ((IData)(vlSelf->testcase) 
                                               << 0x10U));
        __Vtemp_h28514897__0[2U] = (((IData)(vlSelf->testcase) 
                                     >> 0x10U) | ((IData)(
                                                          (vlSelf->testcase 
                                                           >> 0x20U)) 
                                                  << 0x10U));
        __Vtemp_h28514897__0[3U] = ((IData)((vlSelf->testcase 
                                             >> 0x20U)) 
                                    >> 0x10U);
        VL_READMEM_N(true, 32, 32768, 0, VL_CVT_PACK_STR_NW(4, __Vtemp_h28514897__0)
                     ,  &(vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram)
                     , 0, ~0ULL);
        VL_WRITEF("~~~ Begin test case %s ~~~\n",64,
                  vlSelf->testcase);
    }
    if ((1U & (~ (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__memwr)))) {
        vlSelf->cpu_tst__DOT__datamem__DOT__dwordout 
            = vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram
            [(0x7fffU & (vlSelf->cpu_tst__DOT__daddr 
                         >> 2U))];
    }
    if (vlSelf->cpu_tst__DOT__mycpu__DOT__memwr) {
        vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
            = vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram
            [(0x7fffU & (vlSelf->cpu_tst__DOT__daddr 
                         >> 2U))];
    }
}

extern const VlUnpacked<CData/*0:0*/, 32> SingleRiscv__ConstPool__TABLE_h23d16035_0;
extern const VlUnpacked<CData/*0:0*/, 32> SingleRiscv__ConstPool__TABLE_hf160ac83_0;

VL_INLINE_OPT void SingleRiscv___024root___sequent__TOP__3(SingleRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SingleRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv___024root___sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__rs1data;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__rs2data;
    CData/*6:0*/ cpu_tst__DOT__mycpu__DOT__op;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__imm;
    CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__extop;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__aluasrc;
    CData/*1:0*/ cpu_tst__DOT__mycpu__DOT__alubsrc;
    CData/*2:0*/ cpu_tst__DOT__mycpu__DOT__branch;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__pcasrc;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__pcbsrc;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin;
    CData/*0:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out;
    IData/*31:0*/ cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin;
    CData/*4:0*/ __Vtableidx1;
    CData/*4:0*/ __Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0;
    IData/*31:0*/ __Vdlyvval__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0;
    SData/*14:0*/ __Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    // Body
    __Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 = 0U;
    __Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 = 0U;
    if (vlSelf->cpu_tst__DOT__mycpu__DOT__memwr) {
        __Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 
            = vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin;
        __Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 = 1U;
        __Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0 
            = (0x7fffU & (vlSelf->cpu_tst__DOT__daddr 
                          >> 2U));
    }
    if ((1U & (~ (IData)(vlSelf->reset)))) {
        vlSelf->cpu_tst__DOT__mycpu__DOT__dbg_pc_r 
            = vlSelf->cpu_tst__DOT__mycpu__DOT__pc_r;
    }
    vlSelf->cpu_tst__DOT__mycpu__DOT__wb_r = ((~ (IData)(vlSelf->reset)) 
                                              & (0U 
                                                 != vlSelf->cpu_tst__DOT__idataout));
    if (vlSelf->cpu_tst__DOT__mycpu__DOT__regwr) {
        __Vdlyvval__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 
            = ((0U == (0x1fU & (vlSelf->cpu_tst__DOT__idataout 
                                >> 7U))) ? 0U : ((IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__memtoreg)
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSelf->cpu_tst__DOT__idataout)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSelf->cpu_tst__DOT__idataout)
                                                    ? vlSelf->cpu_tst__DOT__datamem__DOT__dwordout
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->cpu_tst__DOT__idataout)
                                                     ? (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__wordout)
                                                     : (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__byteout)))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSelf->cpu_tst__DOT__idataout)
                                                    ? vlSelf->cpu_tst__DOT__datamem__DOT__dwordout
                                                    : 
                                                   ((0x1000U 
                                                     & vlSelf->cpu_tst__DOT__idataout)
                                                     ? 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->cpu_tst__DOT__datamem__DOT__wordout) 
                                                                     >> 0xfU)))) 
                                                      << 0x10U) 
                                                     | (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__wordout))
                                                     : 
                                                    (((- (IData)(
                                                                 (1U 
                                                                  & ((IData)(vlSelf->cpu_tst__DOT__datamem__DOT__byteout) 
                                                                     >> 7U)))) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__byteout)))))
                                                  : 
                                                 ((4U 
                                                   & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                   ? 
                                                  ((2U 
                                                    & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                     ? 
                                                    (vlSelf->cpu_tst__DOT__mycpu__DOT__alua 
                                                     & vlSelf->cpu_tst__DOT__mycpu__DOT__alub)
                                                     : 
                                                    (vlSelf->cpu_tst__DOT__mycpu__DOT__alua 
                                                     | vlSelf->cpu_tst__DOT__mycpu__DOT__alub))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                     ? vlSelf->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout
                                                     : 
                                                    (vlSelf->cpu_tst__DOT__mycpu__DOT__alua 
                                                     ^ vlSelf->cpu_tst__DOT__mycpu__DOT__alub)))
                                                   : 
                                                  ((2U 
                                                    & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                    ? 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                     ? vlSelf->cpu_tst__DOT__mycpu__DOT__alub
                                                     : (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__less))
                                                    : 
                                                   ((1U 
                                                     & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                     ? vlSelf->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout
                                                     : vlSelf->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout)))));
        __Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 = 1U;
        __Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0 
            = (0x1fU & (vlSelf->cpu_tst__DOT__idataout 
                        >> 7U));
    }
    if (__Vdlyvset__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0) {
        vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram[__Vdlyvdim0__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0] 
            = __Vdlyvval__cpu_tst__DOT__datamem__DOT__mymem__DOT__ram__v0;
    }
    if (__Vdlyvset__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0) {
        vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs[__Vdlyvdim0__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0] 
            = __Vdlyvval__cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs__v0;
    }
    vlSelf->dbg_pc = vlSelf->cpu_tst__DOT__mycpu__DOT__dbg_pc_r;
    vlSelf->cpu_tst__DOT__mycpu__DOT__pc_r = ((IData)(vlSelf->reset)
                                               ? 0x80000000U
                                               : vlSelf->cpu_tst__DOT__mycpu__DOT__nextpc);
    vlSelf->wb = vlSelf->cpu_tst__DOT__mycpu__DOT__wb_r;
    vlSelf->dbgregs_0 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0U];
    vlSelf->dbgregs_1 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [1U];
    vlSelf->dbgregs_2 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [2U];
    vlSelf->dbgregs_3 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [3U];
    vlSelf->dbgregs_4 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [4U];
    vlSelf->dbgregs_5 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [5U];
    vlSelf->dbgregs_6 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [6U];
    vlSelf->dbgregs_7 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [7U];
    vlSelf->dbgregs_8 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [8U];
    vlSelf->dbgregs_9 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [9U];
    vlSelf->dbgregs_10 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xaU];
    vlSelf->dbgregs_11 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xbU];
    vlSelf->dbgregs_12 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xcU];
    vlSelf->dbgregs_13 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xdU];
    vlSelf->dbgregs_14 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xeU];
    vlSelf->dbgregs_15 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0xfU];
    vlSelf->dbgregs_16 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x10U];
    vlSelf->dbgregs_17 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x11U];
    vlSelf->dbgregs_18 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x12U];
    vlSelf->dbgregs_19 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x13U];
    vlSelf->dbgregs_20 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x14U];
    vlSelf->dbgregs_21 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x15U];
    vlSelf->dbgregs_22 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x16U];
    vlSelf->dbgregs_23 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x17U];
    vlSelf->dbgregs_24 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x18U];
    vlSelf->dbgregs_25 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x19U];
    vlSelf->dbgregs_26 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1aU];
    vlSelf->dbgregs_27 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1bU];
    vlSelf->dbgregs_28 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1cU];
    vlSelf->dbgregs_29 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1dU];
    vlSelf->dbgregs_30 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1eU];
    vlSelf->dbgregs_31 = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [0x1fU];
    vlSelf->cpu_tst__DOT__idataout = vlSelf->cpu_tst__DOT__instructions__DOT__ram
        [(0xffffU & (((IData)(vlSelf->reset) ? 0U : vlSelf->cpu_tst__DOT__mycpu__DOT__nextpc) 
                     >> 2U))];
    vlSelf->done = (0xdead10ccU == vlSelf->cpu_tst__DOT__idataout);
    cpu_tst__DOT__mycpu__DOT__rs2data = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [(0x1fU & (vlSelf->cpu_tst__DOT__idataout >> 0x14U))];
    cpu_tst__DOT__mycpu__DOT__rs1data = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [(0x1fU & (vlSelf->cpu_tst__DOT__idataout >> 0xfU))];
    cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI 
        = (((- (IData)((vlSelf->cpu_tst__DOT__idataout 
                        >> 0x1fU))) << 0xcU) | (vlSelf->cpu_tst__DOT__idataout 
                                                >> 0x14U));
    cpu_tst__DOT__mycpu__DOT__op = (0x7fU & vlSelf->cpu_tst__DOT__idataout);
    vlSelf->cpu_tst__DOT__datamem__DOT__memin = ((0U 
                                                  == 
                                                  (3U 
                                                   & (vlSelf->cpu_tst__DOT__idataout 
                                                      >> 0xcU)))
                                                  ? 
                                                 ((cpu_tst__DOT__mycpu__DOT__rs2data 
                                                   << 0x18U) 
                                                  | ((0xff0000U 
                                                      & (cpu_tst__DOT__mycpu__DOT__rs2data 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (cpu_tst__DOT__mycpu__DOT__rs2data 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & cpu_tst__DOT__mycpu__DOT__rs2data))))
                                                  : 
                                                 ((2U 
                                                   == 
                                                   (3U 
                                                    & (vlSelf->cpu_tst__DOT__idataout 
                                                       >> 0xcU)))
                                                   ? cpu_tst__DOT__mycpu__DOT__rs2data
                                                   : 
                                                  ((cpu_tst__DOT__mycpu__DOT__rs2data 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & cpu_tst__DOT__mycpu__DOT__rs2data))));
    vlSelf->cpu_tst__DOT__mycpu__DOT__regwr = 0U;
    if ((0x40U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
        if ((0x20U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                    if ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                        vlSelf->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
                    }
                } else if ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                    vlSelf->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
                }
            }
        }
    } else if ((0x20U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
        if ((0x10U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                          >> 3U)))) {
                vlSelf->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
            }
        }
    } else if ((0x10U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
        if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                      >> 3U)))) {
            vlSelf->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
        }
    } else if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                      >> 2U)))) {
            vlSelf->cpu_tst__DOT__mycpu__DOT__regwr = 1U;
        }
    }
    vlSelf->cpu_tst__DOT__mycpu__DOT__memtoreg = 0U;
    if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                  >> 6U)))) {
        if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                      >> 5U)))) {
            if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                                  >> 2U)))) {
                        vlSelf->cpu_tst__DOT__mycpu__DOT__memtoreg = 1U;
                    }
                }
            }
        }
    }
    cpu_tst__DOT__mycpu__DOT__branch = 0U;
    if ((0x40U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
        if ((0x20U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                    if ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                        cpu_tst__DOT__mycpu__DOT__branch = 1U;
                    }
                } else {
                    cpu_tst__DOT__mycpu__DOT__branch 
                        = ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))
                            ? 2U : (4U | ((2U & (vlSelf->cpu_tst__DOT__idataout 
                                                 >> 0xdU)) 
                                          | (1U & (vlSelf->cpu_tst__DOT__idataout 
                                                   >> 0xcU)))));
                }
            }
        }
    }
    vlSelf->cpu_tst__DOT__mycpu__DOT__memwr = 0U;
    if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                  >> 6U)))) {
        if ((0x20U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                                  >> 2U)))) {
                        vlSelf->cpu_tst__DOT__mycpu__DOT__memwr = 1U;
                    }
                }
            }
        }
    }
    cpu_tst__DOT__mycpu__DOT__alubsrc = 0U;
    if ((0x40U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
        if ((0x20U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                          >> 4U)))) {
                if ((8U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                    if ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                        cpu_tst__DOT__mycpu__DOT__alubsrc = 2U;
                        cpu_tst__DOT__mycpu__DOT__aluasrc = 0U;
                        cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
                    } else {
                        cpu_tst__DOT__mycpu__DOT__aluasrc = 0U;
                    }
                } else if ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                    cpu_tst__DOT__mycpu__DOT__alubsrc = 2U;
                    cpu_tst__DOT__mycpu__DOT__aluasrc = 0U;
                    cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
                } else {
                    cpu_tst__DOT__mycpu__DOT__aluasrc = 0U;
                }
                vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr = 0U;
                if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                                  >> 2U)))) {
                        vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr 
                            = ((3U == (3U & (vlSelf->cpu_tst__DOT__idataout 
                                             >> 0xdU)))
                                ? 0xaU : 2U);
                    }
                }
                cpu_tst__DOT__mycpu__DOT__extop = 0U;
                if ((8U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                    if ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                        cpu_tst__DOT__mycpu__DOT__extop = 4U;
                    }
                } else {
                    cpu_tst__DOT__mycpu__DOT__extop 
                        = ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))
                            ? 0U : 3U);
                }
            } else {
                cpu_tst__DOT__mycpu__DOT__aluasrc = 0U;
                vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr = 0U;
                cpu_tst__DOT__mycpu__DOT__extop = 0U;
            }
        } else {
            cpu_tst__DOT__mycpu__DOT__aluasrc = 0U;
            vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr = 0U;
            cpu_tst__DOT__mycpu__DOT__extop = 0U;
        }
    } else {
        if ((0x20U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
            if ((0x10U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                        cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
                    }
                }
            } else if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                                 >> 3U)))) {
                if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                              >> 2U)))) {
                    cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
                }
            }
        } else if ((0x10U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                          >> 3U)))) {
                cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
            }
        } else if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                             >> 3U)))) {
            if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                          >> 2U)))) {
                cpu_tst__DOT__mycpu__DOT__alubsrc = 1U;
            }
        }
        cpu_tst__DOT__mycpu__DOT__aluasrc = 0U;
        if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                      >> 5U)))) {
            if ((0x10U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                        cpu_tst__DOT__mycpu__DOT__aluasrc = 1U;
                    }
                }
            }
        }
        vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr = 0U;
        if ((0x20U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
            if ((0x10U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                        vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr = 3U;
                        cpu_tst__DOT__mycpu__DOT__extop = 0U;
                        cpu_tst__DOT__mycpu__DOT__extop = 1U;
                    } else {
                        vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr 
                            = ((3U == (7U & (vlSelf->cpu_tst__DOT__idataout 
                                             >> 0xcU)))
                                ? 0xaU : ((8U & (vlSelf->cpu_tst__DOT__idataout 
                                                 >> 0x1bU)) 
                                          | (7U & (vlSelf->cpu_tst__DOT__idataout 
                                                   >> 0xcU))));
                        cpu_tst__DOT__mycpu__DOT__extop = 0U;
                    }
                } else {
                    cpu_tst__DOT__mycpu__DOT__extop = 0U;
                }
            } else {
                cpu_tst__DOT__mycpu__DOT__extop = 0U;
                if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                              >> 3U)))) {
                    if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                                  >> 2U)))) {
                        cpu_tst__DOT__mycpu__DOT__extop = 2U;
                    }
                }
            }
        } else if ((0x10U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
            if ((1U & (~ ((IData)(cpu_tst__DOT__mycpu__DOT__op) 
                          >> 3U)))) {
                if ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__op))) {
                    vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr = 0U;
                    cpu_tst__DOT__mycpu__DOT__extop = 0U;
                    cpu_tst__DOT__mycpu__DOT__extop = 1U;
                } else {
                    vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr 
                        = ((3U == (7U & (vlSelf->cpu_tst__DOT__idataout 
                                         >> 0xcU)))
                            ? 0xaU : ((IData)((0x40005000U 
                                               == (0x40007000U 
                                                   & vlSelf->cpu_tst__DOT__idataout)))
                                       ? 0xdU : (7U 
                                                 & (vlSelf->cpu_tst__DOT__idataout 
                                                    >> 0xcU))));
                    cpu_tst__DOT__mycpu__DOT__extop = 0U;
                }
            } else {
                cpu_tst__DOT__mycpu__DOT__extop = 0U;
            }
        } else {
            cpu_tst__DOT__mycpu__DOT__extop = 0U;
        }
    }
    vlSelf->cpu_tst__DOT__daddr = ((IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__memwr)
                                    ? (cpu_tst__DOT__mycpu__DOT__rs1data 
                                       + (((- (IData)(
                                                      (vlSelf->cpu_tst__DOT__idataout 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | ((0xfe0U 
                                              & (vlSelf->cpu_tst__DOT__idataout 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSelf->cpu_tst__DOT__idataout 
                                                   >> 7U)))))
                                    : (cpu_tst__DOT__mycpu__DOT__rs1data 
                                       + (((- (IData)(
                                                      (vlSelf->cpu_tst__DOT__idataout 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | (vlSelf->cpu_tst__DOT__idataout 
                                             >> 0x14U))));
    vlSelf->cpu_tst__DOT__mycpu__DOT__alua = ((IData)(cpu_tst__DOT__mycpu__DOT__aluasrc)
                                               ? vlSelf->cpu_tst__DOT__mycpu__DOT__pc_r
                                               : cpu_tst__DOT__mycpu__DOT__rs1data);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa = (IData)(
                                                       (0U 
                                                        != 
                                                        (0xaU 
                                                         & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))));
    cpu_tst__DOT__mycpu__DOT__imm = ((4U & (IData)(cpu_tst__DOT__mycpu__DOT__extop))
                                      ? ((2U & (IData)(cpu_tst__DOT__mycpu__DOT__extop))
                                          ? cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI
                                          : ((1U & (IData)(cpu_tst__DOT__mycpu__DOT__extop))
                                              ? cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI
                                              : (((- (IData)(
                                                             (vlSelf->cpu_tst__DOT__idataout 
                                                              >> 0x1fU))) 
                                                  << 0x14U) 
                                                 | ((0xff000U 
                                                     & vlSelf->cpu_tst__DOT__idataout) 
                                                    | ((0x800U 
                                                        & (vlSelf->cpu_tst__DOT__idataout 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSelf->cpu_tst__DOT__idataout 
                                                             >> 0x14U)))))))
                                      : ((2U & (IData)(cpu_tst__DOT__mycpu__DOT__extop))
                                          ? ((1U & (IData)(cpu_tst__DOT__mycpu__DOT__extop))
                                              ? (((- (IData)(
                                                             (vlSelf->cpu_tst__DOT__idataout 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0x800U 
                                                     & (vlSelf->cpu_tst__DOT__idataout 
                                                        << 4U)) 
                                                    | ((0x7e0U 
                                                        & (vlSelf->cpu_tst__DOT__idataout 
                                                           >> 0x14U)) 
                                                       | (0x1eU 
                                                          & (vlSelf->cpu_tst__DOT__idataout 
                                                             >> 7U)))))
                                              : (((- (IData)(
                                                             (vlSelf->cpu_tst__DOT__idataout 
                                                              >> 0x1fU))) 
                                                  << 0xcU) 
                                                 | ((0xfe0U 
                                                     & (vlSelf->cpu_tst__DOT__idataout 
                                                        >> 0x14U)) 
                                                    | (0x1fU 
                                                       & (vlSelf->cpu_tst__DOT__idataout 
                                                          >> 7U)))))
                                          : ((1U & (IData)(cpu_tst__DOT__mycpu__DOT__extop))
                                              ? (0xfffff000U 
                                                 & vlSelf->cpu_tst__DOT__idataout)
                                              : cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI)));
    if (vlSelf->cpu_tst__DOT__mycpu__DOT__memwr) {
        if ((0U == (7U & (vlSelf->cpu_tst__DOT__idataout 
                          >> 0xcU)))) {
            vlSelf->cpu_tst__DOT__datamem__DOT__wmask 
                = ((0xcU & (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | (((1U == (3U & vlSelf->cpu_tst__DOT__daddr)) 
                       << 1U) | (0U == (3U & vlSelf->cpu_tst__DOT__daddr))));
            vlSelf->cpu_tst__DOT__datamem__DOT__wmask 
                = ((3U & (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | (((3U == (3U & vlSelf->cpu_tst__DOT__daddr)) 
                       << 3U) | ((2U == (3U & vlSelf->cpu_tst__DOT__daddr)) 
                                 << 2U)));
        } else if ((1U == (7U & (vlSelf->cpu_tst__DOT__idataout 
                                 >> 0xcU)))) {
            vlSelf->cpu_tst__DOT__datamem__DOT__wmask 
                = ((0xcU & (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | ((2U & ((~ (vlSelf->cpu_tst__DOT__daddr 
                                 >> 1U)) << 1U)) | 
                      (1U & (~ (vlSelf->cpu_tst__DOT__daddr 
                                >> 1U)))));
            vlSelf->cpu_tst__DOT__datamem__DOT__wmask 
                = ((3U & (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__wmask)) 
                   | ((8U & (vlSelf->cpu_tst__DOT__daddr 
                             << 2U)) | (4U & (vlSelf->cpu_tst__DOT__daddr 
                                              << 1U))));
        } else {
            vlSelf->cpu_tst__DOT__datamem__DOT__wmask 
                = ((2U == (7U & (vlSelf->cpu_tst__DOT__idataout 
                                 >> 0xcU))) ? 0xfU : 0U);
        }
    } else {
        vlSelf->cpu_tst__DOT__datamem__DOT__wmask = 0U;
    }
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
        = ((8U & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
            ? (- (IData)((vlSelf->cpu_tst__DOT__mycpu__DOT__alua 
                          >> 0x1fU))) : 0U);
    vlSelf->cpu_tst__DOT__mycpu__DOT__alub = ((2U & (IData)(cpu_tst__DOT__mycpu__DOT__alubsrc))
                                               ? 4U
                                               : ((1U 
                                                   & (IData)(cpu_tst__DOT__mycpu__DOT__alubsrc))
                                                   ? cpu_tst__DOT__mycpu__DOT__imm
                                                   : cpu_tst__DOT__mycpu__DOT__rs2data));
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
        = ((0x10U & vlSelf->cpu_tst__DOT__mycpu__DOT__alub)
            ? ((4U & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                ? ((cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
                    << 0x10U) | (vlSelf->cpu_tst__DOT__mycpu__DOT__alua 
                                 >> 0x10U)) : (vlSelf->cpu_tst__DOT__mycpu__DOT__alua 
                                               << 0x10U))
            : vlSelf->cpu_tst__DOT__mycpu__DOT__alua);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin 
        = ((- (IData)((IData)(cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))) 
           ^ vlSelf->cpu_tst__DOT__mycpu__DOT__alub);
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
        = ((8U & vlSelf->cpu_tst__DOT__mycpu__DOT__alub)
            ? ((4U & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                ? ((cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
                    << 0x18U) | (cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
                                 >> 8U)) : (cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out 
                                            << 8U))
            : cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l4out);
    vlSelf->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
        = ((vlSelf->cpu_tst__DOT__mycpu__DOT__alua 
            + cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin) 
           + (IData)((QData)((IData)(cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))));
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
        = ((4U & vlSelf->cpu_tst__DOT__mycpu__DOT__alub)
            ? ((4U & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                ? ((cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
                    << 0x1cU) | (cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
                                 >> 4U)) : (cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out 
                                            << 4U))
            : cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l3out);
    vlSelf->cpu_tst__DOT__mycpu__DOT__less = (1U & 
                                              ((8U 
                                                & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                                                ? ((IData)(
                                                           (1ULL 
                                                            & ((((QData)((IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__alua)) 
                                                                 + (QData)((IData)(cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin))) 
                                                                + (QData)((IData)(cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))) 
                                                               >> 0x20U))) 
                                                   ^ (IData)(cpu_tst__DOT__mycpu__DOT__myalu__DOT__sa))
                                                : (
                                                   ((~ 
                                                     ((vlSelf->cpu_tst__DOT__mycpu__DOT__alua 
                                                       ^ cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderbin) 
                                                      >> 0x1fU)) 
                                                    & ((vlSelf->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
                                                        ^ vlSelf->cpu_tst__DOT__mycpu__DOT__alua) 
                                                       >> 0x1fU)) 
                                                   ^ 
                                                   (vlSelf->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout 
                                                    >> 0x1fU))));
    cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
        = ((2U & vlSelf->cpu_tst__DOT__mycpu__DOT__alub)
            ? ((4U & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                ? ((cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
                    << 0x1eU) | (cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
                                 >> 2U)) : (cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out 
                                            << 2U))
            : cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l2out);
    __Vtableidx1 = ((0x10U & ((~ (IData)((0U != vlSelf->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout))) 
                              << 4U)) | (((IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__less) 
                                          << 3U) | (IData)(cpu_tst__DOT__mycpu__DOT__branch)));
    cpu_tst__DOT__mycpu__DOT__pcasrc = SingleRiscv__ConstPool__TABLE_h23d16035_0
        [__Vtableidx1];
    cpu_tst__DOT__mycpu__DOT__pcbsrc = SingleRiscv__ConstPool__TABLE_hf160ac83_0
        [__Vtableidx1];
    vlSelf->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout 
        = ((1U & vlSelf->cpu_tst__DOT__mycpu__DOT__alub)
            ? ((4U & (IData)(vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr))
                ? ((cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__rin 
                    << 0x1fU) | (cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
                                 >> 1U)) : (cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out 
                                            << 1U))
            : cpu_tst__DOT__mycpu__DOT__myalu__DOT__shifter__DOT__l1out);
    vlSelf->cpu_tst__DOT__mycpu__DOT__nextpc = ((0xdead10ccU 
                                                 != vlSelf->cpu_tst__DOT__idataout)
                                                 ? 
                                                (((IData)(cpu_tst__DOT__mycpu__DOT__pcasrc)
                                                   ? 
                                                  (0xfffffffeU 
                                                   & cpu_tst__DOT__mycpu__DOT__imm)
                                                   : 4U) 
                                                 + 
                                                 ((IData)(cpu_tst__DOT__mycpu__DOT__pcbsrc)
                                                   ? 
                                                  (0xfffffffeU 
                                                   & cpu_tst__DOT__mycpu__DOT__rs1data)
                                                   : vlSelf->cpu_tst__DOT__mycpu__DOT__pc_r))
                                                 : vlSelf->cpu_tst__DOT__mycpu__DOT__pc_r);
}

VL_INLINE_OPT void SingleRiscv___024root___multiclk__TOP__5(SingleRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SingleRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv___024root___multiclk__TOP__5\n"); );
    // Body
    if ((2U & vlSelf->cpu_tst__DOT__daddr)) {
        vlSelf->cpu_tst__DOT__datamem__DOT__wordout 
            = (0xffffU & (vlSelf->cpu_tst__DOT__datamem__DOT__dwordout 
                          >> 0x10U));
        vlSelf->cpu_tst__DOT__datamem__DOT__byteout 
            = (0xffU & ((1U & vlSelf->cpu_tst__DOT__daddr)
                         ? (vlSelf->cpu_tst__DOT__datamem__DOT__dwordout 
                            >> 0x18U) : (vlSelf->cpu_tst__DOT__datamem__DOT__dwordout 
                                         >> 0x10U)));
    } else {
        vlSelf->cpu_tst__DOT__datamem__DOT__wordout 
            = (0xffffU & vlSelf->cpu_tst__DOT__datamem__DOT__dwordout);
        vlSelf->cpu_tst__DOT__datamem__DOT__byteout 
            = (0xffU & ((1U & vlSelf->cpu_tst__DOT__daddr)
                         ? (vlSelf->cpu_tst__DOT__datamem__DOT__dwordout 
                            >> 8U) : vlSelf->cpu_tst__DOT__datamem__DOT__dwordout));
    }
    vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
        = ((0xffff0000U & vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
           | ((0xff00U & (((2U & (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__wmask))
                            ? (vlSelf->cpu_tst__DOT__datamem__DOT__memin 
                               >> 8U) : (vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
                                         >> 8U)) << 8U)) 
              | (0xffU & ((1U & (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__wmask))
                           ? vlSelf->cpu_tst__DOT__datamem__DOT__memin
                           : vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout))));
    vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin 
        = ((0xffffU & vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin) 
           | ((((8U & (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__wmask))
                 ? (vlSelf->cpu_tst__DOT__datamem__DOT__memin 
                    >> 0x18U) : (vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
                                 >> 0x18U)) << 0x18U) 
              | (0xff0000U & (((4U & (IData)(vlSelf->cpu_tst__DOT__datamem__DOT__wmask))
                                ? (vlSelf->cpu_tst__DOT__datamem__DOT__memin 
                                   >> 0x10U) : (vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout 
                                                >> 0x10U)) 
                              << 0x10U))));
}

void SingleRiscv___024root___eval(SingleRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SingleRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        SingleRiscv___024root___sequent__TOP__2(vlSelf);
    }
    if (((~ (IData)(vlSelf->clk)) & (IData)(vlSelf->__Vclklast__TOP__clk))) {
        SingleRiscv___024root___sequent__TOP__3(vlSelf);
    }
    if (((IData)(vlSelf->clk) ^ (IData)(vlSelf->__Vclklast__TOP__clk))) {
        SingleRiscv___024root___multiclk__TOP__5(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

#ifdef VL_DEBUG
void SingleRiscv___024root___eval_debug_assertions(SingleRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SingleRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
