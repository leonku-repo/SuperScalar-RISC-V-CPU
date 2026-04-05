// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec.h"

VL_INLINE_OPT void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec__0(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h99712243__0;
    __VdfgTmp_h99712243__0 = 0;
    CData/*0:0*/ __VdfgTmp_h6fe23079__0;
    __VdfgTmp_h6fe23079__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfe94040f__0;
    __VdfgTmp_hfe94040f__0 = 0;
    CData/*0:0*/ __VdfgTmp_he8004ba4__0;
    __VdfgTmp_he8004ba4__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha890dbb4__0;
    __VdfgTmp_ha890dbb4__0 = 0;
    CData/*0:0*/ __VdfgTmp_h8436152c__0;
    __VdfgTmp_h8436152c__0 = 0;
    CData/*0:0*/ __VdfgTmp_h8376ce6a__0;
    __VdfgTmp_h8376ce6a__0 = 0;
    CData/*0:0*/ __VdfgTmp_h98724db5__0;
    __VdfgTmp_h98724db5__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha33ffdac__0;
    __VdfgTmp_ha33ffdac__0 = 0;
    CData/*0:0*/ __VdfgTmp_h6ef3123b__0;
    __VdfgTmp_h6ef3123b__0 = 0;
    CData/*0:0*/ __VdfgTmp_hd187bcaf__0;
    __VdfgTmp_hd187bcaf__0 = 0;
    CData/*0:0*/ __VdfgTmp_h2ff1ede7__0;
    __VdfgTmp_h2ff1ede7__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha4e42b33__0;
    __VdfgTmp_ha4e42b33__0 = 0;
    IData/*31:0*/ __VdfgTmp_h450dae8c__0;
    __VdfgTmp_h450dae8c__0 = 0;
    IData/*31:0*/ __VdfgTmp_hc8bcf263__0;
    __VdfgTmp_hc8bcf263__0 = 0;
    // Body
    vlSelf->__VdfgTmp_hb1a4827e__0 = (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])));
    vlSelf->__PVT__spec_insn_c_and_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]);
    vlSelf->__PVT__spec_insn_c_or_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                              | vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]);
    vlSelf->__PVT__spec_insn_c_sub_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                               - vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]);
    vlSelf->__PVT__spec_insn_c_xor_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                               ^ vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]);
    vlSelf->__PVT__insn_blt__DOT__cond = VL_LTS_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]);
    vlSelf->__PVT__insn_bltu__DOT__cond = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                           < vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]);
    vlSelf->__PVT__spec_insn_c_j_pc_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
                                             + VL_EXTENDS_II(32,12, 
                                                             ((0x800U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                  >> 1U)) 
                                                              | ((0x400U 
                                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                     << 2U)) 
                                                                 | ((0x300U 
                                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                        >> 1U)) 
                                                                    | ((0x80U 
                                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                           << 1U)) 
                                                                       | ((0x40U 
                                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                              >> 1U)) 
                                                                          | ((0x20U 
                                                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                                << 3U)) 
                                                                             | ((0x10U 
                                                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                                >> 7U)) 
                                                                                | (0xeU 
                                                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                                >> 2U)))))))))));
    vlSelf->__PVT__insn_c_slli__DOT__insn_shamt = (
                                                   (0x20U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         >> 2U)));
    if ((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                         >> 7U)))) {
        vlSelf->__PVT__spec_insn_jal_rd_wdata = ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_insn_add_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]);
    } else {
        vlSelf->__PVT__spec_insn_jal_rd_wdata = 0U;
        vlSelf->__PVT__spec_insn_add_rd_wdata = 0U;
    }
    vlSelf->__PVT__spec_insn_jal_pc_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
                                             + VL_EXTENDS_II(32,21, 
                                                             ((0x100000U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                  >> 0xbU)) 
                                                              | ((0xff000U 
                                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]) 
                                                                 | ((0x800U 
                                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                          >> 0x14U)))))));
    vlSelf->__PVT__insn_c_swsp__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                             + ((0xc0U 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 1U)) 
                                                | (0x3cU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 7U))));
    vlSelf->__PVT__insn_sb__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                         + VL_EXTENDS_II(32,12, 
                                                         ((0xfe0U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                >> 7U)))));
    vlSelf->__PVT__insn_c_lwsp__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                             + ((0xc0U 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    << 4U)) 
                                                | ((0x20U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U)) 
                                                   | (0x1cU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         >> 2U)))));
    __VdfgTmp_hc8bcf263__0 = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
                              + VL_EXTENDS_II(32,9, 
                                              ((0x100U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      << 1U)) 
                                                  | ((0x20U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         << 3U)) 
                                                     | ((0x18U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                            >> 7U)) 
                                                        | (6U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                              >> 2U))))))));
    vlSelf->__PVT__insn_c_lw__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                           + ((0x40U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  << 1U)) 
                                              | ((0x38U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                     >> 7U)) 
                                                 | (4U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 4U)))));
    vlSelf->__PVT__insn_addi__DOT__result = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                             + VL_EXTENDS_II(32,12, 
                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                              >> 0x14U)));
    vlSelf->__PVT__insn_c_addi16sp__DOT__insn_imm = 
        VL_EXTENDS_II(32,10, ((0x200U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                         >> 3U)) | 
                              ((0x180U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          << 4U)) | 
                               ((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                          << 1U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           << 3U)) 
                                 | (0x10U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 2U)))))));
    vlSelf->insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0 
        = ((0x3c0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                      >> 1U)) | ((0x30U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           >> 7U)) 
                                 | ((8U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                           >> 2U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 4U)))));
    vlSelf->__PVT__insn_c_lui__DOT__insn_imm = VL_EXTENDS_II(32,18, 
                                                             ((0x20000U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                  << 5U)) 
                                                              | (0x1f000U 
                                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                    << 0xaU))));
    __VdfgTmp_h450dae8c__0 = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
                              + VL_EXTENDS_II(32,13, 
                                              ((0x1000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                           >> 7U)))))));
    __VdfgTmp_h6fe23079__0 = (IData)((0x7033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    __VdfgTmp_hfe94040f__0 = ((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 2U))) 
                              & (2U == (3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    __VdfgTmp_he8004ba4__0 = ((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                               >> 7U))) 
                              & ((~ (IData)((0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 2U))))) 
                                 & (2U == (3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    __VdfgTmp_ha890dbb4__0 = (IData)((1U == (0x1003U 
                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    __VdfgTmp_h8436152c__0 = (IData)((0x4033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    __VdfgTmp_h98724db5__0 = (IData)((0x1033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    __VdfgTmp_ha33ffdac__0 = (IData)((0x2033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    __VdfgTmp_h6ef3123b__0 = (IData)((0x3033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    __VdfgTmp_hd187bcaf__0 = (IData)((0x6033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    __VdfgTmp_h99712243__0 = (IData)((0x33U == (0x707fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    __VdfgTmp_h8376ce6a__0 = (IData)((0x5033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    __VdfgTmp_h2ff1ede7__0 = (IData)((0x13U == (0x200007fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    vlSelf->__PVT__spec_insn_xori_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & (IData)(
                                                     (0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_addi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & (IData)(
                                                     (0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_andi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & (IData)(
                                                     (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_auipc_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 3U) 
                                            & (0x17U 
                                               == (0x7fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    vlSelf->__PVT__spec_insn_beq_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & (IData)(
                                                            (0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_bge_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & (IData)(
                                                            (0x5063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_bgeu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & (IData)(
                                                     (0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_blt_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & (IData)(
                                                            (0x4063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_bltu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & (IData)(
                                                     (0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_bne_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & (IData)(
                                                            (0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_c_addi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 3U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                & (IData)(
                                                          (1U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_and_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 3U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                               & (IData)(
                                                         (0x8c61U 
                                                          == 
                                                          (0xfc63U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_andi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 3U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                & (IData)(
                                                          (0x8801U 
                                                           == 
                                                           (0xec03U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_beqz_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 3U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                & (IData)(
                                                          (0xc001U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_bnez_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 3U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                & (IData)(
                                                          (0xe001U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_j_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((~ (IData)(
                                                      (0U 
                                                       != 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                           & (IData)(
                                                     (0xa001U 
                                                      == 
                                                      (0xe003U 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_jal_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 3U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                               & (IData)(
                                                         (0x2001U 
                                                          == 
                                                          (0xe003U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_li_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                              & (IData)(
                                                        (0x4001U 
                                                         == 
                                                         (0xe003U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_lw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                              & (IData)(
                                                        (0x4000U 
                                                         == 
                                                         (0xe003U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_lwsp_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 3U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x4002U 
                                                            == 
                                                            (0xe003U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                                           & (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                  >> 7U)))))));
    vlSelf->__PVT__spec_insn_c_or_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                              & (IData)(
                                                        (0x8c41U 
                                                         == 
                                                         (0xfc63U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_slli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 3U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                & (IData)(
                                                          (2U 
                                                           == 
                                                           (0xf003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_sub_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 3U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                               & (IData)(
                                                         (0x8c01U 
                                                          == 
                                                          (0xfc63U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_sw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                              & (IData)(
                                                        (0xc000U 
                                                         == 
                                                         (0xe003U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_swsp_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 3U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                & (IData)(
                                                          (0xc002U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_c_xor_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 3U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                               & (IData)(
                                                         (0x8c21U 
                                                          == 
                                                          (0xfc63U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])))));
    vlSelf->__PVT__spec_insn_jal_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          (0x6fU == 
                                           (0x7fU & 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    vlSelf->__PVT__spec_insn_jalr_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & (IData)(
                                                     (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_lb_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 3U) & (IData)(
                                                           (3U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_lbu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & (IData)(
                                                            (0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_lh_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 3U) & (IData)(
                                                           (0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_lhu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & (IData)(
                                                            (0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_lui_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          (0x37U == 
                                           (0x7fU & 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])));
    vlSelf->__PVT__spec_insn_lw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 3U) & (IData)(
                                                           (0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_ori_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & (IData)(
                                                            (0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_sb_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 3U) & (IData)(
                                                           (0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_sh_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 3U) & (IData)(
                                                           (0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_slti_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & (IData)(
                                                     (0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_sltiu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 3U) 
                                            & (IData)(
                                                      (0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->__PVT__spec_insn_sw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 3U) & (IData)(
                                                           (0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))));
    vlSelf->insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0 
        = (vlSelf->__PVT__insn_c_swsp__DOT__addr - 
           (0xfffffffcU & vlSelf->__PVT__insn_c_swsp__DOT__addr));
    vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0 = 
        (vlSelf->__PVT__insn_sb__DOT__addr - (0xfffffffcU 
                                              & vlSelf->__PVT__insn_sb__DOT__addr));
    vlSelf->insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0 
        = (vlSelf->__PVT__insn_c_lwsp__DOT__addr - 
           (0xfffffffcU & vlSelf->__PVT__insn_c_lwsp__DOT__addr));
    vlSelf->__PVT__spec_insn_c_beqz_pc_wdata = ((0U 
                                                 == 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])
                                                 ? __VdfgTmp_hc8bcf263__0
                                                 : 
                                                ((IData)(2U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]));
    vlSelf->__PVT__spec_insn_c_bnez_pc_wdata = ((0U 
                                                 != 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])
                                                 ? __VdfgTmp_hc8bcf263__0
                                                 : 
                                                ((IData)(2U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]));
    vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0 
        = (vlSelf->__PVT__insn_c_lw__DOT__addr - (0xfffffffcU 
                                                  & vlSelf->__PVT__insn_c_lw__DOT__addr));
    vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0 = 
        (vlSelf->__PVT__insn_addi__DOT__result - (0xfffffffcU 
                                                  & vlSelf->__PVT__insn_addi__DOT__result));
    vlSelf->__PVT__spec_insn_c_addi16sp_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                                  >> 3U) 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                VL_SHIFTR_III(32,32,32, 
                                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                    & (IData)(
                                                              ((0x6101U 
                                                                == 
                                                                (0xef83U 
                                                                 & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                                               & (0U 
                                                                  != vlSelf->__PVT__insn_c_addi16sp__DOT__insn_imm)))));
    vlSelf->__PVT__spec_insn_c_addi4spn_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                                  >> 3U) 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                VL_SHIFTR_III(32,32,32, 
                                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                    & (IData)(
                                                              ((0U 
                                                                == 
                                                                (0xe003U 
                                                                 & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                                               & (0U 
                                                                  != (IData)(vlSelf->insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))))));
    vlSelf->__PVT__spec_insn_c_lui_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 3U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                               & (IData)(
                                                         ((0x6001U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                                          & ((2U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                  >> 7U))) 
                                                             & (0U 
                                                                != vlSelf->__PVT__insn_c_lui__DOT__insn_imm))))));
    vlSelf->__PVT__spec_insn_blt_pc_wdata = ((IData)(vlSelf->__PVT__insn_blt__DOT__cond)
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]));
    vlSelf->__PVT__spec_insn_bltu_pc_wdata = ((IData)(vlSelf->__PVT__insn_bltu__DOT__cond)
                                               ? __VdfgTmp_h450dae8c__0
                                               : ((IData)(4U) 
                                                  + 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]));
    vlSelf->__PVT__spec_insn_beq_pc_wdata = ((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]));
    vlSelf->__PVT__spec_insn_bge_pc_wdata = (VL_GTES_III(32, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]));
    vlSelf->__PVT__spec_insn_bgeu_pc_wdata = ((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                               ? __VdfgTmp_h450dae8c__0
                                               : ((IData)(4U) 
                                                  + 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]));
    vlSelf->__PVT__spec_insn_bne_pc_wdata = ((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]));
    vlSelf->__PVT__spec_insn_and_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h6fe23079__0)));
    vlSelf->__PVT__spec_insn_remu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((1U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h6fe23079__0)));
    vlSelf->__PVT__spec_insn_c_add_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 3U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                               & (IData)(
                                                         ((0x9000U 
                                                           == 
                                                           (0xf000U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                                          & (IData)(__VdfgTmp_hfe94040f__0)))));
    vlSelf->__PVT__spec_insn_c_mv_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                              & (IData)(
                                                        ((0x8000U 
                                                          == 
                                                          (0xf000U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                                         & (IData)(__VdfgTmp_hfe94040f__0)))));
    vlSelf->__PVT__spec_insn_c_jalr_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 3U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x9000U 
                                                            == 
                                                            (0xf000U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                                           & (IData)(__VdfgTmp_he8004ba4__0)))));
    vlSelf->__PVT__spec_insn_c_jr_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                              & (IData)(
                                                        ((0x8000U 
                                                          == 
                                                          (0xf000U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                                         & (IData)(__VdfgTmp_he8004ba4__0)))));
    vlSelf->__PVT__spec_insn_c_srai_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 3U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x8400U 
                                                            == 
                                                            (0xec00U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                                           & (IData)(__VdfgTmp_ha890dbb4__0)))));
    vlSelf->__PVT__spec_insn_c_srli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 3U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x8000U 
                                                            == 
                                                            (0xec00U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                                           & (IData)(__VdfgTmp_ha890dbb4__0)))));
    vlSelf->__PVT__spec_insn_div_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((1U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8436152c__0)));
    vlSelf->__PVT__spec_insn_xor_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8436152c__0)));
    vlSelf->__PVT__spec_insn_mulh_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((1U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h98724db5__0)));
    vlSelf->__PVT__spec_insn_sll_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h98724db5__0)));
    vlSelf->__PVT__spec_insn_mulhsu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 3U) 
                                             & ((1U 
                                                 == 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x19U)) 
                                                & (IData)(__VdfgTmp_ha33ffdac__0)));
    vlSelf->__PVT__spec_insn_slt_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_ha33ffdac__0)));
    vlSelf->__PVT__spec_insn_mulhu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 3U) 
                                            & ((1U 
                                                == 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 0x19U)) 
                                               & (IData)(__VdfgTmp_h6ef3123b__0)));
    vlSelf->__PVT__spec_insn_sltu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((0U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h6ef3123b__0)));
    vlSelf->__PVT__spec_insn_or_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 3U) & 
                                         ((0U == (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                  >> 0x19U)) 
                                          & (IData)(__VdfgTmp_hd187bcaf__0)));
    vlSelf->__PVT__spec_insn_rem_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((1U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_hd187bcaf__0)));
    vlSelf->__PVT__spec_insn_add_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h99712243__0)));
    vlSelf->__PVT__spec_insn_mul_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((1U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h99712243__0)));
    vlSelf->__PVT__spec_insn_sub_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((0x20U == 
                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h99712243__0)));
    vlSelf->__PVT__spec_insn_divu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((1U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h8376ce6a__0)));
    vlSelf->__PVT__spec_insn_sra_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((0x20U == 
                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8376ce6a__0)));
    vlSelf->__PVT__spec_insn_srl_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 3U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8376ce6a__0)));
    vlSelf->__PVT__spec_insn_slli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & (IData)(
                                                     ((0x1000U 
                                                       == 
                                                       (0xfc007000U 
                                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                                      & (IData)(__VdfgTmp_h2ff1ede7__0))));
    __VdfgTmp_ha4e42b33__0 = (IData)(((0x5000U == (0x7000U 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])) 
                                      & (IData)(__VdfgTmp_h2ff1ede7__0)));
    vlSelf->__PVT__spec_insn_sb_mem_wdata = VL_SHIFTL_III(32,32,32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                                          VL_SHIFTL_III(32,32,32, vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0, 3U));
    vlSelf->__PVT__insn_lw__DOT__result = VL_SHIFTR_III(32,32,32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                        VL_SHIFTL_III(32,32,32, vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0, 3U));
    vlSelf->__PVT__spec_insn_srai_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((0x10U 
                                               == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 0x1aU)) 
                                              & (IData)(__VdfgTmp_ha4e42b33__0)));
    vlSelf->__PVT__spec_insn_srli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 3U) 
                                           & ((0U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 0x1aU)) 
                                              & (IData)(__VdfgTmp_ha4e42b33__0)));
    if (vlSelf->__PVT__spec_insn_add_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_add_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_add_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_addi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_addi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__insn_addi__DOT__result
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_and_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_and_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_and_rd_wdata
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_andi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_andi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                            & VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_auipc_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_auipc_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
                                            + (0xfffff000U 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_beq_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_beq_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_beq_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_beq_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bge_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bge_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bge_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bge_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bgeu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bgeu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bgeu_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bgeu_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_blt_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_blt_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_blt_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_blt_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bltu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bltu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bltu_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bltu_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bne_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bne_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bne_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bne_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_add_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_add_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 2U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_add_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_addi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_addi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                            + VL_EXTENDS_II(32,6, (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_addi16sp_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_addi16sp_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                            + vlSelf->__PVT__insn_c_addi16sp__DOT__insn_imm)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_addi4spn_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_addi4spn_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 2U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 2U))));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                        + (IData)(vlSelf->insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0));
    } else if (vlSelf->__PVT__spec_insn_c_and_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_and_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_and_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_andi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_andi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                        & VL_EXTENDS_II(32,6, (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt)));
    } else if (vlSelf->__PVT__spec_insn_c_beqz_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_beqz_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_beqz_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_c_beqz_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_bnez_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_bnez_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_bnez_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_c_bnez_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_j_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_j_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_j_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_jal_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_jal_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 1U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_j_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
    } else if (vlSelf->__PVT__spec_insn_c_jalr_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_jalr_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 1U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = (0xfffffffeU 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
    } else if (vlSelf->__PVT__spec_insn_c_jr_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_jr_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = (0xfffffffeU 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_li_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_li_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? VL_EXTENDS_II(32,6, (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_lui_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_lui_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__insn_c_lui__DOT__insn_imm
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_lw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_lw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 2U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0)));
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_lw__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_lw__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = VL_SHIFTR_III(32,32,32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                     VL_SHIFTL_III(32,32,32, vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U));
    } else if (vlSelf->__PVT__spec_insn_c_lwsp_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_lwsp_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 2U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0)));
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_lwsp__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_lwsp__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? VL_SHIFTR_III(32,32,32, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[3U], 
                                                         VL_SHIFTL_III(32,32,32, vlSelf->insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_mv_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_mv_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 2U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_or_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_or_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_or_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_slli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_slli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? VL_SHIFTL_III(32,32,6, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_srai_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_srai_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = VL_SHIFTRS_III(32,32,6, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt));
    } else if (vlSelf->__PVT__spec_insn_c_srli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_srli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = VL_SHIFTR_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt));
    } else if (vlSelf->__PVT__spec_insn_c_sub_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_sub_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_sub_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_sw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_sw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0)));
        vlSelf->__PVT__spec_mem_wdata = VL_SHIFTL_III(32,32,32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                                      VL_SHIFTL_III(32,32,32, vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U));
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_lw__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_lw__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_swsp_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_swsp_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 2U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 2U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0)));
        vlSelf->__PVT__spec_mem_wdata = VL_SHIFTL_III(32,32,32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U], 
                                                      VL_SHIFTL_III(32,32,32, vlSelf->insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U));
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_swsp__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_swsp__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_xor_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_xor_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_xor_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_div_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_div_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                             ? 0xffffffffU
                                             : (((0x80000000U 
                                                  == 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                                 & (0xffffffffU 
                                                    == 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                                 ? 0x80000000U
                                                 : 
                                                VL_DIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_divu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_divu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                             ? 0xffffffffU
                                             : VL_DIV_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_jal_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_jal_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_jal_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_jal_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_jal_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_jalr_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_jalr_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = (0xfffffffeU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_jal_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_lb_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lb_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & vlSelf->__PVT__insn_lw__DOT__result))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lbu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lbu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (0xffU & vlSelf->__PVT__insn_lw__DOT__result)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lh_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lh_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (1U 
                                                 & vlSelf->__PVT__insn_addi__DOT__result)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & vlSelf->__PVT__insn_lw__DOT__result))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lhu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lhu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (1U 
                                                 & vlSelf->__PVT__insn_addi__DOT__result)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (0xffffU 
                                            & vlSelf->__PVT__insn_lw__DOT__result)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lui_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lui_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (0xfffff000U 
                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U])
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_addi__DOT__result)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__insn_lw__DOT__result
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mul_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mul_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                            * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mulh_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mulh_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (IData)(
                                                   ((vlSelf->__VdfgTmp_hb1a4827e__0 
                                                     * 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))) 
                                                    >> 0x20U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mulhsu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mulhsu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (IData)(
                                                   ((vlSelf->__VdfgTmp_hb1a4827e__0 
                                                     * (QData)((IData)(
                                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                                    >> 0x20U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mulhu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mulhu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (IData)(
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U])) 
                                                     * (QData)((IData)(
                                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))) 
                                                    >> 0x20U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_or_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_or_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_or_rd_wdata
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_ori_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_ori_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                            | VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_rem_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_rem_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                             ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                             : (((0x80000000U 
                                                  == 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]) 
                                                 & (0xffffffffU 
                                                    == 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                                 ? 0U
                                                 : 
                                                VL_MODDIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_remu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_remu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U])
                                             ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U]
                                             : VL_MODDIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sb_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sb_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0)));
        vlSelf->__PVT__spec_mem_wdata = vlSelf->__PVT__spec_insn_sb_mem_wdata;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_sb__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_sh_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sh_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0)));
        vlSelf->__PVT__spec_mem_wdata = vlSelf->__PVT__spec_insn_sb_mem_wdata;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_sb__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (1U 
                                                 & vlSelf->__PVT__insn_sb__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_sll_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sll_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                            << (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_slli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_slli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? VL_SHIFTL_III(32,32,6, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_slt_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_slt_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (IData)(vlSelf->__PVT__insn_blt__DOT__cond)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_slti_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_slti_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? VL_LTS_III(32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                      VL_EXTENDS_II(32,12, 
                                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                     >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sltiu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sltiu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                            < VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sltu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sltu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (IData)(vlSelf->__PVT__insn_bltu__DOT__cond)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sra_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sra_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? VL_SHIFTRS_III(32,32,5, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                          (0x1fU 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_srai_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_srai_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? VL_SHIFTRS_III(32,32,6, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                              >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_srl_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_srl_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                            >> (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[3U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_srli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_srli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? VL_SHIFTR_III(32,32,6, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U], 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sub_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sub_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_sub_rd_wdata
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0)));
        vlSelf->__PVT__spec_mem_wdata = vlSelf->__PVT__spec_insn_sb_mem_wdata;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_sb__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_sb__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_xor_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_xor_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_xor_rd_wdata
                                         : 0U);
    } else {
        if (vlSelf->__PVT__spec_insn_xori_valid) {
            vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_xori_valid));
            vlSelf->__PVT__spec_rs1_addr = (0x1fU & 
                                            (0x1fU 
                                             & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                >> 0xfU)));
            vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_rd_addr = (0x1fU & 
                                           (0x1fU & 
                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                             >> 7U)));
            vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
            vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
            vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                            + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[3U]);
            vlSelf->__PVT__spec_trap = (1U & 0U);
            vlSelf->__PVT__spec_rd_wdata = ((0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                 >> 7U)))
                                             ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
                                                ^ VL_EXTENDS_II(32,12, 
                                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[3U] 
                                                                 >> 0x14U)))
                                             : 0U);
        } else {
            vlSelf->__PVT__spec_valid = (1U & 0U);
            vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
            vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
            vlSelf->__PVT__spec_pc_wdata = 0U;
            vlSelf->__PVT__spec_trap = (1U & 0U);
            vlSelf->__PVT__spec_rd_wdata = 0U;
        }
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
    }
}

VL_INLINE_OPT void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec__0(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h99712243__0;
    __VdfgTmp_h99712243__0 = 0;
    CData/*0:0*/ __VdfgTmp_h6fe23079__0;
    __VdfgTmp_h6fe23079__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfe94040f__0;
    __VdfgTmp_hfe94040f__0 = 0;
    CData/*0:0*/ __VdfgTmp_he8004ba4__0;
    __VdfgTmp_he8004ba4__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha890dbb4__0;
    __VdfgTmp_ha890dbb4__0 = 0;
    CData/*0:0*/ __VdfgTmp_h8436152c__0;
    __VdfgTmp_h8436152c__0 = 0;
    CData/*0:0*/ __VdfgTmp_h8376ce6a__0;
    __VdfgTmp_h8376ce6a__0 = 0;
    CData/*0:0*/ __VdfgTmp_h98724db5__0;
    __VdfgTmp_h98724db5__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha33ffdac__0;
    __VdfgTmp_ha33ffdac__0 = 0;
    CData/*0:0*/ __VdfgTmp_h6ef3123b__0;
    __VdfgTmp_h6ef3123b__0 = 0;
    CData/*0:0*/ __VdfgTmp_hd187bcaf__0;
    __VdfgTmp_hd187bcaf__0 = 0;
    CData/*0:0*/ __VdfgTmp_h2ff1ede7__0;
    __VdfgTmp_h2ff1ede7__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha4e42b33__0;
    __VdfgTmp_ha4e42b33__0 = 0;
    IData/*31:0*/ __VdfgTmp_h450dae8c__0;
    __VdfgTmp_h450dae8c__0 = 0;
    IData/*31:0*/ __VdfgTmp_hc8bcf263__0;
    __VdfgTmp_hc8bcf263__0 = 0;
    // Body
    vlSelf->__VdfgTmp_hb1a4827e__0 = (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])));
    vlSelf->__PVT__spec_insn_c_and_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]);
    vlSelf->__PVT__spec_insn_c_or_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                              | vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]);
    vlSelf->__PVT__spec_insn_c_sub_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                               - vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]);
    vlSelf->__PVT__spec_insn_c_xor_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                               ^ vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]);
    vlSelf->__PVT__insn_blt__DOT__cond = VL_LTS_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]);
    vlSelf->__PVT__insn_bltu__DOT__cond = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                           < vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]);
    vlSelf->__PVT__spec_insn_c_j_pc_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
                                             + VL_EXTENDS_II(32,12, 
                                                             ((0x800U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                  >> 1U)) 
                                                              | ((0x400U 
                                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                     << 2U)) 
                                                                 | ((0x300U 
                                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                        >> 1U)) 
                                                                    | ((0x80U 
                                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                           << 1U)) 
                                                                       | ((0x40U 
                                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                              >> 1U)) 
                                                                          | ((0x20U 
                                                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                                << 3U)) 
                                                                             | ((0x10U 
                                                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                                >> 7U)) 
                                                                                | (0xeU 
                                                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                                >> 2U)))))))))));
    vlSelf->__PVT__insn_c_slli__DOT__insn_shamt = (
                                                   (0x20U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         >> 2U)));
    if ((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                         >> 7U)))) {
        vlSelf->__PVT__spec_insn_jal_rd_wdata = ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_insn_add_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]);
    } else {
        vlSelf->__PVT__spec_insn_jal_rd_wdata = 0U;
        vlSelf->__PVT__spec_insn_add_rd_wdata = 0U;
    }
    vlSelf->__PVT__spec_insn_jal_pc_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
                                             + VL_EXTENDS_II(32,21, 
                                                             ((0x100000U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                  >> 0xbU)) 
                                                              | ((0xff000U 
                                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]) 
                                                                 | ((0x800U 
                                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                          >> 0x14U)))))));
    vlSelf->__PVT__insn_c_swsp__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                             + ((0xc0U 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 1U)) 
                                                | (0x3cU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 7U))));
    vlSelf->__PVT__insn_sb__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                         + VL_EXTENDS_II(32,12, 
                                                         ((0xfe0U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                >> 7U)))));
    vlSelf->__PVT__insn_c_lwsp__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                             + ((0xc0U 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    << 4U)) 
                                                | ((0x20U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U)) 
                                                   | (0x1cU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         >> 2U)))));
    __VdfgTmp_hc8bcf263__0 = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
                              + VL_EXTENDS_II(32,9, 
                                              ((0x100U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      << 1U)) 
                                                  | ((0x20U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         << 3U)) 
                                                     | ((0x18U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                            >> 7U)) 
                                                        | (6U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                              >> 2U))))))));
    vlSelf->__PVT__insn_c_lw__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                           + ((0x40U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  << 1U)) 
                                              | ((0x38U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                     >> 7U)) 
                                                 | (4U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 4U)))));
    vlSelf->__PVT__insn_addi__DOT__result = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                             + VL_EXTENDS_II(32,12, 
                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                              >> 0x14U)));
    vlSelf->__PVT__insn_c_addi16sp__DOT__insn_imm = 
        VL_EXTENDS_II(32,10, ((0x200U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                         >> 3U)) | 
                              ((0x180U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          << 4U)) | 
                               ((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                          << 1U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           << 3U)) 
                                 | (0x10U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 2U)))))));
    vlSelf->insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0 
        = ((0x3c0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                      >> 1U)) | ((0x30U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           >> 7U)) 
                                 | ((8U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                           >> 2U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 4U)))));
    vlSelf->__PVT__insn_c_lui__DOT__insn_imm = VL_EXTENDS_II(32,18, 
                                                             ((0x20000U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                  << 5U)) 
                                                              | (0x1f000U 
                                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                    << 0xaU))));
    __VdfgTmp_h450dae8c__0 = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
                              + VL_EXTENDS_II(32,13, 
                                              ((0x1000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                           >> 7U)))))));
    __VdfgTmp_h6fe23079__0 = (IData)((0x7033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    __VdfgTmp_hfe94040f__0 = ((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 2U))) 
                              & (2U == (3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    __VdfgTmp_he8004ba4__0 = ((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                               >> 7U))) 
                              & ((~ (IData)((0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 2U))))) 
                                 & (2U == (3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    __VdfgTmp_ha890dbb4__0 = (IData)((1U == (0x1003U 
                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    __VdfgTmp_h8436152c__0 = (IData)((0x4033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    __VdfgTmp_h98724db5__0 = (IData)((0x1033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    __VdfgTmp_ha33ffdac__0 = (IData)((0x2033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    __VdfgTmp_h6ef3123b__0 = (IData)((0x3033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    __VdfgTmp_hd187bcaf__0 = (IData)((0x6033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    __VdfgTmp_h99712243__0 = (IData)((0x33U == (0x707fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    __VdfgTmp_h8376ce6a__0 = (IData)((0x5033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    __VdfgTmp_h2ff1ede7__0 = (IData)((0x13U == (0x200007fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    vlSelf->__PVT__spec_insn_xori_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & (IData)(
                                                     (0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_addi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & (IData)(
                                                     (0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_andi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & (IData)(
                                                     (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_auipc_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 4U) 
                                            & (0x17U 
                                               == (0x7fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    vlSelf->__PVT__spec_insn_beq_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & (IData)(
                                                            (0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_bge_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & (IData)(
                                                            (0x5063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_bgeu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & (IData)(
                                                     (0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_blt_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & (IData)(
                                                            (0x4063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_bltu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & (IData)(
                                                     (0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_bne_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & (IData)(
                                                            (0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_c_addi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 4U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                & (IData)(
                                                          (1U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_and_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 4U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                               & (IData)(
                                                         (0x8c61U 
                                                          == 
                                                          (0xfc63U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_andi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 4U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                & (IData)(
                                                          (0x8801U 
                                                           == 
                                                           (0xec03U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_beqz_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 4U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                & (IData)(
                                                          (0xc001U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_bnez_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 4U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                & (IData)(
                                                          (0xe001U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_j_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((~ (IData)(
                                                      (0U 
                                                       != 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                           & (IData)(
                                                     (0xa001U 
                                                      == 
                                                      (0xe003U 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_jal_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 4U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                               & (IData)(
                                                         (0x2001U 
                                                          == 
                                                          (0xe003U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_li_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                              & (IData)(
                                                        (0x4001U 
                                                         == 
                                                         (0xe003U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_lw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                              & (IData)(
                                                        (0x4000U 
                                                         == 
                                                         (0xe003U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_lwsp_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 4U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x4002U 
                                                            == 
                                                            (0xe003U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                                           & (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                  >> 7U)))))));
    vlSelf->__PVT__spec_insn_c_or_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                              & (IData)(
                                                        (0x8c41U 
                                                         == 
                                                         (0xfc63U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_slli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 4U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                & (IData)(
                                                          (2U 
                                                           == 
                                                           (0xf003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_sub_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 4U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                               & (IData)(
                                                         (0x8c01U 
                                                          == 
                                                          (0xfc63U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_sw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                              & (IData)(
                                                        (0xc000U 
                                                         == 
                                                         (0xe003U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_swsp_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 4U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                & (IData)(
                                                          (0xc002U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_c_xor_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 4U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                               & (IData)(
                                                         (0x8c21U 
                                                          == 
                                                          (0xfc63U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])))));
    vlSelf->__PVT__spec_insn_jal_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          (0x6fU == 
                                           (0x7fU & 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    vlSelf->__PVT__spec_insn_jalr_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & (IData)(
                                                     (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_lb_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 4U) & (IData)(
                                                           (3U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_lbu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & (IData)(
                                                            (0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_lh_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 4U) & (IData)(
                                                           (0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_lhu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & (IData)(
                                                            (0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_lui_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          (0x37U == 
                                           (0x7fU & 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])));
    vlSelf->__PVT__spec_insn_lw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 4U) & (IData)(
                                                           (0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_ori_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & (IData)(
                                                            (0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_sb_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 4U) & (IData)(
                                                           (0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_sh_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 4U) & (IData)(
                                                           (0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_slti_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & (IData)(
                                                     (0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_sltiu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 4U) 
                                            & (IData)(
                                                      (0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->__PVT__spec_insn_sw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 4U) & (IData)(
                                                           (0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))));
    vlSelf->insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0 
        = (vlSelf->__PVT__insn_c_swsp__DOT__addr - 
           (0xfffffffcU & vlSelf->__PVT__insn_c_swsp__DOT__addr));
    vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0 = 
        (vlSelf->__PVT__insn_sb__DOT__addr - (0xfffffffcU 
                                              & vlSelf->__PVT__insn_sb__DOT__addr));
    vlSelf->insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0 
        = (vlSelf->__PVT__insn_c_lwsp__DOT__addr - 
           (0xfffffffcU & vlSelf->__PVT__insn_c_lwsp__DOT__addr));
    vlSelf->__PVT__spec_insn_c_beqz_pc_wdata = ((0U 
                                                 == 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])
                                                 ? __VdfgTmp_hc8bcf263__0
                                                 : 
                                                ((IData)(2U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]));
    vlSelf->__PVT__spec_insn_c_bnez_pc_wdata = ((0U 
                                                 != 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])
                                                 ? __VdfgTmp_hc8bcf263__0
                                                 : 
                                                ((IData)(2U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]));
    vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0 
        = (vlSelf->__PVT__insn_c_lw__DOT__addr - (0xfffffffcU 
                                                  & vlSelf->__PVT__insn_c_lw__DOT__addr));
    vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0 = 
        (vlSelf->__PVT__insn_addi__DOT__result - (0xfffffffcU 
                                                  & vlSelf->__PVT__insn_addi__DOT__result));
    vlSelf->__PVT__spec_insn_c_addi16sp_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                                  >> 4U) 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                VL_SHIFTR_III(32,32,32, 
                                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                    & (IData)(
                                                              ((0x6101U 
                                                                == 
                                                                (0xef83U 
                                                                 & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                                               & (0U 
                                                                  != vlSelf->__PVT__insn_c_addi16sp__DOT__insn_imm)))));
    vlSelf->__PVT__spec_insn_c_addi4spn_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                                  >> 4U) 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                VL_SHIFTR_III(32,32,32, 
                                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                    & (IData)(
                                                              ((0U 
                                                                == 
                                                                (0xe003U 
                                                                 & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                                               & (0U 
                                                                  != (IData)(vlSelf->insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))))));
    vlSelf->__PVT__spec_insn_c_lui_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 4U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                               & (IData)(
                                                         ((0x6001U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                                          & ((2U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                  >> 7U))) 
                                                             & (0U 
                                                                != vlSelf->__PVT__insn_c_lui__DOT__insn_imm))))));
    vlSelf->__PVT__spec_insn_blt_pc_wdata = ((IData)(vlSelf->__PVT__insn_blt__DOT__cond)
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]));
    vlSelf->__PVT__spec_insn_bltu_pc_wdata = ((IData)(vlSelf->__PVT__insn_bltu__DOT__cond)
                                               ? __VdfgTmp_h450dae8c__0
                                               : ((IData)(4U) 
                                                  + 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]));
    vlSelf->__PVT__spec_insn_beq_pc_wdata = ((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]));
    vlSelf->__PVT__spec_insn_bge_pc_wdata = (VL_GTES_III(32, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]));
    vlSelf->__PVT__spec_insn_bgeu_pc_wdata = ((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                               ? __VdfgTmp_h450dae8c__0
                                               : ((IData)(4U) 
                                                  + 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]));
    vlSelf->__PVT__spec_insn_bne_pc_wdata = ((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]));
    vlSelf->__PVT__spec_insn_and_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h6fe23079__0)));
    vlSelf->__PVT__spec_insn_remu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((1U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h6fe23079__0)));
    vlSelf->__PVT__spec_insn_c_add_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 4U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                               & (IData)(
                                                         ((0x9000U 
                                                           == 
                                                           (0xf000U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                                          & (IData)(__VdfgTmp_hfe94040f__0)))));
    vlSelf->__PVT__spec_insn_c_mv_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                              & (IData)(
                                                        ((0x8000U 
                                                          == 
                                                          (0xf000U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                                         & (IData)(__VdfgTmp_hfe94040f__0)))));
    vlSelf->__PVT__spec_insn_c_jalr_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 4U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x9000U 
                                                            == 
                                                            (0xf000U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                                           & (IData)(__VdfgTmp_he8004ba4__0)))));
    vlSelf->__PVT__spec_insn_c_jr_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                              & (IData)(
                                                        ((0x8000U 
                                                          == 
                                                          (0xf000U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                                         & (IData)(__VdfgTmp_he8004ba4__0)))));
    vlSelf->__PVT__spec_insn_c_srai_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 4U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x8400U 
                                                            == 
                                                            (0xec00U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                                           & (IData)(__VdfgTmp_ha890dbb4__0)))));
    vlSelf->__PVT__spec_insn_c_srli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 4U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x8000U 
                                                            == 
                                                            (0xec00U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                                           & (IData)(__VdfgTmp_ha890dbb4__0)))));
    vlSelf->__PVT__spec_insn_div_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((1U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8436152c__0)));
    vlSelf->__PVT__spec_insn_xor_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8436152c__0)));
    vlSelf->__PVT__spec_insn_mulh_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((1U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h98724db5__0)));
    vlSelf->__PVT__spec_insn_sll_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h98724db5__0)));
    vlSelf->__PVT__spec_insn_mulhsu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 4U) 
                                             & ((1U 
                                                 == 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x19U)) 
                                                & (IData)(__VdfgTmp_ha33ffdac__0)));
    vlSelf->__PVT__spec_insn_slt_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_ha33ffdac__0)));
    vlSelf->__PVT__spec_insn_mulhu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 4U) 
                                            & ((1U 
                                                == 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 0x19U)) 
                                               & (IData)(__VdfgTmp_h6ef3123b__0)));
    vlSelf->__PVT__spec_insn_sltu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((0U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h6ef3123b__0)));
    vlSelf->__PVT__spec_insn_or_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 4U) & 
                                         ((0U == (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                  >> 0x19U)) 
                                          & (IData)(__VdfgTmp_hd187bcaf__0)));
    vlSelf->__PVT__spec_insn_rem_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((1U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_hd187bcaf__0)));
    vlSelf->__PVT__spec_insn_add_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h99712243__0)));
    vlSelf->__PVT__spec_insn_mul_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((1U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h99712243__0)));
    vlSelf->__PVT__spec_insn_sub_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((0x20U == 
                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h99712243__0)));
    vlSelf->__PVT__spec_insn_divu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((1U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h8376ce6a__0)));
    vlSelf->__PVT__spec_insn_sra_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((0x20U == 
                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8376ce6a__0)));
    vlSelf->__PVT__spec_insn_srl_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 4U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8376ce6a__0)));
    vlSelf->__PVT__spec_insn_slli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & (IData)(
                                                     ((0x1000U 
                                                       == 
                                                       (0xfc007000U 
                                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                                      & (IData)(__VdfgTmp_h2ff1ede7__0))));
    __VdfgTmp_ha4e42b33__0 = (IData)(((0x5000U == (0x7000U 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])) 
                                      & (IData)(__VdfgTmp_h2ff1ede7__0)));
    vlSelf->__PVT__spec_insn_sb_mem_wdata = VL_SHIFTL_III(32,32,32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                                          VL_SHIFTL_III(32,32,32, vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0, 3U));
    vlSelf->__PVT__insn_lw__DOT__result = VL_SHIFTR_III(32,32,32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                        VL_SHIFTL_III(32,32,32, vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0, 3U));
    vlSelf->__PVT__spec_insn_srai_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((0x10U 
                                               == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 0x1aU)) 
                                              & (IData)(__VdfgTmp_ha4e42b33__0)));
    vlSelf->__PVT__spec_insn_srli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 4U) 
                                           & ((0U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 0x1aU)) 
                                              & (IData)(__VdfgTmp_ha4e42b33__0)));
    if (vlSelf->__PVT__spec_insn_add_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_add_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_add_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_addi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_addi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__insn_addi__DOT__result
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_and_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_and_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_and_rd_wdata
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_andi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_andi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                            & VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_auipc_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_auipc_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
                                            + (0xfffff000U 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_beq_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_beq_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_beq_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_beq_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bge_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bge_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bge_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bge_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bgeu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bgeu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bgeu_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bgeu_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_blt_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_blt_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_blt_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_blt_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bltu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bltu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bltu_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bltu_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bne_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bne_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bne_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bne_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_add_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_add_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 2U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_add_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_addi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_addi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                            + VL_EXTENDS_II(32,6, (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_addi16sp_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_addi16sp_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                            + vlSelf->__PVT__insn_c_addi16sp__DOT__insn_imm)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_addi4spn_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_addi4spn_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 2U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 2U))));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                        + (IData)(vlSelf->insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0));
    } else if (vlSelf->__PVT__spec_insn_c_and_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_and_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_and_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_andi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_andi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                        & VL_EXTENDS_II(32,6, (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt)));
    } else if (vlSelf->__PVT__spec_insn_c_beqz_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_beqz_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_beqz_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_c_beqz_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_bnez_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_bnez_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_bnez_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_c_bnez_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_j_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_j_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_j_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_jal_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_jal_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 1U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_j_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
    } else if (vlSelf->__PVT__spec_insn_c_jalr_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_jalr_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 1U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = (0xfffffffeU 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
    } else if (vlSelf->__PVT__spec_insn_c_jr_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_jr_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = (0xfffffffeU 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_li_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_li_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? VL_EXTENDS_II(32,6, (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_lui_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_lui_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__insn_c_lui__DOT__insn_imm
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_lw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_lw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 2U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0)));
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_lw__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_lw__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = VL_SHIFTR_III(32,32,32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                     VL_SHIFTL_III(32,32,32, vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U));
    } else if (vlSelf->__PVT__spec_insn_c_lwsp_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_lwsp_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 2U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0)));
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_lwsp__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_lwsp__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? VL_SHIFTR_III(32,32,32, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[4U], 
                                                         VL_SHIFTL_III(32,32,32, vlSelf->insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_mv_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_mv_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 2U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_or_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_or_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_or_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_slli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_slli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? VL_SHIFTL_III(32,32,6, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_srai_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_srai_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = VL_SHIFTRS_III(32,32,6, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt));
    } else if (vlSelf->__PVT__spec_insn_c_srli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_srli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = VL_SHIFTR_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt));
    } else if (vlSelf->__PVT__spec_insn_c_sub_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_sub_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_sub_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_sw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_sw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0)));
        vlSelf->__PVT__spec_mem_wdata = VL_SHIFTL_III(32,32,32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                                      VL_SHIFTL_III(32,32,32, vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U));
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_lw__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_lw__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_swsp_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_swsp_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 2U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 2U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0)));
        vlSelf->__PVT__spec_mem_wdata = VL_SHIFTL_III(32,32,32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U], 
                                                      VL_SHIFTL_III(32,32,32, vlSelf->insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U));
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_swsp__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_swsp__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_xor_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_xor_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_xor_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_div_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_div_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                             ? 0xffffffffU
                                             : (((0x80000000U 
                                                  == 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                                 & (0xffffffffU 
                                                    == 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                                 ? 0x80000000U
                                                 : 
                                                VL_DIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_divu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_divu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                             ? 0xffffffffU
                                             : VL_DIV_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_jal_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_jal_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_jal_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_jal_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_jal_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_jalr_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_jalr_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = (0xfffffffeU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_jal_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_lb_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lb_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & vlSelf->__PVT__insn_lw__DOT__result))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lbu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lbu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (0xffU & vlSelf->__PVT__insn_lw__DOT__result)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lh_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lh_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (1U 
                                                 & vlSelf->__PVT__insn_addi__DOT__result)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & vlSelf->__PVT__insn_lw__DOT__result))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lhu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lhu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (1U 
                                                 & vlSelf->__PVT__insn_addi__DOT__result)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (0xffffU 
                                            & vlSelf->__PVT__insn_lw__DOT__result)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lui_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lui_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (0xfffff000U 
                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U])
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_addi__DOT__result)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__insn_lw__DOT__result
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mul_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mul_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                            * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mulh_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mulh_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (IData)(
                                                   ((vlSelf->__VdfgTmp_hb1a4827e__0 
                                                     * 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))) 
                                                    >> 0x20U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mulhsu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mulhsu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (IData)(
                                                   ((vlSelf->__VdfgTmp_hb1a4827e__0 
                                                     * (QData)((IData)(
                                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                                    >> 0x20U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mulhu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mulhu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (IData)(
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U])) 
                                                     * (QData)((IData)(
                                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))) 
                                                    >> 0x20U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_or_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_or_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_or_rd_wdata
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_ori_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_ori_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                            | VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_rem_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_rem_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                             ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                             : (((0x80000000U 
                                                  == 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]) 
                                                 & (0xffffffffU 
                                                    == 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                                 ? 0U
                                                 : 
                                                VL_MODDIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_remu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_remu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U])
                                             ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U]
                                             : VL_MODDIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sb_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sb_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0)));
        vlSelf->__PVT__spec_mem_wdata = vlSelf->__PVT__spec_insn_sb_mem_wdata;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_sb__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_sh_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sh_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0)));
        vlSelf->__PVT__spec_mem_wdata = vlSelf->__PVT__spec_insn_sb_mem_wdata;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_sb__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (1U 
                                                 & vlSelf->__PVT__insn_sb__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_sll_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sll_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                            << (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_slli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_slli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? VL_SHIFTL_III(32,32,6, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_slt_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_slt_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (IData)(vlSelf->__PVT__insn_blt__DOT__cond)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_slti_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_slti_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? VL_LTS_III(32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                      VL_EXTENDS_II(32,12, 
                                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                     >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sltiu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sltiu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                            < VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sltu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sltu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (IData)(vlSelf->__PVT__insn_bltu__DOT__cond)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sra_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sra_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? VL_SHIFTRS_III(32,32,5, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                          (0x1fU 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_srai_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_srai_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? VL_SHIFTRS_III(32,32,6, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                              >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_srl_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_srl_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                            >> (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[4U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_srli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_srli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? VL_SHIFTR_III(32,32,6, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U], 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sub_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sub_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_sub_rd_wdata
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0)));
        vlSelf->__PVT__spec_mem_wdata = vlSelf->__PVT__spec_insn_sb_mem_wdata;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_sb__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_sb__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_xor_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_xor_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_xor_rd_wdata
                                         : 0U);
    } else {
        if (vlSelf->__PVT__spec_insn_xori_valid) {
            vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_xori_valid));
            vlSelf->__PVT__spec_rs1_addr = (0x1fU & 
                                            (0x1fU 
                                             & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                >> 0xfU)));
            vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_rd_addr = (0x1fU & 
                                           (0x1fU & 
                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                             >> 7U)));
            vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
            vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
            vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                            + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[4U]);
            vlSelf->__PVT__spec_trap = (1U & 0U);
            vlSelf->__PVT__spec_rd_wdata = ((0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                 >> 7U)))
                                             ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
                                                ^ VL_EXTENDS_II(32,12, 
                                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[4U] 
                                                                 >> 0x14U)))
                                             : 0U);
        } else {
            vlSelf->__PVT__spec_valid = (1U & 0U);
            vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
            vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
            vlSelf->__PVT__spec_pc_wdata = 0U;
            vlSelf->__PVT__spec_trap = (1U & 0U);
            vlSelf->__PVT__spec_rd_wdata = 0U;
        }
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
    }
}

VL_INLINE_OPT void Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec__0(Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec___nba_sequent__TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec__0\n"); );
    // Init
    CData/*0:0*/ __VdfgTmp_h99712243__0;
    __VdfgTmp_h99712243__0 = 0;
    CData/*0:0*/ __VdfgTmp_h6fe23079__0;
    __VdfgTmp_h6fe23079__0 = 0;
    CData/*0:0*/ __VdfgTmp_hfe94040f__0;
    __VdfgTmp_hfe94040f__0 = 0;
    CData/*0:0*/ __VdfgTmp_he8004ba4__0;
    __VdfgTmp_he8004ba4__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha890dbb4__0;
    __VdfgTmp_ha890dbb4__0 = 0;
    CData/*0:0*/ __VdfgTmp_h8436152c__0;
    __VdfgTmp_h8436152c__0 = 0;
    CData/*0:0*/ __VdfgTmp_h8376ce6a__0;
    __VdfgTmp_h8376ce6a__0 = 0;
    CData/*0:0*/ __VdfgTmp_h98724db5__0;
    __VdfgTmp_h98724db5__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha33ffdac__0;
    __VdfgTmp_ha33ffdac__0 = 0;
    CData/*0:0*/ __VdfgTmp_h6ef3123b__0;
    __VdfgTmp_h6ef3123b__0 = 0;
    CData/*0:0*/ __VdfgTmp_hd187bcaf__0;
    __VdfgTmp_hd187bcaf__0 = 0;
    CData/*0:0*/ __VdfgTmp_h2ff1ede7__0;
    __VdfgTmp_h2ff1ede7__0 = 0;
    CData/*0:0*/ __VdfgTmp_ha4e42b33__0;
    __VdfgTmp_ha4e42b33__0 = 0;
    IData/*31:0*/ __VdfgTmp_h450dae8c__0;
    __VdfgTmp_h450dae8c__0 = 0;
    IData/*31:0*/ __VdfgTmp_hc8bcf263__0;
    __VdfgTmp_hc8bcf263__0 = 0;
    // Body
    vlSelf->__VdfgTmp_hb1a4827e__0 = (((QData)((IData)(
                                                       (- (IData)(
                                                                  (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                                                   >> 0x1fU))))) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])));
    vlSelf->__PVT__spec_insn_c_and_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]);
    vlSelf->__PVT__spec_insn_c_or_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                              | vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]);
    vlSelf->__PVT__spec_insn_c_sub_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                               - vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]);
    vlSelf->__PVT__spec_insn_c_xor_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                               ^ vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]);
    vlSelf->__PVT__insn_blt__DOT__cond = VL_LTS_III(32, 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]);
    vlSelf->__PVT__insn_bltu__DOT__cond = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                           < vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]);
    vlSelf->__PVT__spec_insn_c_j_pc_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
                                             + VL_EXTENDS_II(32,12, 
                                                             ((0x800U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                  >> 1U)) 
                                                              | ((0x400U 
                                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                     << 2U)) 
                                                                 | ((0x300U 
                                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                        >> 1U)) 
                                                                    | ((0x80U 
                                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                           << 1U)) 
                                                                       | ((0x40U 
                                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                              >> 1U)) 
                                                                          | ((0x20U 
                                                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                                << 3U)) 
                                                                             | ((0x10U 
                                                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                                >> 7U)) 
                                                                                | (0xeU 
                                                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                                >> 2U)))))))))));
    vlSelf->__PVT__insn_c_slli__DOT__insn_shamt = (
                                                   (0x20U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U)) 
                                                   | (0x1fU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         >> 2U)));
    if ((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                         >> 7U)))) {
        vlSelf->__PVT__spec_insn_jal_rd_wdata = ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_insn_add_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]);
    } else {
        vlSelf->__PVT__spec_insn_jal_rd_wdata = 0U;
        vlSelf->__PVT__spec_insn_add_rd_wdata = 0U;
    }
    vlSelf->__PVT__spec_insn_jal_pc_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
                                             + VL_EXTENDS_II(32,21, 
                                                             ((0x100000U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                  >> 0xbU)) 
                                                              | ((0xff000U 
                                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]) 
                                                                 | ((0x800U 
                                                                     & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                        >> 9U)) 
                                                                    | (0x7feU 
                                                                       & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                          >> 0x14U)))))));
    vlSelf->__PVT__insn_c_swsp__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                             + ((0xc0U 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 1U)) 
                                                | (0x3cU 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 7U))));
    vlSelf->__PVT__insn_sb__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                         + VL_EXTENDS_II(32,12, 
                                                         ((0xfe0U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                              >> 0x14U)) 
                                                          | (0x1fU 
                                                             & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                >> 7U)))));
    vlSelf->__PVT__insn_c_lwsp__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                             + ((0xc0U 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    << 4U)) 
                                                | ((0x20U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U)) 
                                                   | (0x1cU 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         >> 2U)))));
    __VdfgTmp_hc8bcf263__0 = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
                              + VL_EXTENDS_II(32,9, 
                                              ((0x100U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 4U)) 
                                               | ((0xc0U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      << 1U)) 
                                                  | ((0x20U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         << 3U)) 
                                                     | ((0x18U 
                                                         & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                            >> 7U)) 
                                                        | (6U 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                              >> 2U))))))));
    vlSelf->__PVT__insn_c_lw__DOT__addr = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                           + ((0x40U 
                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  << 1U)) 
                                              | ((0x38U 
                                                  & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                     >> 7U)) 
                                                 | (4U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 4U)))));
    vlSelf->__PVT__insn_addi__DOT__result = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                             + VL_EXTENDS_II(32,12, 
                                                             (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                              >> 0x14U)));
    vlSelf->__PVT__insn_c_addi16sp__DOT__insn_imm = 
        VL_EXTENDS_II(32,10, ((0x200U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                         >> 3U)) | 
                              ((0x180U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          << 4U)) | 
                               ((0x40U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                          << 1U)) | 
                                ((0x20U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           << 3U)) 
                                 | (0x10U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 2U)))))));
    vlSelf->insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0 
        = ((0x3c0U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                      >> 1U)) | ((0x30U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           >> 7U)) 
                                 | ((8U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                           >> 2U)) 
                                    | (4U & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 4U)))));
    vlSelf->__PVT__insn_c_lui__DOT__insn_imm = VL_EXTENDS_II(32,18, 
                                                             ((0x20000U 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                  << 5U)) 
                                                              | (0x1f000U 
                                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                    << 0xaU))));
    __VdfgTmp_h450dae8c__0 = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
                              + VL_EXTENDS_II(32,13, 
                                              ((0x1000U 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x13U)) 
                                               | ((0x800U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      << 4U)) 
                                                  | ((0x7e0U 
                                                      & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                         >> 0x14U)) 
                                                     | (0x1eU 
                                                        & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                           >> 7U)))))));
    __VdfgTmp_h6fe23079__0 = (IData)((0x7033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    __VdfgTmp_hfe94040f__0 = ((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 2U))) 
                              & (2U == (3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    __VdfgTmp_he8004ba4__0 = ((0U != (0x1fU & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                               >> 7U))) 
                              & ((~ (IData)((0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 2U))))) 
                                 & (2U == (3U & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    __VdfgTmp_ha890dbb4__0 = (IData)((1U == (0x1003U 
                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    __VdfgTmp_h8436152c__0 = (IData)((0x4033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    __VdfgTmp_h98724db5__0 = (IData)((0x1033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    __VdfgTmp_ha33ffdac__0 = (IData)((0x2033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    __VdfgTmp_h6ef3123b__0 = (IData)((0x3033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    __VdfgTmp_hd187bcaf__0 = (IData)((0x6033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    __VdfgTmp_h99712243__0 = (IData)((0x33U == (0x707fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    __VdfgTmp_h8376ce6a__0 = (IData)((0x5033U == (0x707fU 
                                                  & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    __VdfgTmp_h2ff1ede7__0 = (IData)((0x13U == (0x200007fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    vlSelf->__PVT__spec_insn_xori_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & (IData)(
                                                     (0x4013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_addi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & (IData)(
                                                     (0x13U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_andi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & (IData)(
                                                     (0x7013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_auipc_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 5U) 
                                            & (0x17U 
                                               == (0x7fU 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    vlSelf->__PVT__spec_insn_beq_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & (IData)(
                                                            (0x63U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_bge_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & (IData)(
                                                            (0x5063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_bgeu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & (IData)(
                                                     (0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_blt_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & (IData)(
                                                            (0x4063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_bltu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & (IData)(
                                                     (0x6063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_bne_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & (IData)(
                                                            (0x1063U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_c_addi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 5U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                & (IData)(
                                                          (1U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_and_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 5U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                               & (IData)(
                                                         (0x8c61U 
                                                          == 
                                                          (0xfc63U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_andi_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 5U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                & (IData)(
                                                          (0x8801U 
                                                           == 
                                                           (0xec03U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_beqz_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 5U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                & (IData)(
                                                          (0xc001U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_bnez_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 5U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                & (IData)(
                                                          (0xe001U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_j_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((~ (IData)(
                                                      (0U 
                                                       != 
                                                       VL_SHIFTR_III(32,32,32, 
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                           & (IData)(
                                                     (0xa001U 
                                                      == 
                                                      (0xe003U 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_jal_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 5U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                               & (IData)(
                                                         (0x2001U 
                                                          == 
                                                          (0xe003U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_li_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                              & (IData)(
                                                        (0x4001U 
                                                         == 
                                                         (0xe003U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_lw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                              & (IData)(
                                                        (0x4000U 
                                                         == 
                                                         (0xe003U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_lwsp_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 5U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x4002U 
                                                            == 
                                                            (0xe003U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                                           & (0U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                  >> 7U)))))));
    vlSelf->__PVT__spec_insn_c_or_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                              & (IData)(
                                                        (0x8c41U 
                                                         == 
                                                         (0xfc63U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_slli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 5U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                & (IData)(
                                                          (2U 
                                                           == 
                                                           (0xf003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_sub_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 5U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                               & (IData)(
                                                         (0x8c01U 
                                                          == 
                                                          (0xfc63U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_sw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                              & (IData)(
                                                        (0xc000U 
                                                         == 
                                                         (0xe003U 
                                                          & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_swsp_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 5U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                & (IData)(
                                                          (0xc002U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_c_xor_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 5U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                               & (IData)(
                                                         (0x8c21U 
                                                          == 
                                                          (0xfc63U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])))));
    vlSelf->__PVT__spec_insn_jal_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          (0x6fU == 
                                           (0x7fU & 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    vlSelf->__PVT__spec_insn_jalr_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & (IData)(
                                                     (0x67U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_lb_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 5U) & (IData)(
                                                           (3U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_lbu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & (IData)(
                                                            (0x4003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_lh_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 5U) & (IData)(
                                                           (0x1003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_lhu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & (IData)(
                                                            (0x5003U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_lui_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          (0x37U == 
                                           (0x7fU & 
                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])));
    vlSelf->__PVT__spec_insn_lw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 5U) & (IData)(
                                                           (0x2003U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_ori_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & (IData)(
                                                            (0x6013U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_sb_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 5U) & (IData)(
                                                           (0x23U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_sh_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 5U) & (IData)(
                                                           (0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_slti_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & (IData)(
                                                     (0x2013U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_sltiu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 5U) 
                                            & (IData)(
                                                      (0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->__PVT__spec_insn_sw_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 5U) & (IData)(
                                                           (0x2023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))));
    vlSelf->insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0 
        = (vlSelf->__PVT__insn_c_swsp__DOT__addr - 
           (0xfffffffcU & vlSelf->__PVT__insn_c_swsp__DOT__addr));
    vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0 = 
        (vlSelf->__PVT__insn_sb__DOT__addr - (0xfffffffcU 
                                              & vlSelf->__PVT__insn_sb__DOT__addr));
    vlSelf->insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0 
        = (vlSelf->__PVT__insn_c_lwsp__DOT__addr - 
           (0xfffffffcU & vlSelf->__PVT__insn_c_lwsp__DOT__addr));
    vlSelf->__PVT__spec_insn_c_beqz_pc_wdata = ((0U 
                                                 == 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])
                                                 ? __VdfgTmp_hc8bcf263__0
                                                 : 
                                                ((IData)(2U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]));
    vlSelf->__PVT__spec_insn_c_bnez_pc_wdata = ((0U 
                                                 != 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])
                                                 ? __VdfgTmp_hc8bcf263__0
                                                 : 
                                                ((IData)(2U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]));
    vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0 
        = (vlSelf->__PVT__insn_c_lw__DOT__addr - (0xfffffffcU 
                                                  & vlSelf->__PVT__insn_c_lw__DOT__addr));
    vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0 = 
        (vlSelf->__PVT__insn_addi__DOT__result - (0xfffffffcU 
                                                  & vlSelf->__PVT__insn_addi__DOT__result));
    vlSelf->__PVT__spec_insn_c_addi16sp_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                                  >> 5U) 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                VL_SHIFTR_III(32,32,32, 
                                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                    & (IData)(
                                                              ((0x6101U 
                                                                == 
                                                                (0xef83U 
                                                                 & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                                               & (0U 
                                                                  != vlSelf->__PVT__insn_c_addi16sp__DOT__insn_imm)))));
    vlSelf->__PVT__spec_insn_c_addi4spn_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                                  >> 5U) 
                                                 & ((~ (IData)(
                                                               (0U 
                                                                != 
                                                                VL_SHIFTR_III(32,32,32, 
                                                                              vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                    & (IData)(
                                                              ((0U 
                                                                == 
                                                                (0xe003U 
                                                                 & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                                               & (0U 
                                                                  != (IData)(vlSelf->insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0))))));
    vlSelf->__PVT__spec_insn_c_lui_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 5U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                               & (IData)(
                                                         ((0x6001U 
                                                           == 
                                                           (0xe003U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                                          & ((2U 
                                                              != 
                                                              (0x1fU 
                                                               & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                  >> 7U))) 
                                                             & (0U 
                                                                != vlSelf->__PVT__insn_c_lui__DOT__insn_imm))))));
    vlSelf->__PVT__spec_insn_blt_pc_wdata = ((IData)(vlSelf->__PVT__insn_blt__DOT__cond)
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]));
    vlSelf->__PVT__spec_insn_bltu_pc_wdata = ((IData)(vlSelf->__PVT__insn_bltu__DOT__cond)
                                               ? __VdfgTmp_h450dae8c__0
                                               : ((IData)(4U) 
                                                  + 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]));
    vlSelf->__PVT__spec_insn_beq_pc_wdata = ((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                              == vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]));
    vlSelf->__PVT__spec_insn_bge_pc_wdata = (VL_GTES_III(32, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]));
    vlSelf->__PVT__spec_insn_bgeu_pc_wdata = ((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                               >= vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                               ? __VdfgTmp_h450dae8c__0
                                               : ((IData)(4U) 
                                                  + 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]));
    vlSelf->__PVT__spec_insn_bne_pc_wdata = ((vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                              != vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                              ? __VdfgTmp_h450dae8c__0
                                              : ((IData)(4U) 
                                                 + 
                                                 vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]));
    vlSelf->__PVT__spec_insn_and_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h6fe23079__0)));
    vlSelf->__PVT__spec_insn_remu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((1U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h6fe23079__0)));
    vlSelf->__PVT__spec_insn_c_add_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 5U) 
                                            & ((~ (IData)(
                                                          (0U 
                                                           != 
                                                           VL_SHIFTR_III(32,32,32, 
                                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                               & (IData)(
                                                         ((0x9000U 
                                                           == 
                                                           (0xf000U 
                                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                                          & (IData)(__VdfgTmp_hfe94040f__0)))));
    vlSelf->__PVT__spec_insn_c_mv_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                              & (IData)(
                                                        ((0x8000U 
                                                          == 
                                                          (0xf000U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                                         & (IData)(__VdfgTmp_hfe94040f__0)))));
    vlSelf->__PVT__spec_insn_c_jalr_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 5U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x9000U 
                                                            == 
                                                            (0xf000U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                                           & (IData)(__VdfgTmp_he8004ba4__0)))));
    vlSelf->__PVT__spec_insn_c_jr_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((~ (IData)(
                                                         (0U 
                                                          != 
                                                          VL_SHIFTR_III(32,32,32, 
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                              & (IData)(
                                                        ((0x8000U 
                                                          == 
                                                          (0xf000U 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                                         & (IData)(__VdfgTmp_he8004ba4__0)))));
    vlSelf->__PVT__spec_insn_c_srai_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 5U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x8400U 
                                                            == 
                                                            (0xec00U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                                           & (IData)(__VdfgTmp_ha890dbb4__0)))));
    vlSelf->__PVT__spec_insn_c_srli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 5U) 
                                             & ((~ (IData)(
                                                           (0U 
                                                            != 
                                                            VL_SHIFTR_III(32,32,32, 
                                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U], 0x10U)))) 
                                                & (IData)(
                                                          ((0x8000U 
                                                            == 
                                                            (0xec00U 
                                                             & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                                           & (IData)(__VdfgTmp_ha890dbb4__0)))));
    vlSelf->__PVT__spec_insn_div_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((1U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8436152c__0)));
    vlSelf->__PVT__spec_insn_xor_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8436152c__0)));
    vlSelf->__PVT__spec_insn_mulh_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((1U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h98724db5__0)));
    vlSelf->__PVT__spec_insn_sll_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h98724db5__0)));
    vlSelf->__PVT__spec_insn_mulhsu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                              >> 5U) 
                                             & ((1U 
                                                 == 
                                                 (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x19U)) 
                                                & (IData)(__VdfgTmp_ha33ffdac__0)));
    vlSelf->__PVT__spec_insn_slt_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_ha33ffdac__0)));
    vlSelf->__PVT__spec_insn_mulhu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                             >> 5U) 
                                            & ((1U 
                                                == 
                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 0x19U)) 
                                               & (IData)(__VdfgTmp_h6ef3123b__0)));
    vlSelf->__PVT__spec_insn_sltu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((0U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h6ef3123b__0)));
    vlSelf->__PVT__spec_insn_or_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                          >> 5U) & 
                                         ((0U == (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                  >> 0x19U)) 
                                          & (IData)(__VdfgTmp_hd187bcaf__0)));
    vlSelf->__PVT__spec_insn_rem_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((1U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_hd187bcaf__0)));
    vlSelf->__PVT__spec_insn_add_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h99712243__0)));
    vlSelf->__PVT__spec_insn_mul_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((1U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h99712243__0)));
    vlSelf->__PVT__spec_insn_sub_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((0x20U == 
                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h99712243__0)));
    vlSelf->__PVT__spec_insn_divu_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((1U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 0x19U)) 
                                              & (IData)(__VdfgTmp_h8376ce6a__0)));
    vlSelf->__PVT__spec_insn_sra_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((0x20U == 
                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8376ce6a__0)));
    vlSelf->__PVT__spec_insn_srl_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                           >> 5U) & 
                                          ((0U == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x19U)) 
                                           & (IData)(__VdfgTmp_h8376ce6a__0)));
    vlSelf->__PVT__spec_insn_slli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & (IData)(
                                                     ((0x1000U 
                                                       == 
                                                       (0xfc007000U 
                                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                                      & (IData)(__VdfgTmp_h2ff1ede7__0))));
    __VdfgTmp_ha4e42b33__0 = (IData)(((0x5000U == (0x7000U 
                                                   & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])) 
                                      & (IData)(__VdfgTmp_h2ff1ede7__0)));
    vlSelf->__PVT__spec_insn_sb_mem_wdata = VL_SHIFTL_III(32,32,32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                                          VL_SHIFTL_III(32,32,32, vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0, 3U));
    vlSelf->__PVT__insn_lw__DOT__result = VL_SHIFTR_III(32,32,32, 
                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                        VL_SHIFTL_III(32,32,32, vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0, 3U));
    vlSelf->__PVT__spec_insn_srai_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((0x10U 
                                               == (
                                                   vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 0x1aU)) 
                                              & (IData)(__VdfgTmp_ha4e42b33__0)));
    vlSelf->__PVT__spec_insn_srli_valid = (((IData)(vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_valid) 
                                            >> 5U) 
                                           & ((0U == 
                                               (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 0x1aU)) 
                                              & (IData)(__VdfgTmp_ha4e42b33__0)));
    if (vlSelf->__PVT__spec_insn_add_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_add_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_add_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_addi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_addi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__insn_addi__DOT__result
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_and_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_and_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_and_rd_wdata
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_andi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_andi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                            & VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_auipc_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_auipc_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = 0U;
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
                                            + (0xfffff000U 
                                               & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_beq_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_beq_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_beq_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_beq_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bge_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bge_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bge_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bge_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bgeu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bgeu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bgeu_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bgeu_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_blt_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_blt_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_blt_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_blt_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bltu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bltu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bltu_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bltu_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_bne_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_bne_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_bne_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_bne_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_add_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_add_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 2U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_add_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_addi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_addi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                            + VL_EXTENDS_II(32,6, (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_addi16sp_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_addi16sp_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                            + vlSelf->__PVT__insn_c_addi16sp__DOT__insn_imm)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_addi4spn_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_addi4spn_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 2U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 2U))));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                        + (IData)(vlSelf->insn_c_addi4spn__DOT____VdfgTmp_hd8719ac1__0));
    } else if (vlSelf->__PVT__spec_insn_c_and_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_and_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_and_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_andi_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_andi_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                        & VL_EXTENDS_II(32,6, (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt)));
    } else if (vlSelf->__PVT__spec_insn_c_beqz_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_beqz_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_beqz_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_c_beqz_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_bnez_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_bnez_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_bnez_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_c_bnez_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_j_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_j_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_j_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_jal_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_jal_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 1U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_c_j_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
    } else if (vlSelf->__PVT__spec_insn_c_jalr_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_jalr_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 1U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = (0xfffffffeU 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
    } else if (vlSelf->__PVT__spec_insn_c_jr_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_jr_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = (0xfffffffeU 
                                        & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_li_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_li_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? VL_EXTENDS_II(32,6, (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_lui_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_lui_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = 0U;
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__insn_c_lui__DOT__insn_imm
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_lw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_lw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 2U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0)));
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_lw__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_lw__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = VL_SHIFTR_III(32,32,32, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                     VL_SHIFTL_III(32,32,32, vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U));
    } else if (vlSelf->__PVT__spec_insn_c_lwsp_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_lwsp_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 2U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0)));
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_lwsp__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_lwsp__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? VL_SHIFTR_III(32,32,32, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_mem_rdata[5U], 
                                                         VL_SHIFTL_III(32,32,32, vlSelf->insn_c_lwsp__DOT____VdfgTmp_he0ae363e__0, 3U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_mv_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_mv_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 2U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_or_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_or_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_or_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_slli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_slli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 7U)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? VL_SHIFTL_III(32,32,6, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_c_srai_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_srai_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = VL_SHIFTRS_III(32,32,6, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt));
    } else if (vlSelf->__PVT__spec_insn_c_srli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_srli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = VL_SHIFTR_III(32,32,6, 
                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], (IData)(vlSelf->__PVT__insn_c_slli__DOT__insn_shamt));
    } else if (vlSelf->__PVT__spec_insn_c_sub_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_sub_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = 0U;
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_sub_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_c_sw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_sw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0)));
        vlSelf->__PVT__spec_mem_wdata = VL_SHIFTL_III(32,32,32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                                      VL_SHIFTL_III(32,32,32, vlSelf->insn_c_sw__DOT____VdfgTmp_hd44bcdd7__0, 3U));
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_lw__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_lw__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_swsp_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_swsp_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 2U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 2U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0)));
        vlSelf->__PVT__spec_mem_wdata = VL_SHIFTL_III(32,32,32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U], 
                                                      VL_SHIFTL_III(32,32,32, vlSelf->insn_c_swsp__DOT____VdfgTmp_h6c2e5a2b__0, 3U));
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_c_swsp__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_c_swsp__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_c_xor_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_c_xor_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 7U))));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (8U 
                                                 | (7U 
                                                    & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                       >> 2U))));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (8U 
                                                | (7U 
                                                   & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                      >> 7U))));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(2U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_c_xor_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_div_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_div_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                             ? 0xffffffffU
                                             : (((0x80000000U 
                                                  == 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                                 & (0xffffffffU 
                                                    == 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                                 ? 0x80000000U
                                                 : 
                                                VL_DIVS_III(32, 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                            vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_divu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_divu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                             ? 0xffffffffU
                                             : VL_DIV_III(32, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_jal_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_jal_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = vlSelf->__PVT__spec_insn_jal_pc_wdata;
        vlSelf->__PVT__spec_trap = (1U & (1U & vlSelf->__PVT__spec_insn_jal_pc_wdata));
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_jal_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_jalr_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_jalr_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = (0xfffffffeU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = vlSelf->__PVT__spec_insn_jal_rd_wdata;
    } else if (vlSelf->__PVT__spec_insn_lb_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lb_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? VL_EXTENDS_II(32,8, 
                                                         (0xffU 
                                                          & vlSelf->__PVT__insn_lw__DOT__result))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lbu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lbu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (0xffU & vlSelf->__PVT__insn_lw__DOT__result)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lh_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lh_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (1U 
                                                 & vlSelf->__PVT__insn_addi__DOT__result)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? VL_EXTENDS_II(32,16, 
                                                         (0xffffU 
                                                          & vlSelf->__PVT__insn_lw__DOT__result))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lhu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lhu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (1U 
                                                 & vlSelf->__PVT__insn_addi__DOT__result)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (0xffffU 
                                            & vlSelf->__PVT__insn_lw__DOT__result)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lui_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lui_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (0xfffff000U 
                                            & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U])
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_lw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_lw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_lw__DOT____VdfgTmp_hac1c962f__0)));
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_addi__DOT__result);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_addi__DOT__result)));
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__insn_lw__DOT__result
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mul_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mul_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                            * vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mulh_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mulh_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (IData)(
                                                   ((vlSelf->__VdfgTmp_hb1a4827e__0 
                                                     * 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
                                                                                >> 0x1fU))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(
                                                                        vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))) 
                                                    >> 0x20U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mulhsu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mulhsu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (IData)(
                                                   ((vlSelf->__VdfgTmp_hb1a4827e__0 
                                                     * (QData)((IData)(
                                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                                    >> 0x20U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_mulhu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_mulhu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (IData)(
                                                   (((QData)((IData)(
                                                                     vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U])) 
                                                     * (QData)((IData)(
                                                                       vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))) 
                                                    >> 0x20U))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_or_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_or_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_or_rd_wdata
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_ori_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_ori_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                            | VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_rem_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_rem_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                             ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                             : (((0x80000000U 
                                                  == 
                                                  vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]) 
                                                 & (0xffffffffU 
                                                    == 
                                                    vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                                 ? 0U
                                                 : 
                                                VL_MODDIVS_III(32, 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                               vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_remu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_remu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? ((0U == 
                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U])
                                             ? vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U]
                                             : VL_MODDIV_III(32, 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                             vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sb_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sb_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(1U), vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0)));
        vlSelf->__PVT__spec_mem_wdata = vlSelf->__PVT__spec_insn_sb_mem_wdata;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_sb__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_sh_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sh_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(3U), vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0)));
        vlSelf->__PVT__spec_mem_wdata = vlSelf->__PVT__spec_insn_sb_mem_wdata;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_sb__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (1U 
                                                 & vlSelf->__PVT__insn_sb__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_sll_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sll_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                            << (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_slli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_slli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? VL_SHIFTL_III(32,32,6, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_slt_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_slt_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (IData)(vlSelf->__PVT__insn_blt__DOT__cond)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_slti_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_slti_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? VL_LTS_III(32, 
                                                      vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                      VL_EXTENDS_II(32,12, 
                                                                    (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                     >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sltiu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sltiu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                            < VL_EXTENDS_II(32,12, 
                                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sltu_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sltu_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (IData)(vlSelf->__PVT__insn_bltu__DOT__cond)
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sra_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sra_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? VL_SHIFTRS_III(32,32,5, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                          (0x1fU 
                                                           & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_srai_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_srai_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? VL_SHIFTRS_III(32,32,6, 
                                                          vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                          (0x3fU 
                                                           & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                              >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_srl_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_srl_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                            >> (0x1fU 
                                                & vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs2_rdata[5U]))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_srli_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_srli_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? VL_SHIFTR_III(32,32,6, 
                                                         vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U], 
                                                         (0x3fU 
                                                          & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                             >> 0x14U)))
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sub_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sub_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_sub_rd_wdata
                                         : 0U);
    } else if (vlSelf->__PVT__spec_insn_sw_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_sw_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & (0xfU 
                                                 & VL_SHIFTL_III(4,4,32, (IData)(0xfU), vlSelf->insn_sw__DOT____VdfgTmp_h889c0e76__0)));
        vlSelf->__PVT__spec_mem_wdata = vlSelf->__PVT__spec_insn_sb_mem_wdata;
        vlSelf->__PVT__spec_mem_addr = (0xfffffffcU 
                                        & vlSelf->__PVT__insn_sb__DOT__addr);
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & (0U != (3U 
                                                 & vlSelf->__PVT__insn_sb__DOT__addr)));
        vlSelf->__PVT__spec_rd_wdata = 0U;
    } else if (vlSelf->__PVT__spec_insn_xor_valid) {
        vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_xor_valid));
        vlSelf->__PVT__spec_rs1_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0xfU)));
        vlSelf->__PVT__spec_rs2_addr = (0x1fU & (0x1fU 
                                                 & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                    >> 0x14U)));
        vlSelf->__PVT__spec_rd_addr = (0x1fU & (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)));
        vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
        vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                        + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
        vlSelf->__PVT__spec_trap = (1U & 0U);
        vlSelf->__PVT__spec_rd_wdata = ((0U != (0x1fU 
                                                & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                   >> 7U)))
                                         ? vlSelf->__PVT__spec_insn_c_xor_rd_wdata
                                         : 0U);
    } else {
        if (vlSelf->__PVT__spec_insn_xori_valid) {
            vlSelf->__PVT__spec_valid = (1U & (IData)(vlSelf->__PVT__spec_insn_xori_valid));
            vlSelf->__PVT__spec_rs1_addr = (0x1fU & 
                                            (0x1fU 
                                             & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                >> 0xfU)));
            vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_rd_addr = (0x1fU & 
                                           (0x1fU & 
                                            (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                             >> 7U)));
            vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
            vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
            vlSelf->__PVT__spec_pc_wdata = ((IData)(4U) 
                                            + vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_pc_rdata[5U]);
            vlSelf->__PVT__spec_trap = (1U & 0U);
            vlSelf->__PVT__spec_rd_wdata = ((0U != 
                                             (0x1fU 
                                              & (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                 >> 7U)))
                                             ? (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
                                                ^ VL_EXTENDS_II(32,12, 
                                                                (vlSymsp->TOP__top_tb.__PVT__monitor__DOT__rvfi_insn[5U] 
                                                                 >> 0x14U)))
                                             : 0U);
        } else {
            vlSelf->__PVT__spec_valid = (1U & 0U);
            vlSelf->__PVT__spec_rs1_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_rs2_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_rd_addr = (0x1fU & 0U);
            vlSelf->__PVT__spec_mem_rmask = (0xfU & 0U);
            vlSelf->__PVT__spec_mem_wmask = (0xfU & 0U);
            vlSelf->__PVT__spec_pc_wdata = 0U;
            vlSelf->__PVT__spec_trap = (1U & 0U);
            vlSelf->__PVT__spec_rd_wdata = 0U;
        }
        vlSelf->__PVT__spec_mem_wdata = 0U;
        vlSelf->__PVT__spec_mem_addr = 0U;
    }
}
