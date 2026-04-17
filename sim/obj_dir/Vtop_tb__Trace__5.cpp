// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop_tb__Syms.h"


void Vtop_tb___024root__trace_chg_0_sub_5(Vtop_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_chg_0_sub_5\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 18837);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+0,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+1,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? VL_SHIFTR_III(32,32,6, 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                 (0x3fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 0x14U)))
                                 : 0U)),32);
        bufp->chgBit(oldp+2,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+3,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                 : 0U)),32);
        bufp->chgBit(oldp+4,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+5,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+6,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+8,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                 >> 7U)))
                                 ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                 : 0U)),32);
        bufp->chgBit(oldp+9,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+10,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                     ^ VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
        bufp->chgCData(oldp+11,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                 >> 0x19U)),7);
        bufp->chgCData(oldp+12,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+13,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),7);
        bufp->chgIData(oldp+14,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
        bufp->chgIData(oldp+15,(VL_EXTENDS_II(32,12, 
                                              (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                               >> 0x14U))),32);
        bufp->chgIData(oldp+16,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+17,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 & VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
        bufp->chgIData(oldp+18,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),32);
        bufp->chgIData(oldp+19,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+20,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                               == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgBit(oldp+21,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgBit(oldp+22,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+24,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+25,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                               != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])));
        bufp->chgIData(oldp+26,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U], 0x10U)),32);
        bufp->chgCData(oldp+27,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                         >> 0xcU))),4);
        bufp->chgCData(oldp+28,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U])),2);
        bufp->chgIData(oldp+29,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+30,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                       >> 0xdU))),3);
        bufp->chgIData(oldp+31,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+32,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+33,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+34,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+35,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 0xaU))),6);
        bufp->chgCData(oldp+36,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                       >> 5U))),2);
        bufp->chgCData(oldp+37,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                       >> 0xaU))),2);
        bufp->chgIData(oldp+38,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+39,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
        bufp->chgBit(oldp+40,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])));
        bufp->chgIData(oldp+41,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+42,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+43,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           << 1U)) 
                                 | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                              >> 7U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             >> 4U))))),32);
        bufp->chgIData(oldp+44,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+45,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           << 4U)) 
                                 | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                              >> 7U)) 
                                    | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                >> 2U))))),32);
        bufp->chgIData(oldp+46,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+47,(VL_SHIFTR_III(32,32,32, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[6U], 
                                              VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+48,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+49,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+50,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                           >> 1U)) 
                                 | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                             >> 7U)))),32);
        bufp->chgIData(oldp+51,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+52,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
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
        bufp->chgIData(oldp+53,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                  ? 0xffffffffU : VL_DIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+54,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+55,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+56,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+57,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+58,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),32);
        bufp->chgIData(oldp+59,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (((QData)((IData)(
                                                              (- (IData)(
                                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U] 
                                                                          >> 0x1fU))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))) 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+60,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__VdfgTmp_hb1a4827e__0 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+61,((IData)((((QData)((IData)(
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U])) 
                                          * (QData)((IData)(
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))) 
                                         >> 0x20U))),32);
        bufp->chgIData(oldp+62,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 | VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
        bufp->chgIData(oldp+63,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                  : (((0x80000000U 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]) 
                                      & (0xffffffffU 
                                         == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))
                                      ? 0U : VL_MODDIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])))),32);
        bufp->chgIData(oldp+64,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])
                                  ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U]
                                  : VL_MODDIV_III(32, 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+65,(VL_EXTENDS_II(32,12, 
                                              ((0xfe0U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                     >> 7U))))),32);
        bufp->chgIData(oldp+66,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+67,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U])),6);
        bufp->chgIData(oldp+68,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgCData(oldp+69,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                 >> 0x1aU)),7);
        bufp->chgCData(oldp+70,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                          >> 0x14U))),6);
        bufp->chgIData(oldp+71,(VL_SHIFTL_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
        bufp->chgIData(oldp+72,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+73,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                           VL_EXTENDS_II(32,12, 
                                                         (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                          >> 0x14U)))),32);
        bufp->chgIData(oldp+74,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 < VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
        bufp->chgIData(oldp+75,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+76,(VL_SHIFTRS_III(32,32,5, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                               (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+77,(VL_SHIFTRS_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                               (0x3fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+78,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[6U]))),32);
        bufp->chgIData(oldp+79,(VL_SHIFTR_III(32,32,6, 
                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U], 
                                              (0x3fU 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
        bufp->chgIData(oldp+80,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
                                 ^ VL_EXTENDS_II(32,12, 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[6U] 
                                                  >> 0x14U)))),32);
        bufp->chgBit(oldp+81,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_valid));
        bufp->chgCData(oldp+82,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+83,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 0x14U))),5);
        bufp->chgCData(oldp+84,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 7U))),5);
        bufp->chgIData(oldp+85,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_add_rd_wdata),32);
        bufp->chgIData(oldp+86,(((IData)(4U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
        bufp->chgBit(oldp+87,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_addi_valid));
        bufp->chgIData(oldp+88,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result
                                  : 0U)),32);
        bufp->chgBit(oldp+89,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_and_valid));
        bufp->chgIData(oldp+90,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata
                                  : 0U)),32);
        bufp->chgBit(oldp+91,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_andi_valid));
        bufp->chgIData(oldp+92,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                     & VL_EXTENDS_II(32,12, 
                                                     (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      >> 0x14U)))
                                  : 0U)),32);
        bufp->chgBit(oldp+93,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_auipc_valid));
        bufp->chgIData(oldp+94,(((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                  >> 7U)))
                                  ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U] 
                                     + (0xfffff000U 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U]))
                                  : 0U)),32);
        bufp->chgBit(oldp+95,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_valid));
        bufp->chgBit(oldp+96,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata)));
        bufp->chgIData(oldp+97,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_beq_pc_wdata),32);
        bufp->chgBit(oldp+98,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_valid));
        bufp->chgBit(oldp+99,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata)));
        bufp->chgIData(oldp+100,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bge_pc_wdata),32);
        bufp->chgBit(oldp+101,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_valid));
        bufp->chgBit(oldp+102,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata)));
        bufp->chgIData(oldp+103,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bgeu_pc_wdata),32);
        bufp->chgBit(oldp+104,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_valid));
        bufp->chgBit(oldp+105,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata)));
        bufp->chgIData(oldp+106,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_blt_pc_wdata),32);
        bufp->chgBit(oldp+107,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_valid));
        bufp->chgBit(oldp+108,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata)));
        bufp->chgIData(oldp+109,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bltu_pc_wdata),32);
        bufp->chgBit(oldp+110,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_valid));
        bufp->chgBit(oldp+111,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata)));
        bufp->chgIData(oldp+112,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_bne_pc_wdata),32);
        bufp->chgBit(oldp+113,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_add_valid));
        bufp->chgCData(oldp+114,((0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           >> 2U))),5);
        bufp->chgIData(oldp+115,(((IData)(2U) + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[7U])),32);
        bufp->chgBit(oldp+116,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi_valid));
        bufp->chgIData(oldp+117,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                      + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))
                                   : 0U)),32);
        bufp->chgBit(oldp+118,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi16sp_valid));
        bufp->chgIData(oldp+119,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                      + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)
                                   : 0U)),32);
        bufp->chgBit(oldp+120,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_addi4spn_valid));
        bufp->chgCData(oldp+121,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                              >> 2U)))),5);
        bufp->chgIData(oldp+122,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  + (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))),32);
        bufp->chgBit(oldp+123,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_valid));
        bufp->chgCData(oldp+124,((8U | (7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                              >> 7U)))),5);
        bufp->chgIData(oldp+125,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_and_rd_wdata),32);
        bufp->chgBit(oldp+126,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_andi_valid));
        bufp->chgIData(oldp+127,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  & VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgBit(oldp+128,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_valid));
        bufp->chgBit(oldp+129,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata)));
        bufp->chgIData(oldp+130,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_beqz_pc_wdata),32);
        bufp->chgBit(oldp+131,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_valid));
        bufp->chgBit(oldp+132,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata)));
        bufp->chgIData(oldp+133,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_bnez_pc_wdata),32);
        bufp->chgBit(oldp+134,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_valid));
        bufp->chgIData(oldp+135,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_j_pc_wdata),32);
        bufp->chgBit(oldp+136,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jal_valid));
        bufp->chgBit(oldp+137,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jalr_valid));
        bufp->chgIData(oldp+138,((0xfffffffeU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])),32);
        bufp->chgBit(oldp+139,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_jr_valid));
        bufp->chgBit(oldp+140,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_li_valid));
        bufp->chgIData(oldp+141,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                   : 0U)),32);
        bufp->chgBit(oldp+142,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lui_valid));
        bufp->chgIData(oldp+143,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm
                                   : 0U)),32);
        bufp->chgBit(oldp+144,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lw_valid));
        bufp->chgBit(oldp+145,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr))));
        bufp->chgIData(oldp+146,(VL_SHIFTR_III(32,32,32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                               VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgIData(oldp+147,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr)),32);
        bufp->chgCData(oldp+148,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0))),4);
        bufp->chgBit(oldp+149,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_lwsp_valid));
        bufp->chgBit(oldp+150,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr))));
        bufp->chgIData(oldp+151,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? VL_SHIFTR_III(32,32,32, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                                   VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                   : 0U)),32);
        bufp->chgIData(oldp+152,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr)),32);
        bufp->chgCData(oldp+153,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0))),4);
        bufp->chgBit(oldp+154,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_mv_valid));
        bufp->chgIData(oldp+155,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]
                                   : 0U)),32);
        bufp->chgBit(oldp+156,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_valid));
        bufp->chgIData(oldp+157,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata),32);
        bufp->chgBit(oldp+158,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_slli_valid));
        bufp->chgIData(oldp+159,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? VL_SHIFTL_III(32,32,6, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))
                                   : 0U)),32);
        bufp->chgBit(oldp+160,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srai_valid));
        bufp->chgIData(oldp+161,(VL_SHIFTRS_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+162,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_srli_valid));
        bufp->chgIData(oldp+163,(VL_SHIFTR_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgBit(oldp+164,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_valid));
        bufp->chgIData(oldp+165,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata),32);
        bufp->chgBit(oldp+166,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sw_valid));
        bufp->chgIData(oldp+167,(VL_SHIFTL_III(32,32,32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                               VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U))),32);
        bufp->chgBit(oldp+168,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_swsp_valid));
        bufp->chgBit(oldp+169,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr))));
        bufp->chgIData(oldp+170,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr)),32);
        bufp->chgCData(oldp+171,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0))),4);
        bufp->chgIData(oldp+172,(VL_SHIFTL_III(32,32,32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U], 
                                               VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U))),32);
        bufp->chgBit(oldp+173,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_valid));
        bufp->chgIData(oldp+174,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata),32);
        bufp->chgBit(oldp+175,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_div_valid));
        bufp->chgIData(oldp+176,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
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
        bufp->chgBit(oldp+177,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_divu_valid));
        bufp->chgIData(oldp+178,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                       ? 0xffffffffU
                                       : VL_DIV_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                   : 0U)),32);
        bufp->chgBit(oldp+179,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_valid));
        bufp->chgBit(oldp+180,((1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata)));
        bufp->chgIData(oldp+181,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_rd_wdata),32);
        bufp->chgIData(oldp+182,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jal_pc_wdata),32);
        bufp->chgBit(oldp+183,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_jalr_valid));
        bufp->chgIData(oldp+184,((0xfffffffeU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgBit(oldp+185,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lb_valid));
        bufp->chgIData(oldp+186,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? VL_EXTENDS_II(32,8, 
                                                   (0xffU 
                                                    & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                   : 0U)),32);
        bufp->chgIData(oldp+187,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result)),32);
        bufp->chgCData(oldp+188,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+189,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lbu_valid));
        bufp->chgIData(oldp+190,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                   : 0U)),32);
        bufp->chgBit(oldp+191,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lh_valid));
        bufp->chgBit(oldp+192,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+193,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? VL_EXTENDS_II(32,16, 
                                                   (0xffffU 
                                                    & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result))
                                   : 0U)),32);
        bufp->chgCData(oldp+194,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+195,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lhu_valid));
        bufp->chgIData(oldp+196,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)
                                   : 0U)),32);
        bufp->chgBit(oldp+197,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lui_valid));
        bufp->chgIData(oldp+198,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (0xfffff000U & 
                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])
                                   : 0U)),32);
        bufp->chgBit(oldp+199,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_lw_valid));
        bufp->chgBit(oldp+200,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result))));
        bufp->chgIData(oldp+201,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result
                                   : 0U)),32);
        bufp->chgCData(oldp+202,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_lw__DOT____VdfgTmp_hac1c962f__0))),4);
        bufp->chgBit(oldp+203,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mul_valid));
        bufp->chgIData(oldp+204,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                      * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                   : 0U)),32);
        bufp->chgBit(oldp+205,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulh_valid));
        bufp->chgIData(oldp+206,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
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
        bufp->chgBit(oldp+207,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhsu_valid));
        bufp->chgIData(oldp+208,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                               * (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                              >> 0x20U))
                                   : 0U)),32);
        bufp->chgBit(oldp+209,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_mulhu_valid));
        bufp->chgIData(oldp+210,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (IData)((((QData)((IData)(
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                               * (QData)((IData)(
                                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                              >> 0x20U))
                                   : 0U)),32);
        bufp->chgBit(oldp+211,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_or_valid));
        bufp->chgIData(oldp+212,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_or_rd_wdata
                                   : 0U)),32);
        bufp->chgBit(oldp+213,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_ori_valid));
        bufp->chgIData(oldp+214,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                      | VL_EXTENDS_II(32,12, 
                                                      (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                       >> 0x14U)))
                                   : 0U)),32);
        bufp->chgBit(oldp+215,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_rem_valid));
        bufp->chgIData(oldp+216,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
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
        bufp->chgBit(oldp+217,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_remu_valid));
        bufp->chgIData(oldp+218,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? ((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                       ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                       : VL_MODDIV_III(32, 
                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                   : 0U)),32);
        bufp->chgBit(oldp+219,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_valid));
        bufp->chgIData(oldp+220,((0xfffffffcU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr)),32);
        bufp->chgCData(oldp+221,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgIData(oldp+222,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sb_mem_wdata),32);
        bufp->chgBit(oldp+223,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sh_valid));
        bufp->chgBit(oldp+224,((0U != (1U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+225,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+226,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sll_valid));
        bufp->chgIData(oldp+227,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                      << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                   : 0U)),32);
        bufp->chgBit(oldp+228,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slli_valid));
        bufp->chgIData(oldp+229,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? VL_SHIFTL_III(32,32,6, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                       >> 0x14U)))
                                   : 0U)),32);
        bufp->chgBit(oldp+230,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slt_valid));
        bufp->chgIData(oldp+231,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond)
                                   : 0U)),32);
        bufp->chgBit(oldp+232,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_slti_valid));
        bufp->chgIData(oldp+233,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? VL_LTS_III(32, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                VL_EXTENDS_II(32,12, 
                                                              (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                               >> 0x14U)))
                                   : 0U)),32);
        bufp->chgBit(oldp+234,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltiu_valid));
        bufp->chgIData(oldp+235,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                      < VL_EXTENDS_II(32,12, 
                                                      (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                       >> 0x14U)))
                                   : 0U)),32);
        bufp->chgBit(oldp+236,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sltu_valid));
        bufp->chgIData(oldp+237,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond)
                                   : 0U)),32);
        bufp->chgBit(oldp+238,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sra_valid));
        bufp->chgIData(oldp+239,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? VL_SHIFTRS_III(32,32,5, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                    (0x1fU 
                                                     & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                   : 0U)),32);
        bufp->chgBit(oldp+240,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srai_valid));
        bufp->chgIData(oldp+241,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? VL_SHIFTRS_III(32,32,6, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                    (0x3fU 
                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                        >> 0x14U)))
                                   : 0U)),32);
        bufp->chgBit(oldp+242,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srl_valid));
        bufp->chgIData(oldp+243,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                      >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                   : 0U)),32);
        bufp->chgBit(oldp+244,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_srli_valid));
        bufp->chgIData(oldp+245,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? VL_SHIFTR_III(32,32,6, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                   (0x3fU 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                       >> 0x14U)))
                                   : 0U)),32);
        bufp->chgBit(oldp+246,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sub_valid));
        bufp->chgIData(oldp+247,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_sub_rd_wdata
                                   : 0U)),32);
        bufp->chgBit(oldp+248,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_sw_valid));
        bufp->chgBit(oldp+249,((0U != (3U & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr))));
        bufp->chgCData(oldp+250,((0xfU & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_sw__DOT____VdfgTmp_h889c0e76__0))),4);
        bufp->chgBit(oldp+251,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xor_valid));
        bufp->chgIData(oldp+252,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_c_xor_rd_wdata
                                   : 0U)),32);
        bufp->chgBit(oldp+253,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_insn_xori_valid));
        bufp->chgIData(oldp+254,(((0U != (0x1fU & (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 7U)))
                                   ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                      ^ VL_EXTENDS_II(32,12, 
                                                      (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                       >> 0x14U)))
                                   : 0U)),32);
        bufp->chgCData(oldp+255,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                  >> 0x19U)),7);
        bufp->chgCData(oldp+256,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+257,((0x7fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),7);
        bufp->chgIData(oldp+258,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
        bufp->chgIData(oldp+259,(VL_EXTENDS_II(32,12, 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                >> 0x14U))),32);
        bufp->chgIData(oldp+260,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_addi__DOT__result),32);
        bufp->chgIData(oldp+261,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  & VL_EXTENDS_II(32,12, 
                                                  (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+262,((0xfffff000U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),32);
        bufp->chgIData(oldp+263,(VL_EXTENDS_II(32,13, 
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
        bufp->chgBit(oldp+264,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgBit(oldp+265,(VL_GTES_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgBit(oldp+266,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgBit(oldp+267,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond));
        bufp->chgBit(oldp+268,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond));
        bufp->chgBit(oldp+269,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])));
        bufp->chgIData(oldp+270,(VL_SHIFTR_III(32,32,32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U], 0x10U)),32);
        bufp->chgCData(oldp+271,((0xfU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                          >> 0xcU))),4);
        bufp->chgCData(oldp+272,((3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U])),2);
        bufp->chgIData(oldp+273,(VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgCData(oldp+274,((7U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                        >> 0xdU))),3);
        bufp->chgIData(oldp+275,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  + VL_EXTENDS_II(32,6, (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt)))),32);
        bufp->chgIData(oldp+276,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm),32);
        bufp->chgIData(oldp+277,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  + vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_addi16sp__DOT__insn_imm)),32);
        bufp->chgIData(oldp+278,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0),32);
        bufp->chgCData(oldp+279,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           >> 0xaU))),6);
        bufp->chgCData(oldp+280,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                        >> 5U))),2);
        bufp->chgCData(oldp+281,((3U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                        >> 0xaU))),2);
        bufp->chgIData(oldp+282,(VL_EXTENDS_II(32,9, 
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
        bufp->chgBit(oldp+283,((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
        bufp->chgBit(oldp+284,((0U != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])));
        bufp->chgIData(oldp+285,(VL_EXTENDS_II(32,12, 
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
        bufp->chgIData(oldp+286,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lui__DOT__insn_imm),32);
        bufp->chgIData(oldp+287,(((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            << 1U)) 
                                  | ((0x38U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                               >> 7U)) 
                                     | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                              >> 4U))))),32);
        bufp->chgIData(oldp+288,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lw__DOT__addr),32);
        bufp->chgIData(oldp+289,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            << 4U)) 
                                  | ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                               >> 7U)) 
                                     | (0x1cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                 >> 2U))))),32);
        bufp->chgIData(oldp+290,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_lwsp__DOT__addr),32);
        bufp->chgIData(oldp+291,(VL_SHIFTR_III(32,32,32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[7U], 
                                               VL_SHIFTL_III(32,32,32, vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))),32);
        bufp->chgCData(oldp+292,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt),6);
        bufp->chgIData(oldp+293,(VL_SHIFTL_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_slli__DOT__insn_shamt))),32);
        bufp->chgIData(oldp+294,(((0xc0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                            >> 1U)) 
                                  | (0x3cU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                              >> 7U)))),32);
        bufp->chgIData(oldp+295,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_c_swsp__DOT__addr),32);
        bufp->chgIData(oldp+296,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                   ? 0xffffffffU : 
                                  (((0x80000000U == 
                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                    & (0xffffffffU 
                                       == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                    ? 0x80000000U : 
                                   VL_DIVS_III(32, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))),32);
        bufp->chgIData(oldp+297,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                   ? 0xffffffffU : 
                                  VL_DIV_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+298,(VL_EXTENDS_II(32,21, 
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
        bufp->chgCData(oldp+299,((0xffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),8);
        bufp->chgSData(oldp+300,((0xffffU & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result)),16);
        bufp->chgIData(oldp+301,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_lw__DOT__result),32);
        bufp->chgIData(oldp+302,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),32);
        bufp->chgIData(oldp+303,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                           * (((QData)((IData)(
                                                               (- (IData)(
                                                                          (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
                                                                           >> 0x1fU))))) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))) 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+304,((IData)(((vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__VdfgTmp_hb1a4827e__0 
                                           * (QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+305,((IData)((((QData)((IData)(
                                                           vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U])) 
                                           * (QData)((IData)(
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))) 
                                          >> 0x20U))),32);
        bufp->chgIData(oldp+306,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  | VL_EXTENDS_II(32,12, 
                                                  (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+307,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                   ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                   : (((0x80000000U 
                                        == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]) 
                                       & (0xffffffffU 
                                          == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))
                                       ? 0U : VL_MODDIVS_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])))),32);
        bufp->chgIData(oldp+308,(((0U == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])
                                   ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U]
                                   : VL_MODDIV_III(32, 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+309,(VL_EXTENDS_II(32,12, 
                                               ((0xfe0U 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                      >> 7U))))),32);
        bufp->chgIData(oldp+310,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_sb__DOT__addr),32);
        bufp->chgCData(oldp+311,((0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U])),6);
        bufp->chgIData(oldp+312,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  << (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgCData(oldp+313,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                  >> 0x1aU)),7);
        bufp->chgCData(oldp+314,((0x3fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                           >> 0x14U))),6);
        bufp->chgIData(oldp+315,(VL_SHIFTL_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                               (0x3fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+316,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_blt__DOT__cond),32);
        bufp->chgIData(oldp+317,(VL_LTS_III(32, vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                            VL_EXTENDS_II(32,12, 
                                                          (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                           >> 0x14U)))),32);
        bufp->chgIData(oldp+318,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  < VL_EXTENDS_II(32,12, 
                                                  (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+319,(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__insn_bltu__DOT__cond),32);
        bufp->chgIData(oldp+320,(VL_SHIFTRS_III(32,32,5, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                (0x1fU 
                                                 & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+321,(VL_SHIFTRS_III(32,32,6, 
                                                vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                                (0x3fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                    >> 0x14U)))),32);
        bufp->chgIData(oldp+322,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  >> (0x1fU & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[7U]))),32);
        bufp->chgIData(oldp+323,(VL_SHIFTR_III(32,32,6, 
                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U], 
                                               (0x3fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 0x14U)))),32);
        bufp->chgIData(oldp+324,((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
                                  ^ VL_EXTENDS_II(32,12, 
                                                  (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[7U] 
                                                   >> 0x14U)))),32);
    }
    bufp->chgBit(oldp+325,(vlSelf->clk));
    bufp->chgBit(oldp+326,(vlSelf->rst));
    bufp->chgBit(oldp+327,(vlSelf->dut_rst));
    bufp->chgIData(oldp+328,(vlSelf->imem_rdata),32);
    bufp->chgBit(oldp+329,(vlSelf->imem_resp));
    bufp->chgIData(oldp+330,(vlSelf->imem_addr),32);
    bufp->chgBit(oldp+331,(vlSelf->imem_read));
    bufp->chgIData(oldp+332,(vlSelf->dmem_rdata),32);
    bufp->chgBit(oldp+333,(vlSelf->dmem_resp));
    bufp->chgIData(oldp+334,(vlSelf->dmem_addr),32);
    bufp->chgBit(oldp+335,(vlSelf->dmem_read));
    bufp->chgBit(oldp+336,(vlSelf->dmem_write));
    bufp->chgCData(oldp+337,(vlSelf->dmem_wmask),4);
    bufp->chgIData(oldp+338,(vlSelf->dmem_wdata),32);
    bufp->chgIData(oldp+339,(vlSelf->golden_imem_rdata),32);
    bufp->chgBit(oldp+340,(vlSelf->golden_imem_resp));
    bufp->chgIData(oldp+341,(vlSelf->golden_imem_addr),32);
    bufp->chgBit(oldp+342,(vlSelf->golden_imem_read));
    bufp->chgIData(oldp+343,(vlSelf->golden_dmem_rdata),32);
    bufp->chgBit(oldp+344,(vlSelf->golden_dmem_resp));
    bufp->chgIData(oldp+345,(vlSelf->golden_dmem_addr),32);
    bufp->chgBit(oldp+346,(vlSelf->golden_dmem_read));
    bufp->chgBit(oldp+347,(vlSelf->golden_dmem_write));
    bufp->chgCData(oldp+348,(vlSelf->golden_dmem_wmask),4);
    bufp->chgIData(oldp+349,(vlSelf->golden_dmem_wdata),32);
    bufp->chgBit(oldp+350,(vlSelf->halt));
    bufp->chgBit(oldp+351,(vlSelf->error));
    bufp->chgBit(oldp+352,(vlSelf->any_commit));
    bufp->chgBit(oldp+353,(vlSelf->mispredict_o));
    bufp->chgBit(oldp+354,(vlSelf->eoc_enable));
    bufp->chgQData(oldp+355,(vlSelf->dut_order),64);
    bufp->chgIData(oldp+357,(vlSelf->dut_pc),32);
    bufp->chgIData(oldp+358,(vlSelf->dut_inst),32);
    bufp->chgCData(oldp+359,(vlSelf->dut_rd_addr),5);
    bufp->chgIData(oldp+360,(vlSelf->dut_rd_wdata),32);
    bufp->chgIData(oldp+361,(vlSelf->dut_mem_addr),32);
    bufp->chgCData(oldp+362,(vlSelf->dut_mem_rmask),4);
    bufp->chgCData(oldp+363,(vlSelf->dut_mem_wmask),4);
    bufp->chgIData(oldp+364,(vlSelf->dut_mem_rdata),32);
    bufp->chgIData(oldp+365,(vlSelf->dut_mem_wdata),32);
    bufp->chgBit(oldp+366,(vlSelf->golden_commit));
    bufp->chgQData(oldp+367,(vlSelf->golden_order),64);
    bufp->chgIData(oldp+369,(vlSelf->golden_pc),32);
    bufp->chgIData(oldp+370,(vlSelf->golden_inst),32);
    bufp->chgCData(oldp+371,(vlSelf->golden_rd_addr),5);
    bufp->chgIData(oldp+372,(vlSelf->golden_rd_wdata),32);
    bufp->chgIData(oldp+373,(vlSelf->golden_mem_addr),32);
    bufp->chgCData(oldp+374,(vlSelf->golden_mem_rmask),4);
    bufp->chgCData(oldp+375,(vlSelf->golden_mem_wmask),4);
    bufp->chgIData(oldp+376,(vlSelf->golden_mem_rdata),32);
    bufp->chgIData(oldp+377,(vlSelf->golden_mem_wdata),32);
    bufp->chgBit(oldp+378,((1U & (~ ((IData)(vlSymsp->TOP__top_tb__dut.__PVT__cpu_frontend__DOT__fetchq_full) 
                                     & (IData)(vlSelf->imem_resp))))));
    bufp->chgBit(oldp+379,(vlSymsp->TOP__top_tb.__Vcellinp__dut__rst));
    bufp->chgBit(oldp+380,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_rob_full));
    bufp->chgBit(oldp+381,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_alu_full));
    bufp->chgBit(oldp+382,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_cmp_full));
    bufp->chgBit(oldp+383,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_load_full));
    bufp->chgBit(oldp+384,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_store_full));
    bufp->chgBit(oldp+385,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_jump_full));
    bufp->chgBit(oldp+386,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_mul_full));
    bufp->chgBit(oldp+387,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_no_free_pr));
    bufp->chgBit(oldp+388,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_checkpoint_full));
    bufp->chgBit(oldp+389,(vlSymsp->TOP__top_tb__dut__cpu_midcore.stall_lc_checkpoint_full));
    bufp->chgBit(oldp+390,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_load_issued_safe));
    bufp->chgBit(oldp+391,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_load_issued_spec));
    bufp->chgBit(oldp+392,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_fwd_fire));
    bufp->chgBit(oldp+393,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_spec_mispredict));
    bufp->chgBit(oldp+394,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_spec_mispredict_fwd));
    bufp->chgBit(oldp+395,(vlSymsp->TOP__top_tb__dut__cpu_execute__lsq.mon_spec_mispredict_spec));
}

void Vtop_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root__trace_cleanup\n"); );
    // Init
    Vtop_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop_tb___024root*>(voidSelf);
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
