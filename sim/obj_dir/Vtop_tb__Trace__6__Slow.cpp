// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


VL_ATTR_COLD void Vtop_tb___024root__trace_full_0_sub_5(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_full_0_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+18837,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+18838,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18839,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+18840,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18841,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+18842,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+18843,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+18844,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+18845,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18846,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+18847,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                     ^ VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullCData(oldp+18848,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                 >> 0x19U)),7);
    bufp->fullCData(oldp+18849,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                       >> 0xcU))),3);
    bufp->fullCData(oldp+18850,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),7);
    bufp->fullIData(oldp+18851,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
    bufp->fullIData(oldp+18852,(VL_EXTENDS_II(32,12, 
                                              (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 0x14U))),32);
    bufp->fullIData(oldp+18853,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+18854,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 & VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18855,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),32);
    bufp->fullIData(oldp+18856,(VL_EXTENDS_II(32,13, 
                                              ((0x1000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                           >> 7U))))))),32);
    bufp->fullBit(oldp+18857,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullBit(oldp+18858,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullBit(oldp+18859,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullBit(oldp+18860,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+18861,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+18862,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                               != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
    bufp->fullIData(oldp+18863,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U], 0x10U)),32);
    bufp->fullCData(oldp+18864,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xcU))),4);
    bufp->fullCData(oldp+18865,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),2);
    bufp->fullIData(oldp+18866,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+18867,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                       >> 0xdU))),3);
    bufp->fullIData(oldp+18868,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+18869,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+18870,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+18871,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+18872,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 0xaU))),6);
    bufp->fullCData(oldp+18873,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                       >> 5U))),2);
    bufp->fullCData(oldp+18874,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                       >> 0xaU))),2);
    bufp->fullIData(oldp+18875,(VL_EXTENDS_II(32,9, 
                                              ((0x100U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      << 1U)) 
                                                  | ((0x20U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                         << 3U)) 
                                                     | ((0x18U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                            >> 7U)) 
                                                        | (6U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                              >> 2U)))))))),32);
    bufp->fullBit(oldp+18876,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
    bufp->fullBit(oldp+18877,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
    bufp->fullIData(oldp+18878,(VL_EXTENDS_II(32,12, 
                                              ((0x800U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                   >> 1U)) 
                                               | ((0x400U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      << 2U)) 
                                                  | ((0x300U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                         >> 1U)) 
                                                     | ((0x80U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                            << 1U)) 
                                                        | ((0x40U 
                                                            & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                               >> 1U)) 
                                                           | ((0x20U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                                  << 3U)) 
                                                              | ((0x10U 
                                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                                     >> 7U)) 
                                                                 | (0xeU 
                                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                                       >> 2U))))))))))),32);
    bufp->fullIData(oldp+18879,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+18880,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           << 1U)) 
                                 | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                              >> 7U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             >> 4U))))),32);
    bufp->fullIData(oldp+18881,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+18882,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           << 4U)) 
                                 | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                              >> 7U)) 
                                    | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                >> 2U))))),32);
    bufp->fullIData(oldp+18883,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+18884,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+18885,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+18886,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+18887,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           >> 1U)) 
                                 | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             >> 7U)))),32);
    bufp->fullIData(oldp+18888,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+18889,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                  ? 0xffffffffU : (
                                                   ((0x80000000U 
                                                     == 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                                    & (0xffffffffU 
                                                       == 
                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                                    ? 0x80000000U
                                                    : 
                                                   VL_DIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))),32);
    bufp->fullIData(oldp+18890,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                  ? 0xffffffffU : VL_DIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+18891,(VL_EXTENDS_II(32,21, 
                                              ((0x100000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U]) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                           >> 0x14U))))))),32);
    bufp->fullCData(oldp+18892,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+18893,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+18894,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+18895,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
    bufp->fullIData(oldp+18896,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U] 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18897,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18898,((IData)((((QData)((IData)(
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+18899,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 | VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18900,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                  : (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                      ? 0U : VL_MODDIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))),32);
    bufp->fullIData(oldp+18901,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                  : VL_MODDIV_III(32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+18902,(VL_EXTENDS_II(32,12, 
                                              ((0xfe0U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 7U))))),32);
    bufp->fullIData(oldp+18903,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+18904,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),6);
    bufp->fullIData(oldp+18905,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullCData(oldp+18906,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                 >> 0x1aU)),7);
    bufp->fullCData(oldp+18907,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 0x14U))),6);
    bufp->fullIData(oldp+18908,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18909,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+18910,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                           VL_EXTENDS_II(32,12, 
                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                          >> 0x14U)))),32);
    bufp->fullIData(oldp+18911,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 < VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18912,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+18913,(VL_SHIFTRS_III(32,32,5, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                               (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+18914,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                               (0x3fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                   >> 0x14U)))),32);
    bufp->fullIData(oldp+18915,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
    bufp->fullIData(oldp+18916,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+18917,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 ^ VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
    bufp->fullBit(oldp+18918,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_valid));
    bufp->fullCData(oldp+18919,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 0xfU))),5);
    bufp->fullCData(oldp+18920,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 0x14U))),5);
    bufp->fullCData(oldp+18921,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 7U))),5);
    bufp->fullIData(oldp+18922,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
    bufp->fullIData(oldp+18923,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
    bufp->fullBit(oldp+18924,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_addi_valid));
    bufp->fullIData(oldp+18925,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result
                                  : 0U)),32);
    bufp->fullBit(oldp+18926,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_and_valid));
    bufp->fullIData(oldp+18927,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+18928,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_andi_valid));
    bufp->fullIData(oldp+18929,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                     & VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18930,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_auipc_valid));
    bufp->fullIData(oldp+18931,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U] 
                                     + (0xfffff000U 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+18932,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_valid));
    bufp->fullBit(oldp+18933,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
    bufp->fullIData(oldp+18934,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
    bufp->fullBit(oldp+18935,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_valid));
    bufp->fullBit(oldp+18936,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
    bufp->fullIData(oldp+18937,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
    bufp->fullBit(oldp+18938,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_valid));
    bufp->fullBit(oldp+18939,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
    bufp->fullIData(oldp+18940,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
    bufp->fullBit(oldp+18941,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_valid));
    bufp->fullBit(oldp+18942,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
    bufp->fullIData(oldp+18943,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
    bufp->fullBit(oldp+18944,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_valid));
    bufp->fullBit(oldp+18945,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
    bufp->fullIData(oldp+18946,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
    bufp->fullBit(oldp+18947,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_valid));
    bufp->fullBit(oldp+18948,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
    bufp->fullIData(oldp+18949,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
    bufp->fullBit(oldp+18950,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_add_valid));
    bufp->fullCData(oldp+18951,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 2U))),5);
    bufp->fullIData(oldp+18952,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
    bufp->fullBit(oldp+18953,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi_valid));
    bufp->fullIData(oldp+18954,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                     + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                  : 0U)),32);
    bufp->fullBit(oldp+18955,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
    bufp->fullIData(oldp+18956,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                     + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                  : 0U)),32);
    bufp->fullBit(oldp+18957,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
    bufp->fullCData(oldp+18958,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             >> 2U)))),5);
    bufp->fullIData(oldp+18959,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
    bufp->fullBit(oldp+18960,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_valid));
    bufp->fullCData(oldp+18961,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             >> 7U)))),5);
    bufp->fullIData(oldp+18962,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
    bufp->fullBit(oldp+18963,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_andi_valid));
    bufp->fullIData(oldp+18964,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullBit(oldp+18965,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_valid));
    bufp->fullBit(oldp+18966,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
    bufp->fullIData(oldp+18967,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
    bufp->fullBit(oldp+18968,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_valid));
    bufp->fullBit(oldp+18969,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
    bufp->fullIData(oldp+18970,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
    bufp->fullBit(oldp+18971,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_valid));
    bufp->fullIData(oldp+18972,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
    bufp->fullBit(oldp+18973,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jal_valid));
    bufp->fullBit(oldp+18974,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jalr_valid));
    bufp->fullIData(oldp+18975,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])),32);
    bufp->fullBit(oldp+18976,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jr_valid));
    bufp->fullBit(oldp+18977,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_li_valid));
    bufp->fullIData(oldp+18978,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+18979,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lui_valid));
    bufp->fullIData(oldp+18980,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                  : 0U)),32);
    bufp->fullBit(oldp+18981,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lw_valid));
    bufp->fullBit(oldp+18982,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr))));
    bufp->fullIData(oldp+18983,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullIData(oldp+18984,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
    bufp->fullCData(oldp+18985,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
    bufp->fullBit(oldp+18986,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lwsp_valid));
    bufp->fullBit(oldp+18987,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
    bufp->fullIData(oldp+18988,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                                  VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                  : 0U)),32);
    bufp->fullIData(oldp+18989,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
    bufp->fullCData(oldp+18990,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
    bufp->fullBit(oldp+18991,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_mv_valid));
    bufp->fullIData(oldp+18992,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]
                                  : 0U)),32);
    bufp->fullBit(oldp+18993,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_valid));
    bufp->fullIData(oldp+18994,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
    bufp->fullBit(oldp+18995,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_slli_valid));
    bufp->fullIData(oldp+18996,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                  : 0U)),32);
    bufp->fullBit(oldp+18997,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srai_valid));
    bufp->fullIData(oldp+18998,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+18999,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srli_valid));
    bufp->fullIData(oldp+19000,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullBit(oldp+19001,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_valid));
    bufp->fullIData(oldp+19002,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
    bufp->fullBit(oldp+19003,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sw_valid));
    bufp->fullIData(oldp+19004,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
    bufp->fullBit(oldp+19005,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_swsp_valid));
    bufp->fullBit(oldp+19006,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
    bufp->fullIData(oldp+19007,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
    bufp->fullCData(oldp+19008,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
    bufp->fullIData(oldp+19009,(VL_SHIFTL_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
    bufp->fullBit(oldp+19010,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_valid));
    bufp->fullIData(oldp+19011,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
    bufp->fullBit(oldp+19012,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_div_valid));
    bufp->fullIData(oldp+19013,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                      ? 0xffffffffU
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                          ? 0x80000000U
                                          : VL_DIVS_III(32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+19014,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_divu_valid));
    bufp->fullIData(oldp+19015,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                      ? 0xffffffffU
                                      : VL_DIV_III(32, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+19016,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_valid));
    bufp->fullBit(oldp+19017,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
    bufp->fullIData(oldp+19018,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
    bufp->fullIData(oldp+19019,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
    bufp->fullBit(oldp+19020,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jalr_valid));
    bufp->fullIData(oldp+19021,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullBit(oldp+19022,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lb_valid));
    bufp->fullIData(oldp+19023,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,8, 
                                                  (0xffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullIData(oldp+19024,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
    bufp->fullCData(oldp+19025,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+19026,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lbu_valid));
    bufp->fullIData(oldp+19027,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+19028,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lh_valid));
    bufp->fullBit(oldp+19029,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+19030,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? VL_EXTENDS_II(32,16, 
                                                  (0xffffU 
                                                   & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                  : 0U)),32);
    bufp->fullCData(oldp+19031,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+19032,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lhu_valid));
    bufp->fullIData(oldp+19033,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                  : 0U)),32);
    bufp->fullBit(oldp+19034,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lui_valid));
    bufp->fullIData(oldp+19035,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (0xfffff000U & 
                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])
                                  : 0U)),32);
    bufp->fullBit(oldp+19036,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lw_valid));
    bufp->fullBit(oldp+19037,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
    bufp->fullIData(oldp+19038,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result
                                  : 0U)),32);
    bufp->fullCData(oldp+19039,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
    bufp->fullBit(oldp+19040,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mul_valid));
    bufp->fullIData(oldp+19041,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                     * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                  : 0U)),32);
    bufp->fullBit(oldp+19042,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulh_valid));
    bufp->fullIData(oldp+19043,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+19044,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhsu_valid));
    bufp->fullIData(oldp+19045,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+19046,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhu_valid));
    bufp->fullIData(oldp+19047,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (IData)((((QData)((IData)(
                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                              * (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                             >> 0x20U))
                                  : 0U)),32);
    bufp->fullBit(oldp+19048,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_or_valid));
    bufp->fullIData(oldp+19049,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+19050,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_ori_valid));
    bufp->fullIData(oldp+19051,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                     | VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+19052,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_rem_valid));
    bufp->fullIData(oldp+19053,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                      : (((0x80000000U 
                                           == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                          & (0xffffffffU 
                                             == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                          ? 0U : VL_MODDIVS_III(32, 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))
                                  : 0U)),32);
    bufp->fullBit(oldp+19054,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_remu_valid));
    bufp->fullIData(oldp+19055,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                      ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                      : VL_MODDIV_III(32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+19056,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_valid));
    bufp->fullIData(oldp+19057,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr)),32);
    bufp->fullCData(oldp+19058,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullIData(oldp+19059,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
    bufp->fullBit(oldp+19060,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sh_valid));
    bufp->fullBit(oldp+19061,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+19062,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+19063,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sll_valid));
    bufp->fullIData(oldp+19064,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                     << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+19065,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slli_valid));
    bufp->fullIData(oldp+19066,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? VL_SHIFTL_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+19067,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slt_valid));
    bufp->fullIData(oldp+19068,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+19069,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slti_valid));
    bufp->fullIData(oldp+19070,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? VL_LTS_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                               VL_EXTENDS_II(32,12, 
                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                              >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+19071,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltiu_valid));
    bufp->fullIData(oldp+19072,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                     < VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+19073,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltu_valid));
    bufp->fullIData(oldp+19074,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond)
                                  : 0U)),32);
    bufp->fullBit(oldp+19075,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sra_valid));
    bufp->fullIData(oldp+19076,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,5, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                   (0x1fU 
                                                    & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+19077,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srai_valid));
    bufp->fullIData(oldp+19078,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? VL_SHIFTRS_III(32,32,6, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                       >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+19079,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srl_valid));
    bufp->fullIData(oldp+19080,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                     >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                  : 0U)),32);
    bufp->fullBit(oldp+19081,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srli_valid));
    bufp->fullIData(oldp+19082,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? VL_SHIFTR_III(32,32,6, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                  (0x3fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullBit(oldp+19083,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sub_valid));
    bufp->fullIData(oldp+19084,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+19085,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sw_valid));
    bufp->fullBit(oldp+19086,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
    bufp->fullCData(oldp+19087,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
    bufp->fullBit(oldp+19088,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xor_valid));
    bufp->fullIData(oldp+19089,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                  : 0U)),32);
    bufp->fullBit(oldp+19090,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xori_valid));
    bufp->fullIData(oldp+19091,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                     ^ VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
    bufp->fullCData(oldp+19092,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                 >> 0x19U)),7);
    bufp->fullCData(oldp+19093,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                       >> 0xcU))),3);
    bufp->fullCData(oldp+19094,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),7);
    bufp->fullIData(oldp+19095,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
    bufp->fullIData(oldp+19096,(VL_EXTENDS_II(32,12, 
                                              (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                               >> 0x14U))),32);
    bufp->fullIData(oldp+19097,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result),32);
    bufp->fullIData(oldp+19098,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 & VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+19099,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),32);
    bufp->fullIData(oldp+19100,(VL_EXTENDS_II(32,13, 
                                              ((0x1000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                           >> 7U))))))),32);
    bufp->fullBit(oldp+19101,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullBit(oldp+19102,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullBit(oldp+19103,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullBit(oldp+19104,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond));
    bufp->fullBit(oldp+19105,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond));
    bufp->fullBit(oldp+19106,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                               != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
    bufp->fullIData(oldp+19107,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U], 0x10U)),32);
    bufp->fullCData(oldp+19108,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                         >> 0xcU))),4);
    bufp->fullCData(oldp+19109,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),2);
    bufp->fullIData(oldp+19110,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullCData(oldp+19111,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                       >> 0xdU))),3);
    bufp->fullIData(oldp+19112,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
    bufp->fullIData(oldp+19113,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
    bufp->fullIData(oldp+19114,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
    bufp->fullIData(oldp+19115,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
    bufp->fullCData(oldp+19116,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 0xaU))),6);
    bufp->fullCData(oldp+19117,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                       >> 5U))),2);
    bufp->fullCData(oldp+19118,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                       >> 0xaU))),2);
    bufp->fullIData(oldp+19119,(VL_EXTENDS_II(32,9, 
                                              ((0x100U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      << 1U)) 
                                                  | ((0x20U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                         << 3U)) 
                                                     | ((0x18U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                            >> 7U)) 
                                                        | (6U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                              >> 2U)))))))),32);
    bufp->fullBit(oldp+19120,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
    bufp->fullBit(oldp+19121,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
    bufp->fullIData(oldp+19122,(VL_EXTENDS_II(32,12, 
                                              ((0x800U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 1U)) 
                                               | ((0x400U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      << 2U)) 
                                                  | ((0x300U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                         >> 1U)) 
                                                     | ((0x80U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                            << 1U)) 
                                                        | ((0x40U 
                                                            & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                               >> 1U)) 
                                                           | ((0x20U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                                  << 3U)) 
                                                              | ((0x10U 
                                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                                     >> 7U)) 
                                                                 | (0xeU 
                                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                                       >> 2U))))))))))),32);
    bufp->fullIData(oldp+19123,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
    bufp->fullIData(oldp+19124,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           << 1U)) 
                                 | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                              >> 7U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             >> 4U))))),32);
    bufp->fullIData(oldp+19125,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
    bufp->fullIData(oldp+19126,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           << 4U)) 
                                 | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                              >> 7U)) 
                                    | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                >> 2U))))),32);
    bufp->fullIData(oldp+19127,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
    bufp->fullIData(oldp+19128,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
    bufp->fullCData(oldp+19129,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
    bufp->fullIData(oldp+19130,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
    bufp->fullIData(oldp+19131,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           >> 1U)) 
                                 | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                             >> 7U)))),32);
    bufp->fullIData(oldp+19132,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
    bufp->fullIData(oldp+19133,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                  ? 0xffffffffU : (
                                                   ((0x80000000U 
                                                     == 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                                    & (0xffffffffU 
                                                       == 
                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                                    ? 0x80000000U
                                                    : 
                                                   VL_DIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))),32);
    bufp->fullIData(oldp+19134,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                  ? 0xffffffffU : VL_DIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+19135,(VL_EXTENDS_II(32,21, 
                                              ((0x100000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 0xbU)) 
                                               | ((0xff000U 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U]) 
                                                  | ((0x800U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                         >> 9U)) 
                                                     | (0x7feU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                           >> 0x14U))))))),32);
    bufp->fullCData(oldp+19136,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),8);
    bufp->fullSData(oldp+19137,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),16);
    bufp->fullIData(oldp+19138,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result),32);
    bufp->fullIData(oldp+19139,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
    bufp->fullIData(oldp+19140,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+19141,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+19142,((IData)((((QData)((IData)(
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                         >> 0x20U))),32);
    bufp->fullIData(oldp+19143,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 | VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+19144,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                  : (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                      ? 0U : VL_MODDIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))),32);
    bufp->fullIData(oldp+19145,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                  : VL_MODDIV_III(32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+19146,(VL_EXTENDS_II(32,12, 
                                              ((0xfe0U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                     >> 7U))))),32);
    bufp->fullIData(oldp+19147,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr),32);
    bufp->fullCData(oldp+19148,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),6);
    bufp->fullIData(oldp+19149,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullCData(oldp+19150,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                 >> 0x1aU)),7);
    bufp->fullCData(oldp+19151,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 0x14U))),6);
    bufp->fullIData(oldp+19152,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+19153,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond),32);
    bufp->fullIData(oldp+19154,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                           VL_EXTENDS_II(32,12, 
                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                          >> 0x14U)))),32);
    bufp->fullIData(oldp+19155,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 < VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+19156,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond),32);
    bufp->fullIData(oldp+19157,(VL_SHIFTRS_III(32,32,5, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                               (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+19158,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                               (0x3fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 0x14U)))),32);
    bufp->fullIData(oldp+19159,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
    bufp->fullIData(oldp+19160,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 0x14U)))),32);
    bufp->fullIData(oldp+19161,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                 ^ VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 0x14U)))),32);
    bufp->fullBit(oldp+19162,(vlSelf->clk));
    bufp->fullBit(oldp+19163,(vlSelf->rst));
    bufp->fullBit(oldp+19164,(vlSelf->dut_rst));
    bufp->fullIData(oldp+19165,(vlSelf->imem_rdata),32);
    bufp->fullBit(oldp+19166,(vlSelf->imem_resp));
    bufp->fullIData(oldp+19167,(vlSelf->imem_addr),32);
    bufp->fullBit(oldp+19168,(vlSelf->imem_read));
    bufp->fullIData(oldp+19169,(vlSelf->dmem_rdata),32);
    bufp->fullBit(oldp+19170,(vlSelf->dmem_resp));
    bufp->fullIData(oldp+19171,(vlSelf->dmem_addr),32);
    bufp->fullBit(oldp+19172,(vlSelf->dmem_read));
    bufp->fullBit(oldp+19173,(vlSelf->dmem_write));
    bufp->fullCData(oldp+19174,(vlSelf->dmem_wmask),4);
    bufp->fullIData(oldp+19175,(vlSelf->dmem_wdata),32);
    bufp->fullIData(oldp+19176,(vlSelf->golden_imem_rdata),32);
    bufp->fullBit(oldp+19177,(vlSelf->golden_imem_resp));
    bufp->fullIData(oldp+19178,(vlSelf->golden_imem_addr),32);
    bufp->fullBit(oldp+19179,(vlSelf->golden_imem_read));
    bufp->fullIData(oldp+19180,(vlSelf->golden_dmem_rdata),32);
    bufp->fullBit(oldp+19181,(vlSelf->golden_dmem_resp));
    bufp->fullIData(oldp+19182,(vlSelf->golden_dmem_addr),32);
    bufp->fullBit(oldp+19183,(vlSelf->golden_dmem_read));
    bufp->fullBit(oldp+19184,(vlSelf->golden_dmem_write));
    bufp->fullCData(oldp+19185,(vlSelf->golden_dmem_wmask),4);
    bufp->fullIData(oldp+19186,(vlSelf->golden_dmem_wdata),32);
    bufp->fullBit(oldp+19187,(vlSelf->halt));
    bufp->fullBit(oldp+19188,(vlSelf->error));
    bufp->fullBit(oldp+19189,(vlSelf->any_commit));
    bufp->fullBit(oldp+19190,(vlSelf->mispredict_o));
    bufp->fullBit(oldp+19191,(vlSelf->eoc_enable));
    bufp->fullQData(oldp+19192,(vlSelf->dut_order),64);
    bufp->fullIData(oldp+19194,(vlSelf->dut_pc),32);
    bufp->fullIData(oldp+19195,(vlSelf->dut_inst),32);
    bufp->fullCData(oldp+19196,(vlSelf->dut_rd_addr),5);
    bufp->fullIData(oldp+19197,(vlSelf->dut_rd_wdata),32);
    bufp->fullIData(oldp+19198,(vlSelf->dut_mem_addr),32);
    bufp->fullCData(oldp+19199,(vlSelf->dut_mem_rmask),4);
    bufp->fullCData(oldp+19200,(vlSelf->dut_mem_wmask),4);
    bufp->fullIData(oldp+19201,(vlSelf->dut_mem_rdata),32);
    bufp->fullIData(oldp+19202,(vlSelf->dut_mem_wdata),32);
    bufp->fullBit(oldp+19203,(vlSelf->golden_commit));
    bufp->fullQData(oldp+19204,(vlSelf->golden_order),64);
    bufp->fullIData(oldp+19206,(vlSelf->golden_pc),32);
    bufp->fullIData(oldp+19207,(vlSelf->golden_inst),32);
    bufp->fullCData(oldp+19208,(vlSelf->golden_rd_addr),5);
    bufp->fullIData(oldp+19209,(vlSelf->golden_rd_wdata),32);
    bufp->fullIData(oldp+19210,(vlSelf->golden_mem_addr),32);
    bufp->fullCData(oldp+19211,(vlSelf->golden_mem_rmask),4);
    bufp->fullCData(oldp+19212,(vlSelf->golden_mem_wmask),4);
    bufp->fullIData(oldp+19213,(vlSelf->golden_mem_rdata),32);
    bufp->fullIData(oldp+19214,(vlSelf->golden_mem_wdata),32);
    bufp->fullBit(oldp+19215,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full) 
                                        & (IData)(vlSelf->imem_resp))))));
    bufp->fullBit(oldp+19216,(vlSymsp->TOP__top_tb.__Vcellinp__dut__rst));
    bufp->fullBit(oldp+19217,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_rob_full));
    bufp->fullBit(oldp+19218,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_alu_full));
    bufp->fullBit(oldp+19219,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_cmp_full));
    bufp->fullBit(oldp+19220,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_load_full));
    bufp->fullBit(oldp+19221,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_store_full));
    bufp->fullBit(oldp+19222,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_jump_full));
    bufp->fullBit(oldp+19223,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_mul_full));
    bufp->fullBit(oldp+19224,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_no_free_pr));
    bufp->fullBit(oldp+19225,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_checkpoint_full));
    bufp->fullBit(oldp+19226,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_lc_checkpoint_full));
    bufp->fullBit(oldp+19227,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_load_issued_safe));
    bufp->fullBit(oldp+19228,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_load_issued_spec));
    bufp->fullBit(oldp+19229,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_fwd_fire));
    bufp->fullBit(oldp+19230,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_spec_mispredict));
    bufp->fullBit(oldp+19231,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_spec_mispredict_fwd));
    bufp->fullBit(oldp+19232,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_spec_mispredict_spec));
}
