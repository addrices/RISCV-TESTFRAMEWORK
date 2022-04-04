// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See SingleRiscv.h for the primary calling header

#include "verilated.h"

#include "SingleRiscv___024root.h"

VL_ATTR_COLD void SingleRiscv___024root___initial__TOP__1(SingleRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SingleRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv___024root___initial__TOP__1\n"); );
    // Body
    vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs[0U] = 0U;
}

extern const VlUnpacked<CData/*0:0*/, 32> SingleRiscv__ConstPool__TABLE_h23d16035_0;
extern const VlUnpacked<CData/*0:0*/, 32> SingleRiscv__ConstPool__TABLE_hf160ac83_0;

VL_ATTR_COLD void SingleRiscv___024root___settle__TOP__4(SingleRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SingleRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv___024root___settle__TOP__4\n"); );
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
    // Body
    vlSelf->dbg_pc = vlSelf->cpu_tst__DOT__mycpu__DOT__dbg_pc_r;
    vlSelf->wb = vlSelf->cpu_tst__DOT__mycpu__DOT__wb_r;
    vlSelf->done = (0xdead10ccU == vlSelf->cpu_tst__DOT__idataout);
    cpu_tst__DOT__mycpu__DOT__immgenImpl__DOT__immI 
        = (((- (IData)((vlSelf->cpu_tst__DOT__idataout 
                        >> 0x1fU))) << 0xcU) | (vlSelf->cpu_tst__DOT__idataout 
                                                >> 0x14U));
    cpu_tst__DOT__mycpu__DOT__op = (0x7fU & vlSelf->cpu_tst__DOT__idataout);
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
    cpu_tst__DOT__mycpu__DOT__rs2data = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [(0x1fU & (vlSelf->cpu_tst__DOT__idataout >> 0x14U))];
    cpu_tst__DOT__mycpu__DOT__rs1data = vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs
        [(0x1fU & (vlSelf->cpu_tst__DOT__idataout >> 0xfU))];
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

VL_ATTR_COLD void SingleRiscv___024root___eval_initial(SingleRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SingleRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv___024root___eval_initial\n"); );
    // Body
    SingleRiscv___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void SingleRiscv___024root___eval_settle(SingleRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SingleRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv___024root___eval_settle\n"); );
    // Body
    SingleRiscv___024root___settle__TOP__4(vlSelf);
}

VL_ATTR_COLD void SingleRiscv___024root___final(SingleRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SingleRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv___024root___final\n"); );
}

VL_ATTR_COLD void SingleRiscv___024root___ctor_var_reset(SingleRiscv___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    SingleRiscv__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    SingleRiscv___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->testcase = VL_RAND_RESET_Q(64);
    vlSelf->dbg_pc = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_0 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_1 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_2 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_3 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_4 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_5 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_6 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_7 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_8 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_9 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_10 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_11 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_12 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_13 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_14 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_15 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_16 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_17 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_18 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_19 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_20 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_21 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_22 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_23 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_24 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_25 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_26 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_27 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_28 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_29 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_30 = VL_RAND_RESET_I(32);
    vlSelf->dbgregs_31 = VL_RAND_RESET_I(32);
    vlSelf->done = VL_RAND_RESET_I(1);
    vlSelf->wb = VL_RAND_RESET_I(1);
    vlSelf->cpu_tst__DOT__idataout = VL_RAND_RESET_I(32);
    vlSelf->cpu_tst__DOT__daddr = VL_RAND_RESET_I(32);
    vlSelf->cpu_tst__DOT__mycpu__DOT__pc_r = VL_RAND_RESET_I(32);
    vlSelf->cpu_tst__DOT__mycpu__DOT__dbg_pc_r = VL_RAND_RESET_I(32);
    vlSelf->cpu_tst__DOT__mycpu__DOT__nextpc = VL_RAND_RESET_I(32);
    vlSelf->cpu_tst__DOT__mycpu__DOT__alua = VL_RAND_RESET_I(32);
    vlSelf->cpu_tst__DOT__mycpu__DOT__alub = VL_RAND_RESET_I(32);
    vlSelf->cpu_tst__DOT__mycpu__DOT__less = VL_RAND_RESET_I(1);
    vlSelf->cpu_tst__DOT__mycpu__DOT__regwr = VL_RAND_RESET_I(1);
    vlSelf->cpu_tst__DOT__mycpu__DOT__aluctr = VL_RAND_RESET_I(4);
    vlSelf->cpu_tst__DOT__mycpu__DOT__memtoreg = VL_RAND_RESET_I(1);
    vlSelf->cpu_tst__DOT__mycpu__DOT__memwr = VL_RAND_RESET_I(1);
    vlSelf->cpu_tst__DOT__mycpu__DOT__wb_r = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->cpu_tst__DOT__mycpu__DOT__myregfile__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu_tst__DOT__mycpu__DOT__myalu__DOT__adderout = VL_RAND_RESET_I(32);
    vlSelf->cpu_tst__DOT__mycpu__DOT__myalu__DOT__shiftout = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->cpu_tst__DOT__instructions__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->cpu_tst__DOT__datamem__DOT__memin = VL_RAND_RESET_I(32);
    vlSelf->cpu_tst__DOT__datamem__DOT__wmask = VL_RAND_RESET_I(4);
    vlSelf->cpu_tst__DOT__datamem__DOT__byteout = VL_RAND_RESET_I(8);
    vlSelf->cpu_tst__DOT__datamem__DOT__wordout = VL_RAND_RESET_I(16);
    vlSelf->cpu_tst__DOT__datamem__DOT__dwordout = VL_RAND_RESET_I(32);
    vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempout = VL_RAND_RESET_I(32);
    vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__tempin = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<32768; ++__Vi0) {
        vlSelf->cpu_tst__DOT__datamem__DOT__mymem__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
}
