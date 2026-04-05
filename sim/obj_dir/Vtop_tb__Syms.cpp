// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop_tb__pch.h"
#include "Vtop_tb.h"
#include "Vtop_tb___024root.h"
#include "Vtop_tb_top_tb.h"
#include "Vtop_tb_cpu.h"
#include "Vtop_tb_cpu_midcore.h"
#include "Vtop_tb_mon_itf.h"
#include "Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec.h"

// FUNCTIONS
Vtop_tb__Syms::~Vtop_tb__Syms()
{
}

Vtop_tb__Syms::Vtop_tb__Syms(VerilatedContext* contextp, const char* namep, Vtop_tb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__top_tb{this, Verilated::catName(namep, "top_tb")}
    , TOP__top_tb__mon_itf{this, Verilated::catName(namep, "top_tb.mon_itf")}
    , TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec{this, Verilated::catName(namep, "top_tb.monitor.monitor.ch0_isa_spec")}
    , TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec{this, Verilated::catName(namep, "top_tb.monitor.monitor.ch1_isa_spec")}
    , TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec{this, Verilated::catName(namep, "top_tb.monitor.monitor.ch2_isa_spec")}
    , TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec{this, Verilated::catName(namep, "top_tb.monitor.monitor.ch3_isa_spec")}
    , TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec{this, Verilated::catName(namep, "top_tb.monitor.monitor.ch4_isa_spec")}
    , TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec{this, Verilated::catName(namep, "top_tb.monitor.monitor.ch5_isa_spec")}
    , TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec{this, Verilated::catName(namep, "top_tb.monitor.monitor.ch6_isa_spec")}
    , TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec{this, Verilated::catName(namep, "top_tb.monitor.monitor.ch7_isa_spec")}
    , TOP__top_tb__dut{this, Verilated::catName(namep, "top_tb.dut")}
    , TOP__top_tb__dut__cpu_midcore{this, Verilated::catName(namep, "top_tb.dut.cpu_midcore")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.top_tb = &TOP__top_tb;
    TOP__top_tb.__PVT__mon_itf = &TOP__top_tb__mon_itf;
    TOP__top_tb.__PVT__monitor__DOT__monitor__DOT__ch0_isa_spec = &TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec;
    TOP__top_tb.__PVT__monitor__DOT__monitor__DOT__ch1_isa_spec = &TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec;
    TOP__top_tb.__PVT__monitor__DOT__monitor__DOT__ch2_isa_spec = &TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec;
    TOP__top_tb.__PVT__monitor__DOT__monitor__DOT__ch3_isa_spec = &TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec;
    TOP__top_tb.__PVT__monitor__DOT__monitor__DOT__ch4_isa_spec = &TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec;
    TOP__top_tb.__PVT__monitor__DOT__monitor__DOT__ch5_isa_spec = &TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec;
    TOP__top_tb.__PVT__monitor__DOT__monitor__DOT__ch6_isa_spec = &TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec;
    TOP__top_tb.__PVT__monitor__DOT__monitor__DOT__ch7_isa_spec = &TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec;
    TOP__top_tb.dut = &TOP__top_tb__dut;
    TOP__top_tb__dut.cpu_midcore = &TOP__top_tb__dut__cpu_midcore;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__top_tb.__Vconfigure(true);
    TOP__top_tb__mon_itf.__Vconfigure(true);
    TOP__top_tb__monitor__DOT__monitor__DOT__ch0_isa_spec.__Vconfigure(true);
    TOP__top_tb__monitor__DOT__monitor__DOT__ch1_isa_spec.__Vconfigure(false);
    TOP__top_tb__monitor__DOT__monitor__DOT__ch2_isa_spec.__Vconfigure(false);
    TOP__top_tb__monitor__DOT__monitor__DOT__ch3_isa_spec.__Vconfigure(false);
    TOP__top_tb__monitor__DOT__monitor__DOT__ch4_isa_spec.__Vconfigure(false);
    TOP__top_tb__monitor__DOT__monitor__DOT__ch5_isa_spec.__Vconfigure(false);
    TOP__top_tb__monitor__DOT__monitor__DOT__ch6_isa_spec.__Vconfigure(false);
    TOP__top_tb__monitor__DOT__monitor__DOT__ch7_isa_spec.__Vconfigure(false);
    TOP__top_tb__dut.__Vconfigure(true);
    TOP__top_tb__dut__cpu_midcore.__Vconfigure(true);
    // Setup scopes
    __Vscope_top_tb__dut__cpu_midcore.configure(this, name(), "top_tb.dut.cpu_midcore", "cpu_midcore", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor.configure(this, name(), "top_tb.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor.configure(this, name(), "top_tb.monitor.monitor", "monitor", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ch0_handle_error.configure(this, name(), "top_tb.monitor.monitor.ch0_handle_error", "ch0_handle_error", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ch1_handle_error.configure(this, name(), "top_tb.monitor.monitor.ch1_handle_error", "ch1_handle_error", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ch2_handle_error.configure(this, name(), "top_tb.monitor.monitor.ch2_handle_error", "ch2_handle_error", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ch3_handle_error.configure(this, name(), "top_tb.monitor.monitor.ch3_handle_error", "ch3_handle_error", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ch4_handle_error.configure(this, name(), "top_tb.monitor.monitor.ch4_handle_error", "ch4_handle_error", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ch5_handle_error.configure(this, name(), "top_tb.monitor.monitor.ch5_handle_error", "ch5_handle_error", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ch6_handle_error.configure(this, name(), "top_tb.monitor.monitor.ch6_handle_error", "ch6_handle_error", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ch7_handle_error.configure(this, name(), "top_tb.monitor.monitor.ch7_handle_error", "ch7_handle_error", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro0_handle_error_p.configure(this, name(), "top_tb.monitor.monitor.ro0_handle_error_p", "ro0_handle_error_p", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro0_handle_error_r.configure(this, name(), "top_tb.monitor.monitor.ro0_handle_error_r", "ro0_handle_error_r", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro1_handle_error_p.configure(this, name(), "top_tb.monitor.monitor.ro1_handle_error_p", "ro1_handle_error_p", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro1_handle_error_r.configure(this, name(), "top_tb.monitor.monitor.ro1_handle_error_r", "ro1_handle_error_r", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro2_handle_error_p.configure(this, name(), "top_tb.monitor.monitor.ro2_handle_error_p", "ro2_handle_error_p", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro2_handle_error_r.configure(this, name(), "top_tb.monitor.monitor.ro2_handle_error_r", "ro2_handle_error_r", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro3_handle_error_p.configure(this, name(), "top_tb.monitor.monitor.ro3_handle_error_p", "ro3_handle_error_p", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro3_handle_error_r.configure(this, name(), "top_tb.monitor.monitor.ro3_handle_error_r", "ro3_handle_error_r", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro4_handle_error_p.configure(this, name(), "top_tb.monitor.monitor.ro4_handle_error_p", "ro4_handle_error_p", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro4_handle_error_r.configure(this, name(), "top_tb.monitor.monitor.ro4_handle_error_r", "ro4_handle_error_r", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro5_handle_error_p.configure(this, name(), "top_tb.monitor.monitor.ro5_handle_error_p", "ro5_handle_error_p", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro5_handle_error_r.configure(this, name(), "top_tb.monitor.monitor.ro5_handle_error_r", "ro5_handle_error_r", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro6_handle_error_p.configure(this, name(), "top_tb.monitor.monitor.ro6_handle_error_p", "ro6_handle_error_p", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro6_handle_error_r.configure(this, name(), "top_tb.monitor.monitor.ro6_handle_error_r", "ro6_handle_error_r", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro7_handle_error_p.configure(this, name(), "top_tb.monitor.monitor.ro7_handle_error_p", "ro7_handle_error_p", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_top_tb__monitor__monitor__ro7_handle_error_r.configure(this, name(), "top_tb.monitor.monitor.ro7_handle_error_r", "ro7_handle_error_r", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_top_tb__dut__cpu_midcore.varInsert(__Vfinal,"stall_alu_full", &(TOP__top_tb__dut__cpu_midcore.stall_alu_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top_tb__dut__cpu_midcore.varInsert(__Vfinal,"stall_checkpoint_full", &(TOP__top_tb__dut__cpu_midcore.stall_checkpoint_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top_tb__dut__cpu_midcore.varInsert(__Vfinal,"stall_cmp_full", &(TOP__top_tb__dut__cpu_midcore.stall_cmp_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top_tb__dut__cpu_midcore.varInsert(__Vfinal,"stall_jump_full", &(TOP__top_tb__dut__cpu_midcore.stall_jump_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top_tb__dut__cpu_midcore.varInsert(__Vfinal,"stall_load_full", &(TOP__top_tb__dut__cpu_midcore.stall_load_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top_tb__dut__cpu_midcore.varInsert(__Vfinal,"stall_mul_full", &(TOP__top_tb__dut__cpu_midcore.stall_mul_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top_tb__dut__cpu_midcore.varInsert(__Vfinal,"stall_no_free_pr", &(TOP__top_tb__dut__cpu_midcore.stall_no_free_pr), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top_tb__dut__cpu_midcore.varInsert(__Vfinal,"stall_rob_full", &(TOP__top_tb__dut__cpu_midcore.stall_rob_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_top_tb__dut__cpu_midcore.varInsert(__Vfinal,"stall_store_full", &(TOP__top_tb__dut__cpu_midcore.stall_store_full), false, VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
