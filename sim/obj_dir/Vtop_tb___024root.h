// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
class Vtop_tb_top_tb;


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtop_tb_top_tb* top_tb;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(dut_rst,0,0);
    VL_IN8(imem_resp,0,0);
    VL_OUT8(imem_read,0,0);
    VL_IN8(dmem_resp,0,0);
    VL_OUT8(dmem_read,0,0);
    VL_OUT8(dmem_write,0,0);
    VL_OUT8(dmem_wmask,3,0);
    VL_IN8(golden_imem_resp,0,0);
    VL_OUT8(golden_imem_read,0,0);
    VL_IN8(golden_dmem_resp,0,0);
    VL_OUT8(golden_dmem_read,0,0);
    VL_OUT8(golden_dmem_write,0,0);
    VL_OUT8(golden_dmem_wmask,3,0);
    VL_OUT8(halt,0,0);
    VL_OUT8(error,0,0);
    VL_OUT8(any_commit,0,0);
    VL_OUT8(mispredict_o,0,0);
    VL_IN8(eoc_enable,0,0);
    VL_OUT8(dut_rd_addr,4,0);
    VL_OUT8(dut_mem_rmask,3,0);
    VL_OUT8(dut_mem_wmask,3,0);
    VL_OUT8(golden_commit,0,0);
    VL_OUT8(golden_rd_addr,4,0);
    VL_OUT8(golden_mem_rmask,3,0);
    VL_OUT8(golden_mem_wmask,3,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __VactContinue;
    VL_IN(imem_rdata,31,0);
    VL_OUT(imem_addr,31,0);
    VL_IN(dmem_rdata,31,0);
    VL_OUT(dmem_addr,31,0);
    VL_OUT(dmem_wdata,31,0);
    VL_IN(golden_imem_rdata,31,0);
    VL_OUT(golden_imem_addr,31,0);
    VL_IN(golden_dmem_rdata,31,0);
    VL_OUT(golden_dmem_addr,31,0);
    VL_OUT(golden_dmem_wdata,31,0);
    VL_OUT(dut_pc,31,0);
    VL_OUT(dut_inst,31,0);
    VL_OUT(dut_rd_wdata,31,0);
    VL_OUT(dut_mem_addr,31,0);
    VL_OUT(dut_mem_rdata,31,0);
    VL_OUT(dut_mem_wdata,31,0);
    VL_OUT(golden_pc,31,0);
    VL_OUT(golden_inst,31,0);
    VL_OUT(golden_rd_wdata,31,0);
    VL_OUT(golden_mem_addr,31,0);
    VL_OUT(golden_mem_rdata,31,0);
    VL_OUT(golden_mem_wdata,31,0);
    IData/*31:0*/ __VactIterCount;
    VL_OUT64(dut_order,63,0);
    VL_OUT64(golden_order,63,0);
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
