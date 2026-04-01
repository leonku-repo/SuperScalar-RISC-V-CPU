// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB_MON_ITF_H_
#define VERILATED_VTOP_TB_MON_ITF_H_  // guard

#include "verilated.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb_mon_itf final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__rst,0,0);
    CData/*0:0*/ __PVT__error;
    VlUnpacked<CData/*0:0*/, 8> __PVT__valid;
    VlUnpacked<QData/*63:0*/, 8> __PVT__order;
    VlUnpacked<IData/*31:0*/, 8> __PVT__inst;
    VlUnpacked<CData/*0:0*/, 8> __PVT__halt;
    VlUnpacked<CData/*4:0*/, 8> __PVT__rs1_addr;
    VlUnpacked<CData/*4:0*/, 8> __PVT__rs2_addr;
    VlUnpacked<IData/*31:0*/, 8> __PVT__rs1_rdata;
    VlUnpacked<IData/*31:0*/, 8> __PVT__rs2_rdata;
    VlUnpacked<CData/*4:0*/, 8> __PVT__rd_addr;
    VlUnpacked<IData/*31:0*/, 8> __PVT__rd_wdata;
    VlUnpacked<IData/*31:0*/, 8> __PVT__pc_rdata;
    VlUnpacked<IData/*31:0*/, 8> __PVT__pc_wdata;
    VlUnpacked<IData/*31:0*/, 8> __PVT__mem_addr;
    VlUnpacked<CData/*3:0*/, 8> __PVT__mem_rmask;
    VlUnpacked<CData/*3:0*/, 8> __PVT__mem_wmask;
    VlUnpacked<IData/*31:0*/, 8> __PVT__mem_rdata;
    VlUnpacked<IData/*31:0*/, 8> __PVT__mem_wdata;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb_mon_itf(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb_mon_itf();
    VL_UNCOPYABLE(Vtop_tb_mon_itf);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};

std::string VL_TO_STRING(const Vtop_tb_mon_itf* obj);

#endif  // guard
