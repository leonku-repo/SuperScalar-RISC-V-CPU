// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary model header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef VERILATED_VTOP_TB_H_
#define VERILATED_VTOP_TB_H_  // guard

#include "verilated.h"
#include "svdpi.h"

class Vtop_tb__Syms;
class Vtop_tb___024root;
class VerilatedVcdC;
class Vtop_tb_top_tb;


// This class is the main interface to the Verilated model
class alignas(VL_CACHE_LINE_BYTES) Vtop_tb VL_NOT_FINAL : public VerilatedModel {
  private:
    // Symbol table holding complete model state (owned by this class)
    Vtop_tb__Syms* const vlSymsp;

  public:

    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(&clk,0,0);
    VL_IN8(&rst,0,0);
    VL_IN8(&dut_rst,0,0);
    VL_IN8(&imem_resp,0,0);
    VL_OUT8(&imem_read,0,0);
    VL_IN8(&dmem_resp,0,0);
    VL_OUT8(&dmem_read,0,0);
    VL_OUT8(&dmem_write,0,0);
    VL_OUT8(&dmem_wmask,3,0);
    VL_IN8(&golden_imem_resp,0,0);
    VL_OUT8(&golden_imem_read,0,0);
    VL_IN8(&golden_dmem_resp,0,0);
    VL_OUT8(&golden_dmem_read,0,0);
    VL_OUT8(&golden_dmem_write,0,0);
    VL_OUT8(&golden_dmem_wmask,3,0);
    VL_OUT8(&halt,0,0);
    VL_OUT8(&error,0,0);
    VL_OUT8(&any_commit,0,0);
    VL_OUT8(&mispredict_o,0,0);
    VL_IN8(&eoc_enable,0,0);
    VL_OUT8(&dut_rd_addr,4,0);
    VL_OUT8(&dut_mem_rmask,3,0);
    VL_OUT8(&dut_mem_wmask,3,0);
    VL_OUT8(&golden_commit,0,0);
    VL_OUT8(&golden_rd_addr,4,0);
    VL_OUT8(&golden_mem_rmask,3,0);
    VL_OUT8(&golden_mem_wmask,3,0);
    VL_IN(&imem_rdata,31,0);
    VL_OUT(&imem_addr,31,0);
    VL_IN(&dmem_rdata,31,0);
    VL_OUT(&dmem_addr,31,0);
    VL_OUT(&dmem_wdata,31,0);
    VL_IN(&golden_imem_rdata,31,0);
    VL_OUT(&golden_imem_addr,31,0);
    VL_IN(&golden_dmem_rdata,31,0);
    VL_OUT(&golden_dmem_addr,31,0);
    VL_OUT(&golden_dmem_wdata,31,0);
    VL_OUT(&dut_pc,31,0);
    VL_OUT(&dut_inst,31,0);
    VL_OUT(&dut_rd_wdata,31,0);
    VL_OUT(&dut_mem_addr,31,0);
    VL_OUT(&dut_mem_rdata,31,0);
    VL_OUT(&dut_mem_wdata,31,0);
    VL_OUT(&golden_pc,31,0);
    VL_OUT(&golden_inst,31,0);
    VL_OUT(&golden_rd_wdata,31,0);
    VL_OUT(&golden_mem_addr,31,0);
    VL_OUT(&golden_mem_rdata,31,0);
    VL_OUT(&golden_mem_wdata,31,0);
    VL_OUT64(&dut_order,63,0);
    VL_OUT64(&golden_order,63,0);

    // CELLS
    // Public to allow access to /* verilator public */ items.
    // Otherwise the application code can consider these internals.
    Vtop_tb_top_tb* const top_tb;

    // Root instance pointer to allow access to model internals,
    // including inlined /* verilator public_flat_* */ items.
    Vtop_tb___024root* const rootp;

    // CONSTRUCTORS
    /// Construct the model; called by application code
    /// If contextp is null, then the model will use the default global context
    /// If name is "", then makes a wrapper with a
    /// single model invisible with respect to DPI scope names.
    explicit Vtop_tb(VerilatedContext* contextp, const char* name = "TOP");
    explicit Vtop_tb(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    virtual ~Vtop_tb();
  private:
    VL_UNCOPYABLE(Vtop_tb);  ///< Copying not allowed

  public:
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    /// Are there scheduled events to handle?
    bool eventsPending();
    /// Returns time at next time slot. Aborts if !eventsPending()
    uint64_t nextTimeSlot();
    /// Trace signals in the model; called by application code
    void trace(VerilatedVcdC* tfp, int levels, int options = 0);
    /// Retrieve name of this model instance (as passed to constructor).
    const char* name() const;

    // Abstract methods from VerilatedModel
    const char* hierName() const override final;
    const char* modelName() const override final;
    unsigned threads() const override final;
    /// Prepare for cloning the model at the process level (e.g. fork in Linux)
    /// Release necessary resources. Called before cloning.
    void prepareClone() const;
    /// Re-init after cloning the model at the process level (e.g. fork in Linux)
    /// Re-allocate necessary resources. Called after cloning.
    void atClone() const;
    std::unique_ptr<VerilatedTraceConfig> traceConfig() const override final;
};

#endif  // guard
