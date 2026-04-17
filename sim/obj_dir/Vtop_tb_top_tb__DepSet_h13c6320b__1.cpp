// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb_top_tb.h"

VL_INLINE_OPT void Vtop_tb_top_tb___nba_sequent__TOP__top_tb__1(Vtop_tb_top_tb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_tb_top_tb___nba_sequent__TOP__top_tb__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v1;
    __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v1 = 0;
    IData/*31:0*/ __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v1;
    __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v1 = 0;
    CData/*4:0*/ __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v2;
    __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v2 = 0;
    IData/*31:0*/ __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v2;
    __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v2 = 0;
    CData/*4:0*/ __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v3;
    __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v3 = 0;
    IData/*31:0*/ __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v3;
    __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v3 = 0;
    CData/*4:0*/ __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v4;
    __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v4 = 0;
    IData/*31:0*/ __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v4;
    __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v4 = 0;
    CData/*4:0*/ __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v5;
    __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v5 = 0;
    IData/*31:0*/ __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v5;
    __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v5 = 0;
    CData/*4:0*/ __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v6;
    __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v6 = 0;
    IData/*31:0*/ __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v6;
    __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v6 = 0;
    CData/*4:0*/ __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v7;
    __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v7 = 0;
    IData/*31:0*/ __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v7;
    __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v7 = 0;
    CData/*4:0*/ __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v8;
    __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v8 = 0;
    IData/*31:0*/ __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v8;
    __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v8 = 0;
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<3>/*95:0*/ __Vtemp_7;
    VlWide<3>/*95:0*/ __Vtemp_8;
    // Body
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0U;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                                >> 5U)))) {
        if (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid) {
            if (VL_UNLIKELY(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap)) {
                VL_WRITEF("-------- RVFI Monitor error 601 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in trap\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x259U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                >> 0x19U))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 602 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in rs1_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x25aU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                >> 0x19U))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 603 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in rs2_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x25bU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                               >> 0x19U))) 
                             != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr)))) {
                VL_WRITEF("-------- RVFI Monitor error 604 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in rd_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x25cU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 605 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in rd_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x25dU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 606 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in pc_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x25eU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                      >> 0x14U)) != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask)))) {
                VL_WRITEF("-------- RVFI Monitor error 608 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in mem_wmask\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x260U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x14U)) & (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask))))) {
                VL_WRITEF("-------- RVFI Monitor error 610 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in mem_rmask[0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x262U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x14U) & ((0xffU & 
                                            vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U]) 
                                           != (0xffU 
                                               & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata))))) {
                VL_WRITEF("-------- RVFI Monitor error 620 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in mem_wdata[7:0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x26cU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x15U)) & 
                                   ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask) 
                                    >> 1U))))) {
                VL_WRITEF("-------- RVFI Monitor error 611 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in mem_rmask[1]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x263U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x15U) & ((0xffU & 
                                            (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U] 
                                             >> 8U)) 
                                           != (0xffU 
                                               & (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata 
                                                  >> 8U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 621 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in mem_wdata[15:8]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x26dU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x16U)) & 
                                   ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask) 
                                    >> 2U))))) {
                VL_WRITEF("-------- RVFI Monitor error 612 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in mem_rmask[2]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x264U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x16U) & ((0xffU & 
                                            (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U] 
                                             >> 0x10U)) 
                                           != (0xffU 
                                               & (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata 
                                                  >> 0x10U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 622 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in mem_wdata[23:16]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x26eU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                 >> 0x17U)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask) 
                                               >> 3U)))) {
                VL_WRITEF("-------- RVFI Monitor error 613 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in mem_rmask[3]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x265U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x17U) & ((vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U] 
                                            >> 0x18U) 
                                           != (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata 
                                               >> 0x18U))))) {
                VL_WRITEF("-------- RVFI Monitor error 623 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in mem_wdata[31:24]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x26fU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U] 
                              != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr) 
                             & (IData)(((0U != (0xf00000U 
                                                & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask)) 
                                        | (0U != (0xf00000U 
                                                  & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask))))))) {
                VL_WRITEF("-------- RVFI Monitor error 607 in channel 5: %Ntop_tb.monitor.monitor.ch5_handle_error at time %0t --------\nError message: mismatch in mem_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch5_errcode = 0x25fU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 5U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[5U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 5U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x19U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x19U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x14U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x14U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__PVT__spec_mem_wdata);
            }
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0U;
    if ((1U & ((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                                >> 6U)))) {
        if (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid) {
            if (VL_UNLIKELY(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap)) {
                VL_WRITEF("-------- RVFI Monitor error 701 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in trap\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2bdU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                >> 0x1eU))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 702 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in rs1_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2beU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                >> 0x1eU))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 703 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in rs2_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2bfU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                               >> 0x1eU))) 
                             != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr)))) {
                VL_WRITEF("-------- RVFI Monitor error 704 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in rd_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2c0U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 705 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in rd_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2c1U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 706 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in pc_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2c2U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                      >> 0x18U)) != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask)))) {
                VL_WRITEF("-------- RVFI Monitor error 708 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in mem_wmask\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2c4U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x18U)) & (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask))))) {
                VL_WRITEF("-------- RVFI Monitor error 710 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in mem_rmask[0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2c6U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x18U) & ((0xffU & 
                                            vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U]) 
                                           != (0xffU 
                                               & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata))))) {
                VL_WRITEF("-------- RVFI Monitor error 720 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in mem_wdata[7:0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2d0U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x19U)) & 
                                   ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask) 
                                    >> 1U))))) {
                VL_WRITEF("-------- RVFI Monitor error 711 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in mem_rmask[1]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2c7U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x19U) & ((0xffU & 
                                            (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U] 
                                             >> 8U)) 
                                           != (0xffU 
                                               & (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata 
                                                  >> 8U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 721 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in mem_wdata[15:8]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2d1U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x1aU)) & 
                                   ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask) 
                                    >> 2U))))) {
                VL_WRITEF("-------- RVFI Monitor error 712 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in mem_rmask[2]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2c8U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x1aU) & ((0xffU & 
                                            (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U] 
                                             >> 0x10U)) 
                                           != (0xffU 
                                               & (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata 
                                                  >> 0x10U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 722 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in mem_wdata[23:16]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2d2U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                 >> 0x1bU)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask) 
                                               >> 3U)))) {
                VL_WRITEF("-------- RVFI Monitor error 713 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in mem_rmask[3]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2c9U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x1bU) & ((vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U] 
                                            >> 0x18U) 
                                           != (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata 
                                               >> 0x18U))))) {
                VL_WRITEF("-------- RVFI Monitor error 723 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in mem_wdata[31:24]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2d3U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U] 
                              != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr) 
                             & (IData)(((0U != (0xf000000U 
                                                & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask)) 
                                        | (0U != (0xf000000U 
                                                  & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask))))))) {
                VL_WRITEF("-------- RVFI Monitor error 707 in channel 6: %Ntop_tb.monitor.monitor.ch6_handle_error at time %0t --------\nError message: mismatch in mem_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch6_errcode = 0x2c3U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 6U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[6U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 6U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x1eU))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x1eU))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U],
                          4,(0xfU & (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                     >> 0x18U)),4,(0xfU 
                                                   & (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                                      >> 0x18U)),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__PVT__spec_mem_wdata);
            }
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                          >> 7U))) {
        if (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid) {
            if (VL_UNLIKELY(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap)) {
                VL_WRITEF("-------- RVFI Monitor error 801 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in trap\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x321U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                >> 0x23U))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 802 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in rs1_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x322U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                                >> 0x23U))) 
                              != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr)) 
                             & (0U != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr))))) {
                VL_WRITEF("-------- RVFI Monitor error 803 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in rs2_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x323U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                               >> 0x23U))) 
                             != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr)))) {
                VL_WRITEF("-------- RVFI Monitor error 804 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in rd_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x324U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 805 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in rd_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x325U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U] 
                             != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata))) {
                VL_WRITEF("-------- RVFI Monitor error 806 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in pc_wdata\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x326U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x1cU) != (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask)))) {
                VL_WRITEF("-------- RVFI Monitor error 808 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in mem_wmask\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x328U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x1cU)) & (IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask))))) {
                VL_WRITEF("-------- RVFI Monitor error 810 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in mem_rmask[0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x32aU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x1cU) & ((0xffU & 
                                            vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U]) 
                                           != (0xffU 
                                               & vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata))))) {
                VL_WRITEF("-------- RVFI Monitor error 820 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in mem_wdata[7:0]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x334U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x1dU)) & 
                                   ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask) 
                                    >> 1U))))) {
                VL_WRITEF("-------- RVFI Monitor error 811 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in mem_rmask[1]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x32bU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x1dU) & ((0xffU & 
                                            (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U] 
                                             >> 8U)) 
                                           != (0xffU 
                                               & (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata 
                                                  >> 8U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 821 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in mem_wdata[15:8]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x335U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY((1U & ((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                       >> 0x1eU)) & 
                                   ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask) 
                                    >> 2U))))) {
                VL_WRITEF("-------- RVFI Monitor error 812 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in mem_rmask[2]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x32cU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x1eU) & ((0xffU & 
                                            (vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U] 
                                             >> 0x10U)) 
                                           != (0xffU 
                                               & (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata 
                                                  >> 0x10U)))))) {
                VL_WRITEF("-------- RVFI Monitor error 822 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in mem_wdata[23:16]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x336U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((~ (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                 >> 0x1fU)) & ((IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask) 
                                               >> 3U)))) {
                VL_WRITEF("-------- RVFI Monitor error 813 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in mem_rmask[3]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x32dU;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                              >> 0x1fU) & ((vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U] 
                                            >> 0x18U) 
                                           != (vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata 
                                               >> 0x18U))))) {
                VL_WRITEF("-------- RVFI Monitor error 823 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in mem_wdata[31:24]\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x337U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
            if (VL_UNLIKELY(((vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U] 
                              != vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr) 
                             & ((0U != (vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                        >> 0x1cU)) 
                                | (0U != (vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                                          >> 0x1cU)))))) {
                VL_WRITEF("-------- RVFI Monitor error 807 in channel 7: %Ntop_tb.monitor.monitor.ch7_handle_error at time %0t --------\nError message: mismatch in mem_addr\n",
                          vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                          -12);
                vlSelf->__PVT__monitor__DOT__monitor__DOT__ch7_errcode = 0x327U;
                VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_insn = %x\nrvfi_trap = 0\nrvfi_halt = %x\nrvfi_intr = 0\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_mem_addr = %x\nrvfi_mem_rmask = %x\nrvfi_mem_wmask = %x\nrvfi_mem_rdata = %x\nrvfi_mem_wdata = %x\nspec_valid = %x\nspec_trap = %x\nspec_rs1_addr = %x\nspec_rs2_addr = %x\nspec_rd_addr = %x\nspec_rd_wdata = %x\nspec_pc_wdata = %x\nspec_mem_addr = %x\n",
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid) 
                                   >> 7U)),64,(((QData)((IData)(
                                                                vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_insn[7U],
                          1,(1U & ((IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt) 
                                   >> 7U)),5,(0x1fU 
                                              & (IData)(
                                                        (vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr 
                                                         >> 0x23U))),
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U],
                          5,(0x1fU & (IData)((vlSelf->__PVT__monitor__DOT__rvfi_rd_addr 
                                              >> 0x23U))),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U],
                          4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask 
                             >> 0x1cU),4,(vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask 
                                          >> 0x1cU),
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U],
                          32,vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U],
                          1,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_valid),
                          1,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_trap,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs1_addr),
                          5,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rs2_addr,
                          5,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_addr),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_rd_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_pc_wdata,
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_addr);
                VL_WRITEF("spec_mem_rmask = %x\nspec_mem_wmask = %x\nspec_mem_wdata = %x\n",
                          4,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_rmask,
                          4,(IData)(vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wmask),
                          32,vlSymsp->TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__PVT__spec_mem_wdata);
            }
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro0_errcode_p = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro1_errcode_p = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro2_errcode_p = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro3_errcode_p = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro4_errcode_p = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro5_errcode_p = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro6_errcode_p = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro7_errcode_p = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid = 0U;
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap = 0U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_valid) 
                          & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_rdata 
                             != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                                  << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                                               >> 0xfU)))) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 130 in reordered channel 0: %Ntop_tb.monitor.monitor.ro0_handle_error_p at time %0t --------\nError message: mismatch with shadow pc\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro0_errcode_p = 0x82U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_valid) 
                          & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_trap)) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 133 in reordered channel 0: %Ntop_tb.monitor.monitor.ro0_handle_error_p at time %0t --------\nError message: expected intr after trap\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro0_errcode_p = 0x85U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_valid) 
                          & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_rdata 
                             != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                                  << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                                               >> 0xfU)))) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 230 in reordered channel 1: %Ntop_tb.monitor.monitor.ro1_handle_error_p at time %0t --------\nError message: mismatch with shadow pc\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro1_errcode_p = 0xe6U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_valid) 
                          & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_trap)) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 233 in reordered channel 1: %Ntop_tb.monitor.monitor.ro1_handle_error_p at time %0t --------\nError message: expected intr after trap\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro1_errcode_p = 0xe9U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid) 
                          & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_rdata 
                             != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                                  << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                                               >> 0xfU)))) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 330 in reordered channel 2: %Ntop_tb.monitor.monitor.ro2_handle_error_p at time %0t --------\nError message: mismatch with shadow pc\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro2_errcode_p = 0x14aU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid) 
                          & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_trap)) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 333 in reordered channel 2: %Ntop_tb.monitor.monitor.ro2_handle_error_p at time %0t --------\nError message: expected intr after trap\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro2_errcode_p = 0x14dU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid) 
                          & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata 
                             != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                                  << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                                               >> 0xfU)))) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 430 in reordered channel 3: %Ntop_tb.monitor.monitor.ro3_handle_error_p at time %0t --------\nError message: mismatch with shadow pc\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro3_errcode_p = 0x1aeU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                             >> 0xfU));
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid) 
                          & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_trap)) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 433 in reordered channel 3: %Ntop_tb.monitor.monitor.ro3_handle_error_p at time %0t --------\nError message: expected intr after trap\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro3_errcode_p = 0x1b1U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid) 
                          & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
                             != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                                  << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                                               >> 0xfU)))) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 530 in reordered channel 4: %Ntop_tb.monitor.monitor.ro4_handle_error_p at time %0t --------\nError message: mismatch with shadow pc\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro4_errcode_p = 0x212U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                             >> 0xfU));
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid) 
                          & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap)) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 533 in reordered channel 4: %Ntop_tb.monitor.monitor.ro4_handle_error_p at time %0t --------\nError message: expected intr after trap\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro4_errcode_p = 0x215U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid))) {
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid) 
                          & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
                             != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                                  << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                                               >> 0xfU)))) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 630 in reordered channel 5: %Ntop_tb.monitor.monitor.ro5_handle_error_p at time %0t --------\nError message: mismatch with shadow pc\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro5_errcode_p = 0x276U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                             >> 0xfU));
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid) 
                          & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap)) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 633 in reordered channel 5: %Ntop_tb.monitor.monitor.ro5_handle_error_p at time %0t --------\nError message: expected intr after trap\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro5_errcode_p = 0x279U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid))) {
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid) 
                          & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
                             != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                                  << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                                               >> 0xfU)))) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 730 in reordered channel 6: %Ntop_tb.monitor.monitor.ro6_handle_error_p at time %0t --------\nError message: mismatch with shadow pc\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro6_errcode_p = 0x2daU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                             >> 0xfU));
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid) 
                          & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap)) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 733 in reordered channel 6: %Ntop_tb.monitor.monitor.ro6_handle_error_p at time %0t --------\nError message: expected intr after trap\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro6_errcode_p = 0x2ddU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_valid))) {
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid) 
                          & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
                             != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[4U] 
                                  << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[3U] 
                                               >> 0xfU)))) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 830 in reordered channel 7: %Ntop_tb.monitor.monitor.ro7_handle_error_p at time %0t --------\nError message: mismatch with shadow pc\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro7_errcode_p = 0x33eU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[4U] 
                             >> 0xfU));
        if (VL_UNLIKELY((((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid) 
                          & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap)) 
                         & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                               >> 0xfU))))) {
            VL_WRITEF("-------- RVFI Monitor error 833 in reordered channel 7: %Ntop_tb.monitor.monitor.ro7_handle_error_p at time %0t --------\nError message: expected intr after trap\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro7_errcode_p = 0x341U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_pc_valid = %x\nshadow_pc_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata);
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro0_errcode_r = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro1_errcode_r = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro2_errcode_r = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro3_errcode_r = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro4_errcode_r = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro5_errcode_r = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro6_errcode_r = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__ro7_errcode_r = 0U;
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid = 1U;
        vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v0 = 1U;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[1U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 131 in reordered channel 0: %Ntop_tb.monitor.monitor.ro0_handle_error_r at time %0t --------\nError message: mismatch with shadow rs1\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro0_errcode_r = 0x83U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
            = (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                                      >> 0xaU)))));
        __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v1 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v1 = 1U;
        __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v1 
            = (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU));
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[1U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 132 in reordered channel 0: %Ntop_tb.monitor.monitor.ro0_handle_error_r at time %0t --------\nError message: mismatch with shadow rs2\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro0_errcode_r = 0x84U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[1U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 231 in reordered channel 1: %Ntop_tb.monitor.monitor.ro1_handle_error_r at time %0t --------\nError message: mismatch with shadow rs1\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro1_errcode_r = 0xe7U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
            = (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                                      >> 0xaU)))));
        __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v2 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v2 = 1U;
        __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v2 
            = (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU));
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[1U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 232 in reordered channel 1: %Ntop_tb.monitor.monitor.ro1_handle_error_r at time %0t --------\nError message: mismatch with shadow rs2\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro1_errcode_r = 0xe8U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[1U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 331 in reordered channel 2: %Ntop_tb.monitor.monitor.ro2_handle_error_r at time %0t --------\nError message: mismatch with shadow rs1\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro2_errcode_r = 0x14bU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
            = (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                                      >> 0xaU)))));
        __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v3 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v3 = 1U;
        __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v3 
            = (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU));
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[1U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 332 in reordered channel 2: %Ntop_tb.monitor.monitor.ro2_handle_error_r at time %0t --------\nError message: mismatch with shadow rs2\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro2_errcode_r = 0x14cU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[1U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 431 in reordered channel 3: %Ntop_tb.monitor.monitor.ro3_handle_error_r at time %0t --------\nError message: mismatch with shadow rs1\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro3_errcode_r = 0x1afU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
            = (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                                      >> 0xaU)))));
        __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v4 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v4 = 1U;
        __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v4 
            = (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU));
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[1U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 432 in reordered channel 3: %Ntop_tb.monitor.monitor.ro3_handle_error_r at time %0t --------\nError message: mismatch with shadow rs2\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro3_errcode_r = 0x1b0U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[1U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 531 in reordered channel 4: %Ntop_tb.monitor.monitor.ro4_handle_error_r at time %0t --------\nError message: mismatch with shadow rs1\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro4_errcode_r = 0x213U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
            = (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                                      >> 0xaU)))));
        __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v5 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v5 = 1U;
        __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v5 
            = (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU));
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[1U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 532 in reordered channel 4: %Ntop_tb.monitor.monitor.ro4_handle_error_r at time %0t --------\nError message: mismatch with shadow rs2\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro4_errcode_r = 0x214U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid))) {
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[1U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 631 in reordered channel 5: %Ntop_tb.monitor.monitor.ro5_handle_error_r at time %0t --------\nError message: mismatch with shadow rs1\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro5_errcode_r = 0x277U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
            = (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                                      >> 0xaU)))));
        __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v6 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v6 = 1U;
        __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v6 
            = (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                        >> 0xaU));
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[1U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 632 in reordered channel 5: %Ntop_tb.monitor.monitor.ro5_handle_error_r at time %0t --------\nError message: mismatch with shadow rs2\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro5_errcode_r = 0x278U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid))) {
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[1U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 731 in reordered channel 6: %Ntop_tb.monitor.monitor.ro6_handle_error_r at time %0t --------\nError message: mismatch with shadow rs1\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro6_errcode_r = 0x2dbU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
            = (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                                      >> 0xaU)))));
        __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v7 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v7 = 1U;
        __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v7 
            = (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                        >> 0xaU));
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[1U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 732 in reordered channel 6: %Ntop_tb.monitor.monitor.ro6_handle_error_r at time %0t --------\nError message: mismatch with shadow rs2\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro6_errcode_r = 0x2dcU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata);
        }
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_valid))) {
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[1U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 831 in reordered channel 7: %Ntop_tb.monitor.monitor.ro7_handle_error_r at time %0t --------\nError message: mismatch with shadow rs1\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro7_errcode_r = 0x33fU;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata);
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
            = (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
               | (0xffffffffULL & ((IData)(1U) << (0x1fU 
                                                   & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                                      >> 0xaU)))));
        __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v8 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[3U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[2U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v8 = 1U;
        __Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v8 
            = (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                        >> 0xaU));
        if (VL_UNLIKELY(((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid) 
                         & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                            != ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[2U] 
                                 << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[1U] 
                                              >> 0xfU)))))) {
            VL_WRITEF("-------- RVFI Monitor error 832 in reordered channel 7: %Ntop_tb.monitor.monitor.ro7_handle_error_r at time %0t --------\nError message: mismatch with shadow rs2\n",
                      vlSymsp->name(),64,VL_TIME_UNITED_Q(1),
                      -12);
            vlSelf->__PVT__monitor__DOT__monitor__DOT__ro7_errcode_r = 0x340U;
            VL_WRITEF("rvfi_valid = %x\nrvfi_order = %x\nrvfi_rs1_addr = %x\nrvfi_rs2_addr = %x\nrvfi_rs1_rdata = %x\nrvfi_rs2_rdata = %x\nrvfi_rd_addr = %x\nrvfi_rd_wdata = %x\nrvfi_pc_rdata = %x\nrvfi_pc_wdata = %x\nrvfi_intr = %x\nrvfi_trap = %x\nshadow_rs1_valid = %x\nshadow_rs1_rdata = %x\nshadow_rs2_valid = %x\nshadow_rs2_rdata = %x\n",
                      1,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_valid,
                      64,vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_order,
                      5,(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U]),
                      5,(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                  >> 5U)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[1U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[2U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[1U] 
                                        >> 0xfU)),5,
                      (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                >> 0xaU)),32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[3U] 
                                               << 0x11U) 
                                              | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[2U] 
                                                 >> 0xfU)),
                      32,((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[4U] 
                           << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[3U] 
                                        >> 0xfU)),32,
                      ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[4U] 
                                     >> 0xfU)),1,(1U 
                                                  & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                                                     >> 0xfU)),
                      1,(1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                               >> 0x10U)),1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata,
                      1,(IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid),
                      32,vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata);
        }
    }
    vlSelf->__PVT__golden__DOT__pc_next = vlSelf->__PVT__golden__DOT__pc;
    vlSelf->golden_dmem_addr = 0U;
    vlSelf->golden_dmem_wmask = 0U;
    vlSelf->__PVT__golden__DOT__dmem_rmask = 0U;
    vlSelf->golden_dmem_wdata = 0U;
    vlSelf->__PVT__golden__DOT__rd_v = 0U;
    if (((((((((0U == vlSelf->__PVT__golden__DOT__state) 
               | (1U == vlSelf->__PVT__golden__DOT__state)) 
              | (2U == vlSelf->__PVT__golden__DOT__state)) 
             | (3U == vlSelf->__PVT__golden__DOT__state)) 
            | (4U == vlSelf->__PVT__golden__DOT__state)) 
           | (5U == vlSelf->__PVT__golden__DOT__state)) 
          | (6U == vlSelf->__PVT__golden__DOT__state)) 
         | (7U == vlSelf->__PVT__golden__DOT__state))) {
        if ((0U == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__pc_next = vlSelf->__PVT__golden__DOT__pc;
        } else if ((1U != vlSelf->__PVT__golden__DOT__state)) {
            if ((2U != vlSelf->__PVT__golden__DOT__state)) {
                if ((3U != vlSelf->__PVT__golden__DOT__state)) {
                    vlSelf->__PVT__golden__DOT__pc_next 
                        = ((4U == vlSelf->__PVT__golden__DOT__state)
                            ? ((IData)(4U) + vlSelf->__PVT__golden__DOT__pc)
                            : ((5U == vlSelf->__PVT__golden__DOT__state)
                                ? ((IData)(4U) + vlSelf->__PVT__golden__DOT__pc)
                                : ((6U == vlSelf->__PVT__golden__DOT__state)
                                    ? (vlSelf->__PVT__golden__DOT__pc 
                                       + (((- (IData)(
                                                      (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                       >> 0x1fU))) 
                                           << 0x14U) 
                                          | ((0xff000U 
                                              & vlSelf->__PVT__golden__DOT__ir__DOT__data) 
                                             | ((0x800U 
                                                 & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                      >> 0x14U))))))
                                    : (0xfffffffeU 
                                       & (vlSelf->__PVT__golden__DOT__rs1_v 
                                          + vlSelf->__PVT__golden__DOT__i_imm)))));
                }
            }
        }
        if ((0U != vlSelf->__PVT__golden__DOT__state)) {
            if ((1U != vlSelf->__PVT__golden__DOT__state)) {
                if ((2U != vlSelf->__PVT__golden__DOT__state)) {
                    if ((3U != vlSelf->__PVT__golden__DOT__state)) {
                        vlSelf->__PVT__golden__DOT__rd_v 
                            = ((4U == vlSelf->__PVT__golden__DOT__state)
                                ? (0xfffff000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                : ((5U == vlSelf->__PVT__golden__DOT__state)
                                    ? (vlSelf->__PVT__golden__DOT__pc 
                                       + (0xfffff000U 
                                          & vlSelf->__PVT__golden__DOT__ir__DOT__data))
                                    : ((6U == vlSelf->__PVT__golden__DOT__state)
                                        ? ((IData)(4U) 
                                           + vlSelf->__PVT__golden__DOT__pc)
                                        : ((IData)(4U) 
                                           + vlSelf->__PVT__golden__DOT__pc))));
                    }
                }
            }
        }
    } else {
        if ((8U == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__pc_next = ((IData)(vlSelf->__PVT__golden__DOT__br_en)
                                                    ? 
                                                   (vlSelf->__PVT__golden__DOT__pc 
                                                    + 
                                                    (((- (IData)(
                                                                 (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                                  >> 0x1fU))) 
                                                      << 0xcU) 
                                                     | ((0x800U 
                                                         & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                            << 4U)) 
                                                        | ((0x7e0U 
                                                            & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                               >> 0x14U)) 
                                                           | (0x1eU 
                                                              & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                                 >> 7U))))))
                                                    : 
                                                   ((IData)(4U) 
                                                    + vlSelf->__PVT__golden__DOT__pc));
        } else if ((9U == vlSelf->__PVT__golden__DOT__state)) {
            if (vlSymsp->TOP.golden_dmem_resp) {
                vlSelf->__PVT__golden__DOT__pc_next 
                    = ((IData)(4U) + vlSelf->__PVT__golden__DOT__pc);
            }
        } else if ((0xaU == vlSelf->__PVT__golden__DOT__state)) {
            if (vlSymsp->TOP.golden_dmem_resp) {
                vlSelf->__PVT__golden__DOT__pc_next 
                    = ((IData)(4U) + vlSelf->__PVT__golden__DOT__pc);
            }
        } else if ((0xbU == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__pc_next = ((IData)(4U) 
                                                   + vlSelf->__PVT__golden__DOT__pc);
        } else if ((0xcU == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__pc_next = ((IData)(4U) 
                                                   + vlSelf->__PVT__golden__DOT__pc);
        } else if ((0xdU == vlSelf->__PVT__golden__DOT__state)) {
            vlSelf->__PVT__golden__DOT__pc_next = ((IData)(4U) 
                                                   + vlSelf->__PVT__golden__DOT__pc);
        }
        if ((8U != vlSelf->__PVT__golden__DOT__state)) {
            if ((9U == vlSelf->__PVT__golden__DOT__state)) {
                vlSelf->golden_dmem_addr = (vlSelf->__PVT__golden__DOT__rs1_v 
                                            + vlSelf->__PVT__golden__DOT__i_imm);
                vlSelf->__PVT__golden__DOT__dmem_rmask 
                    = (0xfU & ((0x4000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                ? ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? 0U : ((0x1000U 
                                             & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                             ? ((IData)(3U) 
                                                << 
                                                (3U 
                                                 & vlSelf->golden_dmem_addr))
                                             : ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & vlSelf->golden_dmem_addr))))
                                : ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                        ? 0U : 0xfU)
                                    : ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                        ? ((IData)(3U) 
                                           << (3U & vlSelf->golden_dmem_addr))
                                        : ((IData)(1U) 
                                           << (3U & vlSelf->golden_dmem_addr))))));
                if (vlSymsp->TOP.golden_dmem_resp) {
                    vlSelf->__PVT__golden__DOT__rd_v 
                        = ((0x4000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                            ? ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                ? 0U : ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                         ? (0xffffU 
                                            & (vlSymsp->TOP.golden_dmem_rdata 
                                               >> (0x1fU 
                                                   & VL_SHIFTL_III(5,32,32, 
                                                                   (1U 
                                                                    & (vlSelf->golden_dmem_addr 
                                                                       >> 1U)), 4U))))
                                         : (0xffU & 
                                            (vlSymsp->TOP.golden_dmem_rdata 
                                             >> (0x1fU 
                                                 & VL_SHIFTL_III(5,32,32, 
                                                                 (3U 
                                                                  & vlSelf->golden_dmem_addr), 3U))))))
                            : ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                ? ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? 0U : vlSymsp->TOP.golden_dmem_rdata)
                                : ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                    ? (((- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP.golden_dmem_rdata 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(0xfU) 
                                                           + 
                                                           VL_SHIFTL_III(5,32,32, 
                                                                         (1U 
                                                                          & (vlSelf->golden_dmem_addr 
                                                                             >> 1U)), 4U))))))) 
                                        << 0x10U) | 
                                       (0xffffU & (vlSymsp->TOP.golden_dmem_rdata 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_SHIFTL_III(5,32,32, 
                                                                    (1U 
                                                                     & (vlSelf->golden_dmem_addr 
                                                                        >> 1U)), 4U)))))
                                    : (((- (IData)(
                                                   (1U 
                                                    & (vlSymsp->TOP.golden_dmem_rdata 
                                                       >> 
                                                       (0x1fU 
                                                        & ((IData)(7U) 
                                                           + 
                                                           VL_SHIFTL_III(5,32,32, 
                                                                         (3U 
                                                                          & vlSelf->golden_dmem_addr), 3U))))))) 
                                        << 8U) | (0xffU 
                                                  & (vlSymsp->TOP.golden_dmem_rdata 
                                                     >> 
                                                     (0x1fU 
                                                      & VL_SHIFTL_III(5,32,32, 
                                                                      (3U 
                                                                       & vlSelf->golden_dmem_addr), 3U))))))));
                }
            } else if ((0xaU == vlSelf->__PVT__golden__DOT__state)) {
                vlSelf->golden_dmem_addr = (vlSelf->__PVT__golden__DOT__rs1_v 
                                            + (((- (IData)(
                                                           (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                            >> 0x1fU))) 
                                                << 0xbU) 
                                               | ((0x7e0U 
                                                   & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                      >> 0x14U)) 
                                                  | (0x1fU 
                                                     & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                                        >> 7U)))));
                if ((0U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                  >> 0xcU)))) {
                    vlSelf->golden_dmem_wmask = (0xfU 
                                                 & ((IData)(1U) 
                                                    << 
                                                    (3U 
                                                     & vlSelf->golden_dmem_addr)));
                    vlSelf->golden_dmem_wdata = (((~ 
                                                   ((IData)(0xffU) 
                                                    << 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (3U 
                                                                      & vlSelf->golden_dmem_addr), 3U)))) 
                                                  & vlSelf->golden_dmem_wdata) 
                                                 | (0xffffffffULL 
                                                    & ((0xffU 
                                                        & vlSelf->__PVT__golden__DOT__rs2_v) 
                                                       << 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(5,32,32, 
                                                                        (3U 
                                                                         & vlSelf->golden_dmem_addr), 3U)))));
                } else if ((1U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                         >> 0xcU)))) {
                    vlSelf->golden_dmem_wmask = (0xfU 
                                                 & ((IData)(3U) 
                                                    << 
                                                    (3U 
                                                     & vlSelf->golden_dmem_addr)));
                    vlSelf->golden_dmem_wdata = (((~ 
                                                   ((IData)(0xffffU) 
                                                    << 
                                                    (0x1fU 
                                                     & VL_SHIFTL_III(5,32,32, 
                                                                     (1U 
                                                                      & (vlSelf->golden_dmem_addr 
                                                                         >> 1U)), 4U)))) 
                                                  & vlSelf->golden_dmem_wdata) 
                                                 | (0xffffffffULL 
                                                    & ((0xffffU 
                                                        & vlSelf->__PVT__golden__DOT__rs2_v) 
                                                       << 
                                                       (0x1fU 
                                                        & VL_SHIFTL_III(5,32,32, 
                                                                        (1U 
                                                                         & (vlSelf->golden_dmem_addr 
                                                                            >> 1U)), 4U)))));
                } else if ((2U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                         >> 0xcU)))) {
                    vlSelf->golden_dmem_wmask = (0xfU 
                                                 & ((IData)(0xfU) 
                                                    << 
                                                    (3U 
                                                     & vlSelf->golden_dmem_addr)));
                    vlSelf->golden_dmem_wdata = vlSelf->__PVT__golden__DOT__rs2_v;
                } else {
                    vlSelf->golden_dmem_wmask = (0xfU 
                                                 & 0U);
                    vlSelf->golden_dmem_wdata = 0U;
                }
            } else if ((0xbU == vlSelf->__PVT__golden__DOT__state)) {
                vlSelf->__PVT__golden__DOT__rd_v = 
                    ((2U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                   >> 0xcU))) ? (IData)(vlSelf->__PVT__golden__DOT__br_en)
                      : ((3U == (7U & (vlSelf->__PVT__golden__DOT__ir__DOT__data 
                                       >> 0xcU))) ? (IData)(vlSelf->__PVT__golden__DOT__br_en)
                          : vlSelf->__PVT__golden__DOT__aluout));
            } else if ((0xcU == vlSelf->__PVT__golden__DOT__state)) {
                vlSelf->__PVT__golden__DOT__rd_v = 
                    ((0x4000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                      ? vlSelf->__PVT__golden__DOT__aluout
                      : ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                          ? (IData)(vlSelf->__PVT__golden__DOT__br_en)
                          : vlSelf->__PVT__golden__DOT__aluout));
            } else if ((0xdU == vlSelf->__PVT__golden__DOT__state)) {
                VL_EXTENDS_WI(65,32, __Vtemp_3, vlSelf->__PVT__golden__DOT__rs1_v);
                __Vtemp_4[0U] = __Vtemp_3[0U];
                __Vtemp_4[1U] = __Vtemp_3[1U];
                __Vtemp_4[2U] = (1U & __Vtemp_3[2U]);
                VL_EXTENDS_WQ(65,33, __Vtemp_6, (QData)((IData)(vlSelf->__PVT__golden__DOT__rs2_v)));
                __Vtemp_7[0U] = __Vtemp_6[0U];
                __Vtemp_7[1U] = __Vtemp_6[1U];
                __Vtemp_7[2U] = (1U & __Vtemp_6[2U]);
                VL_MULS_WWW(65, __Vtemp_8, __Vtemp_4, __Vtemp_7);
                vlSelf->__PVT__golden__DOT__rd_v = 
                    ((0x4000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                      ? ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                          ? ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                              ? ((0U == vlSelf->__PVT__golden__DOT__rs2_v)
                                  ? vlSelf->__PVT__golden__DOT__rs1_v
                                  : VL_MODDIV_III(32, vlSelf->__PVT__golden__DOT__rs1_v, vlSelf->__PVT__golden__DOT__rs2_v))
                              : ((0U == vlSelf->__PVT__golden__DOT__rs2_v)
                                  ? vlSelf->__PVT__golden__DOT__rs1_v
                                  : (((0x80000000U 
                                       == vlSelf->__PVT__golden__DOT__rs1_v) 
                                      & (0xffffffffU 
                                         == vlSelf->__PVT__golden__DOT__rs2_v))
                                      ? 0U : VL_MODDIVS_III(32, vlSelf->__PVT__golden__DOT__rs1_v, vlSelf->__PVT__golden__DOT__rs2_v))))
                          : ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                              ? ((0U == vlSelf->__PVT__golden__DOT__rs2_v)
                                  ? 0xffffffffU : VL_DIV_III(32, vlSelf->__PVT__golden__DOT__rs1_v, vlSelf->__PVT__golden__DOT__rs2_v))
                              : ((0U == vlSelf->__PVT__golden__DOT__rs2_v)
                                  ? 0xffffffffU : (
                                                   ((0x80000000U 
                                                     == vlSelf->__PVT__golden__DOT__rs1_v) 
                                                    & (0xffffffffU 
                                                       == vlSelf->__PVT__golden__DOT__rs2_v))
                                                    ? 0x80000000U
                                                    : 
                                                   VL_DIVS_III(32, vlSelf->__PVT__golden__DOT__rs1_v, vlSelf->__PVT__golden__DOT__rs2_v)))))
                      : ((0x2000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                          ? ((0x1000U & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                              ? (IData)((((QData)((IData)(vlSelf->__PVT__golden__DOT__rs1_v)) 
                                          * (QData)((IData)(vlSelf->__PVT__golden__DOT__rs2_v))) 
                                         >> 0x20U))
                              : __Vtemp_8[1U]) : ((0x1000U 
                                                   & vlSelf->__PVT__golden__DOT__ir__DOT__data)
                                                   ? (IData)(
                                                             (vlSelf->__PVT__golden__DOT__mul_result_ss 
                                                              >> 0x20U))
                                                   : (IData)(vlSelf->__PVT__golden__DOT__mul_result_ss))));
            }
        }
    }
    vlSelf->__PVT__monitor__DOT__rvfi_halt = ((0xf8U 
                                               & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)) 
                                              | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                  [2U] 
                                                  << 2U) 
                                                 | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                     [1U] 
                                                     << 1U) 
                                                    | vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                    [0U])));
    vlSelf->__PVT__monitor__DOT__rvfi_halt = ((0xc7U 
                                               & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)) 
                                              | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                  [5U] 
                                                  << 5U) 
                                                 | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                     [4U] 
                                                     << 4U) 
                                                    | (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                       [3U] 
                                                       << 3U))));
    vlSelf->__PVT__monitor__DOT__rvfi_halt = ((0x3fU 
                                               & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_halt)) 
                                              | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                  [7U] 
                                                  << 7U) 
                                                 | (vlSymsp->TOP__top_tb__mon_itf.__PVT__halt
                                                    [6U] 
                                                    << 6U)));
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v0) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v1) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs[__Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v1] 
            = __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v1;
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v2) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs[__Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v2] 
            = __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v2;
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v3) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs[__Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v3] 
            = __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v3;
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v4) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs[__Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v4] 
            = __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v4;
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v5) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs[__Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v5] 
            = __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v5;
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v6) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs[__Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v6] 
            = __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v6;
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v7) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs[__Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v7] 
            = __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v7;
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__shadow_xregs__v8) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs[__Vdlyvdim0__monitor__DOT__monitor__DOT__shadow_xregs__v8] 
            = __Vdlyvval__monitor__DOT__monitor__DOT__shadow_xregs__v8;
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag = 1U;
    if (vlSymsp->TOP.rst) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor = 0ULL;
        vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid = 0U;
    } else {
        if ((1U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            if ((1U & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                       >> (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[0U])))) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xea60U) 
                                  + (0xffU & vlSelf->__PVT__monitor__DOT__rvfi_order[0U])));
            }
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                   | (0xffffU & ((IData)(1U) << (0xfU 
                                                 & vlSelf->__PVT__monitor__DOT__rvfi_order[0U]))));
        }
        if ((2U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            if ((1U & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                       >> (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[2U])))) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xea60U) 
                                  + (0xffU & vlSelf->__PVT__monitor__DOT__rvfi_order[2U])));
            }
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                   | (0xffffU & ((IData)(1U) << (0xfU 
                                                 & vlSelf->__PVT__monitor__DOT__rvfi_order[2U]))));
        }
        if ((4U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            if ((1U & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                       >> (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[4U])))) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xea60U) 
                                  + (0xffU & vlSelf->__PVT__monitor__DOT__rvfi_order[4U])));
            }
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                   | (0xffffU & ((IData)(1U) << (0xfU 
                                                 & vlSelf->__PVT__monitor__DOT__rvfi_order[4U]))));
        }
        if ((8U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            if ((1U & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                       >> (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[6U])))) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xea60U) 
                                  + (0xffU & vlSelf->__PVT__monitor__DOT__rvfi_order[6U])));
            }
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                   | (0xffffU & ((IData)(1U) << (0xfU 
                                                 & vlSelf->__PVT__monitor__DOT__rvfi_order[6U]))));
        }
        if ((0x10U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            if ((1U & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                       >> (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[8U])))) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xea60U) 
                                  + (0xffU & vlSelf->__PVT__monitor__DOT__rvfi_order[8U])));
            }
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                   | (0xffffU & ((IData)(1U) << (0xfU 
                                                 & vlSelf->__PVT__monitor__DOT__rvfi_order[8U]))));
        }
        if ((0x20U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            if ((1U & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                       >> (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU])))) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xea60U) 
                                  + (0xffU & vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU])));
            }
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                   | (0xffffU & ((IData)(1U) << (0xfU 
                                                 & vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU]))));
        }
        if ((0x40U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            if ((1U & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                       >> (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU])))) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xea60U) 
                                  + (0xffU & vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU])));
            }
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                   | (0xffffU & ((IData)(1U) << (0xfU 
                                                 & vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU]))));
        }
        if ((0x80U & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid))) {
            if ((1U & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                       >> (0xfU & vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU])))) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xea60U) 
                                  + (0xffU & vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU])));
            }
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                   | (0xffffU & ((IData)(1U) << (0xfU 
                                                 & vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU]))));
        }
        if (((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag) 
             & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                >> (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))))) {
            if (((((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                               [(0xfU 
                                                 & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U]))) 
                 != vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xee48U) 
                                  + (0xffU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))));
            }
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_order 
                = (((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                    [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U])));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][2U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[1U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][3U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][4U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][5U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][6U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                = (0x1ffffU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][7U]);
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((~ ((IData)(1U) << (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)))) 
                   & (IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor 
                = (1ULL + vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor);
        } else {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag = 0U;
        }
        if (((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag) 
             & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                >> (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))))) {
            if (((((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                               [(0xfU 
                                                 & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U]))) 
                 != vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xee48U) 
                                  + (0xffU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))));
            }
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_order 
                = (((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                    [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U])));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][2U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[1U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][3U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][4U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][5U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][6U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                = (0x1ffffU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][7U]);
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((~ ((IData)(1U) << (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)))) 
                   & (IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor 
                = (1ULL + vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor);
        } else {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag = 0U;
        }
        if (((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag) 
             & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                >> (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))))) {
            if (((((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                               [(0xfU 
                                                 & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U]))) 
                 != vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xee48U) 
                                  + (0xffU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))));
            }
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_order 
                = (((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                    [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U])));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][2U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[1U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][3U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][4U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][5U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][6U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                = (0x1ffffU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][7U]);
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((~ ((IData)(1U) << (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)))) 
                   & (IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor 
                = (1ULL + vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor);
        } else {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag = 0U;
        }
        if (((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag) 
             & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                >> (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))))) {
            if (((((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                               [(0xfU 
                                                 & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U]))) 
                 != vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xee48U) 
                                  + (0xffU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))));
            }
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_order 
                = (((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                    [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U])));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][2U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[1U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][3U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][4U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][5U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][6U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                = (0x1ffffU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][7U]);
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((~ ((IData)(1U) << (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)))) 
                   & (IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor 
                = (1ULL + vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor);
        } else {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag = 0U;
        }
        if (((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag) 
             & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                >> (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))))) {
            if (((((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                               [(0xfU 
                                                 & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U]))) 
                 != vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xee48U) 
                                  + (0xffU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))));
            }
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_order 
                = (((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                    [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U])));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][2U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[1U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][3U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][4U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][5U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][6U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                = (0x1ffffU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][7U]);
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((~ ((IData)(1U) << (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)))) 
                   & (IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor 
                = (1ULL + vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor);
        } else {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag = 0U;
        }
        if (((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag) 
             & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                >> (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))))) {
            if (((((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                               [(0xfU 
                                                 & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U]))) 
                 != vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xee48U) 
                                  + (0xffU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))));
            }
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_order 
                = (((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                    [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U])));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][2U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[1U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][3U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][4U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][5U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][6U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                = (0x1ffffU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][7U]);
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((~ ((IData)(1U) << (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)))) 
                   & (IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor 
                = (1ULL + vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor);
        } else {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag = 0U;
        }
        if (((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag) 
             & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                >> (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))))) {
            if (((((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                               [(0xfU 
                                                 & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U]))) 
                 != vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xee48U) 
                                  + (0xffU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))));
            }
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_order 
                = (((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                    [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U])));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][2U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[1U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][3U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][4U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][5U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][6U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                = (0x1ffffU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][7U]);
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((~ ((IData)(1U) << (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)))) 
                   & (IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor 
                = (1ULL + vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor);
        } else {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag = 0U;
        }
        if (((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag) 
             & ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid) 
                >> (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))))) {
            if (((((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                   << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                               [(0xfU 
                                                 & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U]))) 
                 != vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)) {
                vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_errcode 
                    = (0xffffU & ((IData)(0xee48U) 
                                  + (0xffU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))));
            }
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_order 
                = (((QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                    [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                                                [(0xfU 
                                                  & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][0U])));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][2U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[1U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][3U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[2U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][4U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[3U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][5U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[4U] 
                = vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][6U];
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                = (0x1ffffU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer
                   [(0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor))][7U]);
            vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid 
                = ((~ ((IData)(1U) << (0xfU & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor)))) 
                   & (IData)(vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid));
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor 
                = (1ULL + vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__cursor);
        } else {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__continue_flag = 0U;
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__valid 
        = vlSelf->__Vdly__monitor__DOT__monitor__DOT__rob__DOT__valid;
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0][0U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[0U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0][1U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[1U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0][2U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[2U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0][3U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[3U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0][4U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[4U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0][5U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[5U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0][6U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[6U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0][7U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v0[7U];
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1][0U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[0U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1][1U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[1U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1][2U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[2U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1][3U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[3U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1][4U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[4U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1][5U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[5U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1][6U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[6U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1][7U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v1[7U];
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2][0U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[0U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2][1U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[1U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2][2U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[2U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2][3U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[3U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2][4U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[4U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2][5U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[5U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2][6U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[6U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2][7U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v2[7U];
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3][0U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[0U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3][1U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[1U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3][2U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[2U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3][3U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[3U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3][4U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[4U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3][5U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[5U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3][6U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[6U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3][7U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v3[7U];
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4][0U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[0U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4][1U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[1U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4][2U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[2U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4][3U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[3U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4][4U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[4U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4][5U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[5U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4][6U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[6U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4][7U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v4[7U];
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5][0U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[0U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5][1U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[1U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5][2U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[2U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5][3U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[3U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5][4U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[4U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5][5U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[5U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5][6U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[6U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5][7U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v5[7U];
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6][0U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[0U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6][1U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[1U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6][2U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[2U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6][3U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[3U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6][4U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[4U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6][5U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[5U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6][6U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[6U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6][7U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v6[7U];
    }
    if (vlSelf->__Vdlyvset__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7][0U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[0U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7][1U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[1U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7][2U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[2U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7][3U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[3U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7][4U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[4U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7][5U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[5U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7][6U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[6U];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__rob__DOT__buffer[vlSelf->__Vdlyvdim0__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7][7U] 
            = vlSelf->__Vdlyvval__monitor__DOT__monitor__DOT__rob__DOT__buffer__v7[7U];
    }
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h687c3f0f__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h458111f9__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
    }
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8f8de6b2__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h845449ac__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd9693db6__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6406a584__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9ed75f22__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h94a69566__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h015e9540__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hdbc9a842__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9a334b54__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2cf8544a__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h84139451__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hff982c99__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h23f458cb__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h1d25340f__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h821d34ad__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he8f201ab__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hac28caa1__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6c1f5b3__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd0253a29__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h33811742__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_ha4713db3__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h239dd55b__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h84688035__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h57b89cc1__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9f209d67__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6b6e6815__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2c63fb63__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h019edc5d__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_valid 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_valid;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_trap 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc_trap;
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6f3e661b__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hc4755b34__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h5d544099__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h04c8a2ce__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6858561b__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hf52c9d23__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h08771295__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd59fb651__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6aa7b63f__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h21754a35__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he0137f2b__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8ec4773d__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U])));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U])];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                                  >> 5U))));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow0_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                       >> 5U))];
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
    } else {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                             >> 0xfU));
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
        = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_pc;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[4U] 
                             >> 0xfU));
    }
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[4U] 
                             >> 0xfU));
    }
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h93807142__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hbe3d468f__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hffa8ed01__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6ddbe86__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hfd7abf7f__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9705a690__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haa96bd01__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h27236079__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h4adc75cb__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h854c57e7__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haca45885__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h51ddd1ab__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                               >> 5U))));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8fba82b1__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
    vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hb0ff9ce3__0 
        = ((IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_valid) 
           & ((0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[0U] 
                        >> 0xaU)) == (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                               >> 5U))));
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U])));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h93807142__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                                  >> 5U))));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hbe3d468f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow1_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hffa8ed01__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hffa8ed01__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6f3e661b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6ddbe86__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6ddbe86__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hc4755b34__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow2_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hfd7abf7f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h5d544099__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hfd7abf7f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h5d544099__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd0253a29__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9705a690__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h04c8a2ce__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9705a690__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h04c8a2ce__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h33811742__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow3_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haa96bd01__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6858561b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_ha4713db3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haa96bd01__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6858561b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_ha4713db3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h84139451__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h27236079__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hf52c9d23__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h239dd55b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h27236079__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hf52c9d23__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h239dd55b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hff982c99__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow4_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h4adc75cb__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h08771295__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h84688035__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h23f458cb__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h4adc75cb__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h08771295__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h84688035__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h23f458cb__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9ed75f22__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h854c57e7__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd59fb651__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h57b89cc1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h1d25340f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h854c57e7__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd59fb651__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h57b89cc1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h1d25340f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h94a69566__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow5_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_valid 
            = (1U & (~ (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                        >> 0x10U)));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_trap 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[5U] 
                     >> 0x10U));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_pc_rdata 
            = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[5U] 
                << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[4U] 
                             >> 0xfU));
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haca45885__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6aa7b63f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9f209d67__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h821d34ad__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h015e9540__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_haca45885__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6aa7b63f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9f209d67__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h821d34ad__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h015e9540__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8f8de6b2__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h51ddd1ab__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h21754a35__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6b6e6815__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he8f201ab__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hdbc9a842__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h51ddd1ab__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h21754a35__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6b6e6815__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he8f201ab__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hdbc9a842__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h845449ac__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow6_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                 >> 0xfU));
        }
    }
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 0U;
    vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata = 0U;
    if (((~ (IData)(vlSymsp->TOP.rst)) & (IData)(vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_valid))) {
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8fba82b1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he0137f2b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2c63fb63__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hac28caa1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9a334b54__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd9693db6__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U])];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8fba82b1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_he0137f2b__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2c63fb63__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hac28caa1__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h9a334b54__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd9693db6__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h687c3f0f__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs1_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                                 >> 0xfU));
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid 
            = (1U & (vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs_valid 
                     >> (0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                                  >> 5U))));
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hb0ff9ce3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8ec4773d__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h019edc5d__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6c1f5b3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2cf8544a__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6406a584__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
        }
        vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
            = vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow_xregs
            [(0x1fU & (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o7_data[0U] 
                       >> 5U))];
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hb0ff9ce3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o0_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h8ec4773d__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o1_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h019edc5d__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o2_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_hd6c1f5b3__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o3_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h2cf8544a__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o4_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h6406a584__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o5_data[2U] 
                                 >> 0xfU));
        }
        if (vlSelf->monitor__DOT__monitor__DOT____VdfgExtracted_h458111f9__0) {
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_valid = 1U;
            vlSelf->__PVT__monitor__DOT__monitor__DOT__shadow7_rs2_rdata 
                = ((vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[3U] 
                    << 0x11U) | (vlSelf->__PVT__monitor__DOT__monitor__DOT__rob_o6_data[2U] 
                                 >> 0xfU));
        }
    }
}

VL_INLINE_OPT void Vtop_tb_top_tb___nba_sequent__TOP__top_tb__2(Vtop_tb_top_tb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_tb_top_tb___nba_sequent__TOP__top_tb__2\n"); );
    // Body
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[0U] 
        = vlSymsp->TOP__top_tb__dut.__PVT__order;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[1U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[2U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[3U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[4U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[5U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[6U] = 0ULL;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__order[7U] = 0ULL;
    vlSelf->__PVT__monitor__DOT__rvfi_order[0U] = (IData)(
                                                          vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                          [0U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[1U] = (IData)(
                                                          (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                           [0U] 
                                                           >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[2U] = (IData)(
                                                          vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                          [1U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[3U] = (IData)(
                                                          (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                           [1U] 
                                                           >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[4U] = (IData)(
                                                          vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                          [2U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[5U] = (IData)(
                                                          (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                           [2U] 
                                                           >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[6U] = (IData)(
                                                          vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                          [3U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[7U] = (IData)(
                                                          (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                           [3U] 
                                                           >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[8U] = (IData)(
                                                          vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                          [4U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[9U] = (IData)(
                                                          (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                           [4U] 
                                                           >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xaU] = (IData)(
                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                            [5U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xbU] = (IData)(
                                                            (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                             [5U] 
                                                             >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xcU] = (IData)(
                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                            [6U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xdU] = (IData)(
                                                            (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                             [6U] 
                                                             >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xeU] = (IData)(
                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                            [7U]);
    vlSelf->__PVT__monitor__DOT__rvfi_order[0xfU] = (IData)(
                                                            (vlSymsp->TOP__top_tb__mon_itf.__PVT__order
                                                             [7U] 
                                                             >> 0x20U));
}

VL_INLINE_OPT void Vtop_tb_top_tb___nba_sequent__TOP__top_tb__3(Vtop_tb_top_tb* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+      Vtop_tb_top_tb___nba_sequent__TOP__top_tb__3\n"); );
    // Body
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[0U] 
        = (0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[3U] 
                   >> 0x12U));
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[0U] 
        = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[4U] 
            << 0xaU) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[3U] 
                        >> 0x16U));
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[0U] 
        = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xaU] 
            << 0x18U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[9U] 
                         >> 8U));
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[0U] 
        = (0xfU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[3U] 
                   >> 0xeU));
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[0U] 
        = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[2U] 
            << 0x12U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[1U] 
                         >> 0xeU));
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[0U] 
        = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[5U] 
            << 0xaU) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[4U] 
                        >> 0x16U));
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[0U] 
        = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[3U] 
            << 0x12U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[2U] 
                         >> 0xeU));
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata[7U] = 0U;
    if ((0x40U & vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[8U])) {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[0U] 
            = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[6U] 
                << 4U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[5U] 
                          >> 0x1cU));
        vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[0U] 
            = (0x1fU & ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[8U] 
                         << 4U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[7U] 
                                   >> 0x1cU)));
    } else {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[0U] = 0U;
        vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[0U] = 0U;
    }
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[0U] 
        = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xbU] 
            << 0x18U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[0xaU] 
                         >> 8U));
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata[7U] = 0U;
    if ((0x80U & vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[8U])) {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[0U] 
            = ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[7U] 
                << 4U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[6U] 
                          >> 0x1cU));
        vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[0U] 
            = (0x1fU & (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[8U] 
                        >> 1U));
    } else {
        vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[0U] = 0U;
        vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[0U] = 0U;
    }
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[0U] = 
        ((vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[9U] 
          << 0x18U) | (vlSymsp->TOP__top_tb__dut.__PVT__commit_rob_o[8U] 
                       >> 8U));
    vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__inst[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[0U] 
        = vlSymsp->TOP__top_tb__dut.__PVT__monitor_rd_addr;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr[7U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[0U] 
        = vlSymsp->TOP__top_tb__dut.__PVT__monitor_valid;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[1U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[2U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[3U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[4U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[5U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[6U] = 0U;
    vlSymsp->TOP__top_tb__mon_itf.__PVT__valid[7U] = 0U;
    vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask = (
                                                   (0xfffff000U 
                                                    & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask) 
                                                   | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                                                       [2U] 
                                                       << 8U) 
                                                      | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                                                          [1U] 
                                                          << 4U) 
                                                         | vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                                                         [0U])));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask = (
                                                   (0xff000fffU 
                                                    & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask) 
                                                   | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                                                       [5U] 
                                                       << 0x14U) 
                                                      | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                                                          [4U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                                                            [3U] 
                                                            << 0xcU))));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask = (
                                                   (0xffffffU 
                                                    & vlSelf->__PVT__monitor__DOT__rvfi_mem_rmask) 
                                                   | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                                                       [7U] 
                                                       << 0x1cU) 
                                                      | (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rmask
                                                         [6U] 
                                                         << 0x18U)));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[0U] 
        = (0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
           [0U]);
    vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[1U] 
        = (0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
           [1U]);
    vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[2U] 
        = (0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
           [2U]);
    vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[3U] 
        = (0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
           [3U]);
    vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[4U] 
        = (0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
           [4U]);
    vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[5U] 
        = (0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
           [5U]);
    vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[6U] 
        = (0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
           [6U]);
    vlSelf->__PVT__monitor__DOT__rvfi_mem_addr[7U] 
        = (0xfffffffcU & vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_addr
           [7U]);
    vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[0U] 
        = vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
        [0U];
    vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                    [2U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                     [1U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                     [2U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                      [1U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[3U] 
        = vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
        [3U];
    vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                    [5U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                     [4U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                     [5U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                      [4U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[6U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                    [7U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                     [6U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_pc_wdata[7U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                     [7U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_wdata
                                      [6U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask = (
                                                   (0xfffff000U 
                                                    & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask) 
                                                   | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                                                       [2U] 
                                                       << 8U) 
                                                      | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                                                          [1U] 
                                                          << 4U) 
                                                         | vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                                                         [0U])));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask = (
                                                   (0xff000fffU 
                                                    & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask) 
                                                   | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                                                       [5U] 
                                                       << 0x14U) 
                                                      | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                                                          [4U] 
                                                          << 0x10U) 
                                                         | (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                                                            [3U] 
                                                            << 0xcU))));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask = (
                                                   (0xffffffU 
                                                    & vlSelf->__PVT__monitor__DOT__rvfi_mem_wmask) 
                                                   | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                                                       [7U] 
                                                       << 0x1cU) 
                                                      | (vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wmask
                                                         [6U] 
                                                         << 0x18U)));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[0U] 
        = vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
        [0U];
    vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                    [2U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                     [1U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                     [2U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                      [1U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[3U] 
        = vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
        [3U];
    vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                    [5U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                     [4U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                     [5U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                      [4U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[6U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                    [7U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                     [6U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_wdata[7U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                     [7U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_wdata
                                      [6U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[0U] 
        = vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
        [0U];
    vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                    [2U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                     [1U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                     [2U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                      [1U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[3U] 
        = vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
        [3U];
    vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                    [5U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                     [4U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                     [5U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                      [4U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[6U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                    [7U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                     [6U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_mem_rdata[7U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                     [7U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__mem_rdata
                                      [6U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr = ((0xffffff8000ULL 
                                                   & vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr) 
                                                  | (IData)((IData)(
                                                                    ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
                                                                      [2U] 
                                                                      << 0xaU) 
                                                                     | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
                                                                         [1U] 
                                                                         << 5U) 
                                                                        | vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
                                                                        [0U])))));
    vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr = ((0xffc0007fffULL 
                                                   & vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr) 
                                                  | ((QData)((IData)(
                                                                     ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
                                                                       [5U] 
                                                                       << 0xaU) 
                                                                      | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
                                                                          [4U] 
                                                                          << 5U) 
                                                                         | vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
                                                                         [3U])))) 
                                                     << 0xfU));
    vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr = ((0x3fffffffULL 
                                                   & vlSelf->__PVT__monitor__DOT__rvfi_rs2_addr) 
                                                  | ((QData)((IData)(
                                                                     ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
                                                                       [7U] 
                                                                       << 5U) 
                                                                      | vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
                                                                      [6U]))) 
                                                     << 0x1eU));
    vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[0U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
            [0U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata
           [0U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[1U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
            [1U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata
           [1U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[2U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
            [2U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata
           [2U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[3U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
            [3U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata
           [3U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[4U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
            [4U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata
           [4U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[5U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
            [5U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata
           [5U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[6U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
            [6U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata
           [6U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs2_rdata[7U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_addr
            [7U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs2_rdata
           [7U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[0U] 
        = vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
        [0U];
    vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[1U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                    [2U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                     [1U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[2U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                     [2U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                      [1U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[3U] 
        = vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
        [3U];
    vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[4U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                    [5U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                     [4U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[5U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                     [5U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                      [4U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[6U] 
        = (IData)((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                    [7U])) << 0x20U) 
                   | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                     [6U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_pc_rdata[7U] 
        = (IData)(((((QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                     [7U])) << 0x20U) 
                    | (QData)((IData)(vlSymsp->TOP__top_tb__mon_itf.__PVT__pc_rdata
                                      [6U]))) >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr = ((0xffffff8000ULL 
                                                   & vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr) 
                                                  | (IData)((IData)(
                                                                    ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
                                                                      [2U] 
                                                                      << 0xaU) 
                                                                     | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
                                                                         [1U] 
                                                                         << 5U) 
                                                                        | vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
                                                                        [0U])))));
    vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr = ((0xffc0007fffULL 
                                                   & vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr) 
                                                  | ((QData)((IData)(
                                                                     ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
                                                                       [5U] 
                                                                       << 0xaU) 
                                                                      | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
                                                                          [4U] 
                                                                          << 5U) 
                                                                         | vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
                                                                         [3U])))) 
                                                     << 0xfU));
    vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr = ((0x3fffffffULL 
                                                   & vlSelf->__PVT__monitor__DOT__rvfi_rs1_addr) 
                                                  | ((QData)((IData)(
                                                                     ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
                                                                       [7U] 
                                                                       << 5U) 
                                                                      | vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
                                                                      [6U]))) 
                                                     << 0x1eU));
    vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[0U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
            [0U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata
           [0U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[1U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
            [1U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata
           [1U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[2U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
            [2U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata
           [2U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[3U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
            [3U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata
           [3U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[4U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
            [4U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata
           [4U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[5U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
            [5U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata
           [5U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[6U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
            [6U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata
           [6U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rs1_rdata[7U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_addr
            [7U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rs1_rdata
           [7U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_insn[0U] = vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
        [0U];
    vlSelf->__PVT__monitor__DOT__rvfi_insn[1U] = (IData)(
                                                         (((QData)((IData)(
                                                                           vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                           [2U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                            [1U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_insn[2U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                            [2U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                             [1U]))) 
                                                          >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_insn[3U] = vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
        [3U];
    vlSelf->__PVT__monitor__DOT__rvfi_insn[4U] = (IData)(
                                                         (((QData)((IData)(
                                                                           vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                           [5U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                            [4U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_insn[5U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                            [5U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                             [4U]))) 
                                                          >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_insn[6U] = (IData)(
                                                         (((QData)((IData)(
                                                                           vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                           [7U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                            [6U]))));
    vlSelf->__PVT__monitor__DOT__rvfi_insn[7U] = (IData)(
                                                         ((((QData)((IData)(
                                                                            vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                            [7U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             vlSymsp->TOP__top_tb__mon_itf.__PVT__inst
                                                                             [6U]))) 
                                                          >> 0x20U));
    vlSelf->__PVT__monitor__DOT__rvfi_rd_addr = ((0xffffff8000ULL 
                                                  & vlSelf->__PVT__monitor__DOT__rvfi_rd_addr) 
                                                 | (IData)((IData)(
                                                                   ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                                                     [2U] 
                                                                     << 0xaU) 
                                                                    | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                                                        [1U] 
                                                                        << 5U) 
                                                                       | vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                                                       [0U])))));
    vlSelf->__PVT__monitor__DOT__rvfi_rd_addr = ((0xffc0007fffULL 
                                                  & vlSelf->__PVT__monitor__DOT__rvfi_rd_addr) 
                                                 | ((QData)((IData)(
                                                                    ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                                                      [5U] 
                                                                      << 0xaU) 
                                                                     | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                                                         [4U] 
                                                                         << 5U) 
                                                                        | vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                                                        [3U])))) 
                                                    << 0xfU));
    vlSelf->__PVT__monitor__DOT__rvfi_rd_addr = ((0x3fffffffULL 
                                                  & vlSelf->__PVT__monitor__DOT__rvfi_rd_addr) 
                                                 | ((QData)((IData)(
                                                                    ((vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                                                      [7U] 
                                                                      << 5U) 
                                                                     | vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
                                                                     [6U]))) 
                                                    << 0x1eU));
    vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[0U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
            [0U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
           [0U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[1U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
            [1U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
           [1U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[2U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
            [2U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
           [2U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[3U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
            [3U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
           [3U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[4U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
            [4U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
           [4U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[5U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
            [5U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
           [5U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[6U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
            [6U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
           [6U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_rd_wdata[7U] 
        = ((0U != vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_addr
            [7U]) ? vlSymsp->TOP__top_tb__mon_itf.__PVT__rd_wdata
           [7U] : 0U);
    vlSelf->__PVT__monitor__DOT__rvfi_valid = ((0xf8U 
                                                & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)) 
                                               | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                   [2U] 
                                                   << 2U) 
                                                  | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                      [1U] 
                                                      << 1U) 
                                                     | vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                     [0U])));
    vlSelf->__PVT__monitor__DOT__rvfi_valid = ((0xc7U 
                                                & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)) 
                                               | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                   [5U] 
                                                   << 5U) 
                                                  | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                      [4U] 
                                                      << 4U) 
                                                     | (vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                        [3U] 
                                                        << 3U))));
    vlSelf->__PVT__monitor__DOT__rvfi_valid = ((0x3fU 
                                                & (IData)(vlSelf->__PVT__monitor__DOT__rvfi_valid)) 
                                               | ((vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                   [7U] 
                                                   << 7U) 
                                                  | (vlSymsp->TOP__top_tb__mon_itf.__PVT__valid
                                                     [6U] 
                                                     << 6U)));
}
