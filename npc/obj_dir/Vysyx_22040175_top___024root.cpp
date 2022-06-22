// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vysyx_22040175_top.h for the primary calling header

#include "Vysyx_22040175_top___024root.h"
#include "Vysyx_22040175_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void pmem_read(long long raddr, long long* rdata);

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP(QData/*63:0*/ raddr, QData/*63:0*/ &rdata) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP\n"); );
    // Body
    long long raddr__Vcvt;
    for (size_t raddr__Vidx = 0; raddr__Vidx < 1; ++raddr__Vidx) raddr__Vcvt = raddr;
    long long rdata__Vcvt;
    pmem_read(raddr__Vcvt, &rdata__Vcvt);
    rdata = rdata__Vcvt;
}

extern "C" void ebreak();

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__ebreak_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__ebreak_TOP\n"); );
    // Body
    ebreak();
}

extern "C" void unknown_inst();

VL_INLINE_OPT void Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__unknown_inst_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__unknown_inst_TOP\n"); );
    // Body
    unknown_inst();
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___sequent__TOP__1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0;
    CData/*0:0*/ __Vdlyvset__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0;
    IData/*31:0*/ __Vdlyvval__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0;
    // Body
    __Vdlyvset__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0 = 0U;
    vlSelf->ysyx_22040175_top__DOT__ena = vlSelf->ysyx_22040175_top__DOT__rst_n;
    if ((((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n) 
          & (IData)(vlSelf->ysyx_22040175_top__DOT__reg_wen)) 
         & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__reg_waddr)))) {
        __Vdlyvval__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0 
            = vlSelf->ysyx_22040175_top__DOT__alu_res;
        __Vdlyvset__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0 = 1U;
        __Vdlyvdim0__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0 
            = vlSelf->ysyx_22040175_top__DOT__reg_waddr;
    }
    vlSelf->pc = ((IData)(vlSelf->ysyx_22040175_top__DOT__rst_n)
                   ? vlSelf->ysyx_22040175_top__DOT__next_pc
                   : 0x80000000U);
    if (__Vdlyvset__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0) {
        vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f[__Vdlyvdim0__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0] 
            = __Vdlyvval__ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f__v0;
    }
    Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__pmem_read_TOP((QData)((IData)(vlSelf->pc)), vlSelf->__Vtask_ysyx_22040175_top__DOT__pmem_read__0__rdata);
    vlSelf->ysyx_22040175_top__DOT__rdata = vlSelf->__Vtask_ysyx_22040175_top__DOT__pmem_read__0__rdata;
    vlSelf->inst = (IData)(vlSelf->ysyx_22040175_top__DOT__rdata);
    if ((0x100073U == vlSelf->inst)) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__ebreak_TOP();
    }
    vlSelf->ysyx_22040175_top__DOT__reg_wen = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 4U)))) {
                if ((8U & vlSelf->inst)) {
                    if ((4U & vlSelf->inst)) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 3U)))) {
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                        }
                    }
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 3U)))) {
            if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                    }
                }
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    vlSelf->ysyx_22040175_top__DOT__reg_wen = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg_waddr = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 4U)))) {
                if ((8U & vlSelf->inst)) {
                    if ((4U & vlSelf->inst)) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                    = (0x1fU & (vlSelf->inst 
                                                >> 7U));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 3U)))) {
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                                = (0x1fU & (vlSelf->inst 
                                            >> 7U));
                        }
                    }
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (vlSelf->inst 
                                        >> 7U));
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 3U)))) {
            if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                            = (0x1fU & (vlSelf->inst 
                                        >> 7U));
                    }
                }
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    vlSelf->ysyx_22040175_top__DOT__reg_waddr 
                        = (0x1fU & (vlSelf->inst >> 7U));
                }
            }
        }
    }
    vlSelf->unknown_code = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((0x10U & vlSelf->inst)) {
                vlSelf->unknown_code = vlSelf->inst;
            } else if ((8U & vlSelf->inst)) {
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & (~ vlSelf->inst))) {
                            vlSelf->unknown_code = vlSelf->inst;
                        }
                    } else {
                        vlSelf->unknown_code = vlSelf->inst;
                    }
                } else {
                    vlSelf->unknown_code = vlSelf->inst;
                }
            } else if ((4U & vlSelf->inst)) {
                vlSelf->unknown_code = vlSelf->inst;
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    if ((1U != (7U & (vlSelf->inst 
                                      >> 0xcU)))) {
                        vlSelf->unknown_code = vlSelf->inst;
                    }
                } else {
                    vlSelf->unknown_code = vlSelf->inst;
                }
            } else {
                vlSelf->unknown_code = vlSelf->inst;
            }
        } else {
            vlSelf->unknown_code = vlSelf->inst;
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((8U & vlSelf->inst)) {
                vlSelf->unknown_code = vlSelf->inst;
            } else if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & (~ vlSelf->inst))) {
                        vlSelf->unknown_code = vlSelf->inst;
                    }
                } else {
                    vlSelf->unknown_code = vlSelf->inst;
                }
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    if ((0U != (7U & (vlSelf->inst 
                                      >> 0xcU)))) {
                        vlSelf->unknown_code = vlSelf->inst;
                    }
                } else {
                    vlSelf->unknown_code = vlSelf->inst;
                }
            } else {
                vlSelf->unknown_code = vlSelf->inst;
            }
        } else {
            vlSelf->unknown_code = vlSelf->inst;
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((8U & vlSelf->inst)) {
            vlSelf->unknown_code = vlSelf->inst;
        } else if ((4U & vlSelf->inst)) {
            if ((2U & vlSelf->inst)) {
                if ((1U & (~ vlSelf->inst))) {
                    vlSelf->unknown_code = vlSelf->inst;
                }
            } else {
                vlSelf->unknown_code = vlSelf->inst;
            }
        } else if ((2U & vlSelf->inst)) {
            if ((1U & vlSelf->inst)) {
                if ((0U != (7U & (vlSelf->inst >> 0xcU)))) {
                    vlSelf->unknown_code = vlSelf->inst;
                }
            } else {
                vlSelf->unknown_code = vlSelf->inst;
            }
        } else {
            vlSelf->unknown_code = vlSelf->inst;
        }
    } else {
        vlSelf->unknown_code = vlSelf->inst;
    }
    vlSelf->ysyx_22040175_top__DOT__branch = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 4U)))) {
                if ((1U & (~ (vlSelf->inst >> 3U)))) {
                    if ((1U & (~ (vlSelf->inst >> 2U)))) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                if ((1U == (7U & (vlSelf->inst 
                                                  >> 0xcU)))) {
                                    vlSelf->ysyx_22040175_top__DOT__branch = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__jump = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 4U)))) {
                if ((8U & vlSelf->inst)) {
                    if ((4U & vlSelf->inst)) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_22040175_top__DOT__jump = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__alu_op = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 4U)))) {
                if ((8U & vlSelf->inst)) {
                    if ((4U & vlSelf->inst)) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_22040175_top__DOT__alu_op 
                                    = ((0U == (7U & 
                                               (vlSelf->inst 
                                                >> 0xcU)))
                                        ? 0xdU : 3U);
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->inst >> 2U)))) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            if ((1U == (7U & (vlSelf->inst 
                                              >> 0xcU)))) {
                                vlSelf->ysyx_22040175_top__DOT__alu_op = 4U;
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 3U)))) {
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                        }
                    }
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        if ((0U == (7U & (vlSelf->inst 
                                          >> 0xcU)))) {
                            vlSelf->ysyx_22040175_top__DOT__alu_op 
                                = ((0U == (vlSelf->inst 
                                           >> 0x19U))
                                    ? 3U : 4U);
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 3U)))) {
            if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                    }
                }
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    if ((0U == (7U & (vlSelf->inst 
                                      >> 0xcU)))) {
                        vlSelf->ysyx_22040175_top__DOT__alu_op = 3U;
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 4U)))) {
                if ((1U & (~ (vlSelf->inst >> 3U)))) {
                    if ((1U & (~ (vlSelf->inst >> 2U)))) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                                    = (0x1fU & (vlSelf->inst 
                                                >> 0xfU));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 3U)))) {
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
                        }
                    }
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                            = (0x1fU & (vlSelf->inst 
                                        >> 0xfU));
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 3U)))) {
            if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->ysyx_22040175_top__DOT__reg1_raddr = 0U;
                    }
                }
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    vlSelf->ysyx_22040175_top__DOT__reg1_raddr 
                        = (0x1fU & (vlSelf->inst >> 0xfU));
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 4U)))) {
                if ((8U & vlSelf->inst)) {
                    if ((4U & vlSelf->inst)) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 2U;
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->inst >> 2U)))) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 3U)))) {
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                        }
                    }
                } else if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 0U;
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 3U)))) {
            if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 3U;
                    }
                }
            } else if ((2U & vlSelf->inst)) {
                if ((1U & vlSelf->inst)) {
                    vlSelf->ysyx_22040175_top__DOT__alu_src_sel = 1U;
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__reg2_raddr = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 4U)))) {
                if ((1U & (~ (vlSelf->inst >> 3U)))) {
                    if ((1U & (~ (vlSelf->inst >> 2U)))) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                    = (0x1fU & (vlSelf->inst 
                                                >> 0x14U));
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 3U)))) {
                if ((1U & (~ (vlSelf->inst >> 2U)))) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_22040175_top__DOT__reg2_raddr 
                                = (0x1fU & (vlSelf->inst 
                                            >> 0x14U));
                        }
                    }
                }
            }
        }
    }
    vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 0U;
    if ((0x40U & vlSelf->inst)) {
        if ((0x20U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 4U)))) {
                if ((8U & vlSelf->inst)) {
                    if ((4U & vlSelf->inst)) {
                        if ((2U & vlSelf->inst)) {
                            if ((1U & vlSelf->inst)) {
                                vlSelf->ysyx_22040175_top__DOT__imm_gen_op 
                                    = ((0U == (7U & 
                                               (vlSelf->inst 
                                                >> 0xcU)))
                                        ? 0U : 3U);
                            }
                        }
                    }
                } else if ((1U & (~ (vlSelf->inst >> 2U)))) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 2U;
                        }
                    }
                }
            }
        }
    } else if ((0x20U & vlSelf->inst)) {
        if ((0x10U & vlSelf->inst)) {
            if ((1U & (~ (vlSelf->inst >> 3U)))) {
                if ((4U & vlSelf->inst)) {
                    if ((2U & vlSelf->inst)) {
                        if ((1U & vlSelf->inst)) {
                            vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 4U;
                        }
                    }
                }
            }
        }
    } else if ((0x10U & vlSelf->inst)) {
        if ((1U & (~ (vlSelf->inst >> 3U)))) {
            if ((4U & vlSelf->inst)) {
                if ((2U & vlSelf->inst)) {
                    if ((1U & vlSelf->inst)) {
                        vlSelf->ysyx_22040175_top__DOT__imm_gen_op = 4U;
                    }
                }
            }
        }
    }
    if ((0U != vlSelf->unknown_code)) {
        Vysyx_22040175_top___024root____Vdpiimwrap_ysyx_22040175_top__DOT__u_ctrl_0__DOT__unknown_inst_TOP();
    }
    vlSelf->ysyx_22040175_top__DOT__reg2_rdata = ((0U 
                                                   == (IData)(vlSelf->ysyx_22040175_top__DOT__reg2_raddr))
                                                   ? 0U
                                                   : 
                                                  vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                                  [vlSelf->ysyx_22040175_top__DOT__reg2_raddr]);
    vlSelf->ysyx_22040175_top__DOT__imm = ((4U & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                            ? ((2U 
                                                & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                ? (
                                                   ((- (IData)(
                                                               (vlSelf->inst 
                                                                >> 0x1fU))) 
                                                    << 7U) 
                                                   | (0x7fU 
                                                      & vlSelf->inst))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                     << 7U) 
                                                    | (0x7fU 
                                                       & vlSelf->inst))
                                                    : 
                                                   (0xfffff000U 
                                                    & vlSelf->inst)))
                                            : ((2U 
                                                & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                     << 0x14U) 
                                                    | ((0xff000U 
                                                        & vlSelf->inst) 
                                                       | ((0x800U 
                                                           & (vlSelf->inst 
                                                              >> 9U)) 
                                                          | (0x7feU 
                                                             & (vlSelf->inst 
                                                                >> 0x14U)))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0x800U 
                                                        & (vlSelf->inst 
                                                           << 4U)) 
                                                       | ((0x7e0U 
                                                           & (vlSelf->inst 
                                                              >> 0x14U)) 
                                                          | (0x1eU 
                                                             & (vlSelf->inst 
                                                                >> 7U))))))
                                                : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_22040175_top__DOT__imm_gen_op))
                                                    ? 
                                                   (((- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | ((0xfe0U 
                                                        & (vlSelf->inst 
                                                           >> 0x14U)) 
                                                       | (0x1fU 
                                                          & (vlSelf->inst 
                                                             >> 7U))))
                                                    : 
                                                   (((- (IData)(
                                                                (vlSelf->inst 
                                                                 >> 0x1fU))) 
                                                     << 0xcU) 
                                                    | (vlSelf->inst 
                                                       >> 0x14U)))));
    vlSelf->ysyx_22040175_top__DOT__alu_src2 = ((2U 
                                                 & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
                                                 ? vlSelf->pc
                                                 : 
                                                ((1U 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
                                                  ? vlSelf->ysyx_22040175_top__DOT__imm
                                                  : vlSelf->ysyx_22040175_top__DOT__reg2_rdata));
    vlSelf->ysyx_22040175_top__DOT__alu_src1 = ((0U 
                                                 == (IData)(vlSelf->ysyx_22040175_top__DOT__reg1_raddr))
                                                 ? 0U
                                                 : 
                                                vlSelf->ysyx_22040175_top__DOT__u_reg_file_0__DOT__reg_f
                                                [vlSelf->ysyx_22040175_top__DOT__reg1_raddr]);
    if ((2U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))) {
        vlSelf->ysyx_22040175_top__DOT__alu_src1 = 
            ((1U & (IData)(vlSelf->ysyx_22040175_top__DOT__alu_src_sel))
              ? vlSelf->ysyx_22040175_top__DOT__imm
              : 4U);
    }
    vlSelf->ysyx_22040175_top__DOT__zero = 0U;
    vlSelf->ysyx_22040175_top__DOT__alu_res = 0U;
    if ((3U == (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        vlSelf->ysyx_22040175_top__DOT__alu_res = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                   + vlSelf->ysyx_22040175_top__DOT__alu_src2);
    } else if ((4U == (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        vlSelf->ysyx_22040175_top__DOT__alu_res = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
        vlSelf->ysyx_22040175_top__DOT__zero = (0U 
                                                == vlSelf->ysyx_22040175_top__DOT__alu_res);
    } else if ((0xdU == (IData)(vlSelf->ysyx_22040175_top__DOT__alu_op))) {
        vlSelf->ysyx_22040175_top__DOT__alu_res = (0xfffffffeU 
                                                   & (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                      + vlSelf->ysyx_22040175_top__DOT__alu_src2));
    } else {
        vlSelf->ysyx_22040175_top__DOT__alu_res = (vlSelf->ysyx_22040175_top__DOT__alu_src1 
                                                   - vlSelf->ysyx_22040175_top__DOT__alu_src2);
        vlSelf->ysyx_22040175_top__DOT__zero = (0U 
                                                == vlSelf->ysyx_22040175_top__DOT__alu_res);
    }
    vlSelf->ysyx_22040175_top__DOT__next_pc = ((IData)(vlSelf->ysyx_22040175_top__DOT__ena)
                                                ? (
                                                   ((IData)(vlSelf->ysyx_22040175_top__DOT__branch) 
                                                    & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__zero)))
                                                    ? 
                                                   (vlSelf->pc 
                                                    + vlSelf->ysyx_22040175_top__DOT__imm)
                                                    : 
                                                   ((IData)(vlSelf->ysyx_22040175_top__DOT__jump)
                                                     ? 
                                                    (vlSelf->pc 
                                                     + vlSelf->ysyx_22040175_top__DOT__imm)
                                                     : 
                                                    ((IData)(4U) 
                                                     + vlSelf->pc)))
                                                : vlSelf->pc);
}

VL_INLINE_OPT void Vysyx_22040175_top___024root___combo__TOP__3(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___combo__TOP__3\n"); );
    // Body
    vlSelf->ysyx_22040175_top__DOT__rst_n = (1U & (~ (IData)(vlSelf->rst)));
}

void Vysyx_22040175_top___024root___eval(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval\n"); );
    // Body
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((~ (IData)(vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n)) 
            & (IData)(vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n)))) {
        Vysyx_22040175_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    Vysyx_22040175_top___024root___combo__TOP__3(vlSelf);
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP____VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n;
    vlSelf->__VinpClk__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__rst_n;
}

QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf);

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request\n"); );
    // Body
    return (Vysyx_22040175_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vysyx_22040175_top___024root___change_request_1(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->ysyx_22040175_top__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n));
    VL_DEBUG_IF( if(__req && ((vlSelf->ysyx_22040175_top__DOT__rst_n ^ vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n))) VL_DBG_MSGF("        CHANGE: vsrc/ysyx_22040175_top.v:11: ysyx_22040175_top.rst_n\n"); );
    // Final
    vlSelf->__Vchglast__TOP__ysyx_22040175_top__DOT__rst_n 
        = vlSelf->ysyx_22040175_top__DOT__rst_n;
    return __req;
}

#ifdef VL_DEBUG
void Vysyx_22040175_top___024root___eval_debug_assertions(Vysyx_22040175_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_22040175_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
