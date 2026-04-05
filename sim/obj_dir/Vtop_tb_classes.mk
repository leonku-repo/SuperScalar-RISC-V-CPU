# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtop_tb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 0
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 1
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 1
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 1
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtop_tb \
	Vtop_tb___024root__DepSet_hf8625a3e__0 \
	Vtop_tb___024root__DepSet_h6b5a2dfc__0 \
	Vtop_tb_top_tb__DepSet_h13c6320b__0 \
	Vtop_tb_top_tb__DepSet_h13c6320b__1 \
	Vtop_tb_cpu__DepSet_h51eb2ee3__0 \
	Vtop_tb_cpu__DepSet_h51eb2ee3__1 \
	Vtop_tb_cpu__DepSet_h51eb2ee3__2 \
	Vtop_tb_cpu__DepSet_h51eb2ee3__3 \
	Vtop_tb_cpu_midcore__DepSet_h3ea54ecb__0 \
	Vtop_tb_mon_itf__DepSet_h0df3ada0__0 \
	Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec__DepSet_hdac61ac8__0 \
	Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec__DepSet_hdac61ac8__1 \
	Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec__DepSet_hdac61ac8__2 \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtop_tb__ConstPool_0 \
	Vtop_tb___024root__Slow \
	Vtop_tb___024root__DepSet_hf8625a3e__0__Slow \
	Vtop_tb___024root__DepSet_h6b5a2dfc__0__Slow \
	Vtop_tb_top_tb__Slow \
	Vtop_tb_top_tb__DepSet_h13c6320b__0__Slow \
	Vtop_tb_top_tb__DepSet_h82b6562f__0__Slow \
	Vtop_tb_cpu__Slow \
	Vtop_tb_cpu__DepSet_h51eb2ee3__0__Slow \
	Vtop_tb_cpu__DepSet_h51eb2ee3__1__Slow \
	Vtop_tb_cpu__DepSet_hc4e33ac7__0__Slow \
	Vtop_tb_cpu_midcore__Slow \
	Vtop_tb_cpu_midcore__DepSet_h3ea54ecb__0__Slow \
	Vtop_tb_cpu_midcore__DepSet_ha6151aef__0__Slow \
	Vtop_tb_mon_itf__Slow \
	Vtop_tb_mon_itf__DepSet_h0df3ada0__0__Slow \
	Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec__Slow \
	Vtop_tb_riscv_formal_monitor_rv32imc_isa_spec__DepSet_h49b66ef2__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \
	Vtop_tb__Dpi \
	Vtop_tb__Trace__0 \
	Vtop_tb__Trace__1 \
	Vtop_tb__Trace__2 \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtop_tb__Syms \
	Vtop_tb__Trace__0__Slow \
	Vtop_tb__TraceDecls__0__Slow \
	Vtop_tb__Trace__1__Slow \
	Vtop_tb__Trace__2__Slow \
	Vtop_tb__Trace__3__Slow \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_dpi \
	verilated_vcd_c \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
