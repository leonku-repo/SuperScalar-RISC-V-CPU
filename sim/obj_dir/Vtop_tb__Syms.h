// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTOP_TB__SYMS_H_
#define VERILATED_VTOP_TB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtop_tb.h"

// INCLUDE MODULE CLASSES
#include "Vtop_tb___024root.h"
#include "Vtop_tb_top_tb.h"
#include "Vtop_tb_cpu.h"
#include "Vtop_tb_cpu_midcore.h"
#include "Vtop_tb_mon_itf.h"
#include "Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtop_tb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtop_tb* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtop_tb___024root              TOP;
    Vtop_tb_top_tb                 TOP__top_tb;
    Vtop_tb_mon_itf                TOP__top_tb__mon_itf;
    Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec;
    Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec;
    Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec;
    Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec;
    Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec;
    Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec;
    Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec;
    Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec;
    Vtop_tb_cpu                    TOP__top_tb__dut;
    Vtop_tb_cpu_midcore            TOP__top_tb__dut__cpu_midcore;

    // SCOPE NAMES
    VerilatedScope __Vscope_top_tb__dut__cpu_midcore;
    VerilatedScope __Vscope_top_tb__monitor;
    VerilatedScope __Vscope_top_tb__monitor__monitor;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ch0_handle_error;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ch1_handle_error;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ch2_handle_error;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ch3_handle_error;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ch4_handle_error;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ch5_handle_error;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ch6_handle_error;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ch7_handle_error;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro0_handle_error_p;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro0_handle_error_r;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro1_handle_error_p;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro1_handle_error_r;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro2_handle_error_p;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro2_handle_error_r;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro3_handle_error_p;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro3_handle_error_r;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro4_handle_error_p;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro4_handle_error_r;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro5_handle_error_p;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro5_handle_error_r;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro6_handle_error_p;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro6_handle_error_r;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro7_handle_error_p;
    VerilatedScope __Vscope_top_tb__monitor__monitor__ro7_handle_error_r;

    // CONSTRUCTORS
    Vtop_tb__Syms(VerilatedContext* contextp, const char* namep, Vtop_tb* modelp);
    ~Vtop_tb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
