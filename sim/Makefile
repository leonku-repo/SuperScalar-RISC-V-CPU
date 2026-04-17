SHELL := /bin/bash
.SHELLFLAGS := -o pipefail -c

# Waiver file (project root)
WAIVERFILE := ../waivers.verilator

# Top module names
TB_TOP := top_tb
TB     := ../tb/$(TB_TOP).sv

# Sources — order matters: pkg first so the package is defined before any user
PKG_SRCS := ../pkg/types.sv ../pkg/golden_types.sv
RTL_SRCS := $(shell find ../rtl -type f \( -name "*.sv" -o -name "*.v" \) | sort)
HVL_SRCS := ../hvl/mon_itf.sv ../hvl/ventilator_monitor.sv ../hvl/rvfimon.v

# Parse waiver file -> -Wno-XXXX flags
WAIVERS_RAW := $(shell test -f $(WAIVERFILE) && \
                 sed -e 's/#.*//' -e '/^[[:space:]]*$$/d' $(WAIVERFILE) | tr -d '\r' || true)
WNO_FLAGS   := $(addprefix -Wno-,$(WAIVERS_RAW))

# Program to simulate — pass on command line: make run PROG=../testcode/sanity.s
# Can be a .s, .c, or .elf file. The script always writes to sim/sim/memory_4.lst.
PROG    ?=
MEM_FILE := sim/memory_4.lst

# Optional VCD window. Both must be set together, or neither.
#   make run PROG=... LOW=1000 HIGH=2000
LOW  ?=
HIGH ?=

# Colors
RED   := \033[1;31m
GREEN := \033[1;32m
BOLD  := \033[1m
RESET := \033[0m

# Verilated executable
EXE := ./obj_dir/V$(TB_TOP)

.PHONY: gen_svh build run wave sim clean info help build_golden sim_golden

sim_golden:
	@test -n "$(PROG)" || { \
	  echo -e "$(RED)No PROG specified.$(RESET)"; \
	  echo -e "Usage: make sim_golden PROG=../testcode/coremark.elf"; \
	  exit 1; \
	}
	@$(MAKE) build_golden
	@$(MAKE) run PROG=$(PROG) LOW=$(LOW) HIGH=$(HIGH)

sim:
	@test -n "$(PROG)" || { \
	  echo -e "$(RED)No PROG specified.$(RESET)"; \
	  echo -e "Usage: make sim PROG=../testcode/sanity.s"; \
	  echo -e "       make sim PROG=../testcode/coremark.elf"; \
	  exit 1; \
	}
	@$(MAKE) build
	@$(MAKE) run PROG=$(PROG) LOW=$(LOW) HIGH=$(HIGH)

# Regenerate rvfi_reference.svh from rvfi_reference.json
gen_svh:
	@echo -e "$(BOLD)Regenerating rvfi_reference.svh$(RESET)"
	python3 ../bin/rvfi_reference.py

info:
	@echo "TB_TOP   = $(TB_TOP)"
	@echo "TB       = $(TB)"
	@echo "EXE      = $(EXE)"
	@echo "PROG     = $(PROG)"
	@echo "MEM_FILE = $(MEM_FILE)"
	@echo "RTL_SRCS = $(RTL_SRCS)"
	@echo "HVL_SRCS = $(HVL_SRCS)"
	@echo "PKG_SRCS = $(PKG_SRCS)"
	@echo "WNO_FLAGS = $(WNO_FLAGS)"

# Two-step build: verilator elaboration then C++ compilation
build_golden: gen_svh
	@echo -e "$(BOLD)Step 1/2: Verilator elaboration (GOLDEN_ONLY mode)$(RESET)"
	@verilator -Wall --trace --trace-structs --cc --exe top_tb.cpp \
	  --top-module $(TB_TOP) \
	  --CFLAGS "-DVL_USER_STOP -DGOLDEN_ONLY" \
	  +define+GOLDEN_ONLY \
	  $(WNO_FLAGS) \
	  $(PKG_SRCS) $(RTL_SRCS) $(HVL_SRCS) $(TB) \
	  && echo -e "$(GREEN)Verilator elaboration OK$(RESET)" \
	  || { echo -e "$(RED)Verilator elaboration FAILED$(RESET)"; exit 1; }
	@echo -e "$(BOLD)Step 2/2: C++ compilation$(RESET)"
	@$(MAKE) -C obj_dir -f V$(TB_TOP).mk \
	  && { \
	    echo -e "\n$(GREEN)====================================$(RESET)"; \
	    echo -e "$(GREEN)    BUILD PASSED (golden only) ✅   $(RESET)"; \
	    echo -e "$(GREEN)====================================$(RESET)\n"; \
	  } || { \
	    echo -e "\n$(RED)====================================$(RESET)"; \
	    echo -e "$(RED)        BUILD FAILED ❌             $(RESET)"; \
	    echo -e "$(RED)====================================$(RESET)\n"; \
	    exit 1; \
	  }

build: gen_svh
	@echo -e "$(BOLD)Step 1/2: Verilator elaboration (--cc --exe)$(RESET)"
	@verilator -Wall --trace --trace-structs --trace-max-array 256 --cc --exe top_tb.cpp \
	  --top-module $(TB_TOP) \
	  --unroll-count 256 \
	  --CFLAGS "-DVL_USER_STOP" \
	  $(WNO_FLAGS) \
	  $(PKG_SRCS) $(RTL_SRCS) $(HVL_SRCS) $(TB) \
	  && echo -e "$(GREEN)Verilator elaboration OK$(RESET)" \
	  || { echo -e "$(RED)Verilator elaboration FAILED$(RESET)"; exit 1; }
	@echo -e "$(BOLD)Step 2/2: C++ compilation$(RESET)"
	@$(MAKE) -C obj_dir -f V$(TB_TOP).mk \
	  && { \
	    echo -e "\n$(GREEN)====================================$(RESET)"; \
	    echo -e "$(GREEN)        BUILD PASSED ✅             $(RESET)"; \
	    echo -e "$(GREEN)====================================$(RESET)\n"; \
	  } || { \
	    echo -e "\n$(RED)====================================$(RESET)"; \
	    echo -e "$(RED)        BUILD FAILED ❌             $(RESET)"; \
	    echo -e "$(RED)====================================$(RESET)\n"; \
	    exit 1; \
	  }

run:
	@test -x $(EXE) || { echo "No $(EXE) — run 'make build' first."; exit 1; }
	@test -n "$(PROG)" || { echo "No PROG specified. Usage: make run PROG=../testcode/sanity.s"; exit 1; }
	@if [ -n "$(LOW)" ] && [ -z "$(HIGH)" ] || [ -z "$(LOW)" ] && [ -n "$(HIGH)" ]; then \
	  echo -e "$(RED)ERROR: specify both LOW and HIGH, or neither.$(RESET)"; \
	  echo -e "  Example: make run PROG=$(PROG) LOW=1000 HIGH=2000"; \
	  exit 1; \
	fi
	@echo -e "$(BOLD)Assembling: $(PROG)$(RESET)"
	@../bin/generate_memory_file.sh $(PROG)
	@if [ -n "$(LOW)" ]; then \
	  echo -e "$(BOLD)Running: $(EXE) $(MEM_FILE) $(LOW) $(HIGH)$(RESET)"; \
	else \
	  echo -e "$(BOLD)Running: $(EXE) $(MEM_FILE)$(RESET)"; \
	fi
	@$(EXE) "$(MEM_FILE)" "$(PROG)" $(LOW) $(HIGH) \
	  && { \
	    echo -e "\n$(GREEN)====================================$(RESET)"; \
	    echo -e "$(GREEN)        SIM PASSED ✅               $(RESET)"; \
	    echo -e "$(GREEN)====================================$(RESET)\n"; \
	  } || { \
	    echo -e "\n$(RED)====================================$(RESET)"; \
	    echo -e "$(RED)        SIM FAILED ❌               $(RESET)"; \
	    echo -e "$(RED)====================================$(RESET)\n"; \
	    exit 1; \
	  }

wave:
# 	@gtkwave wave.vcd
	@if [ -f signals.gtkw ]; then \
	  gtkwave wave.vcd signals.gtkw; \
	else \
	  gtkwave wave.vcd; \
	fi

clean:
	rm -rf obj_dir wave.vcd progress.ansi commit.log golden_log.bin
# 	rm -rf obj_dir wave.vcd progress.ansi commit.log

help:
	@echo -e "$(BOLD)======================================$(RESET)"
	@echo -e "$(BOLD)    err_cpu Simulation Quick Help     $(RESET)"
	@echo -e "$(BOLD)======================================$(RESET)"
	@echo ""
	@echo -e "$(BOLD)Normal workflow:$(RESET)"
	@echo -e "  make sim   PROG=../testcode/coremark.elf   — build + run in one step"
	@echo -e "  make build                                  — verilator elaborate + compile only"
	@echo -e "  make run   PROG=../testcode/sanity.s        — assemble + simulate (no rebuild)"
	@echo ""
	@echo -e "$(BOLD)Golden co-simulation (DUT vs golden_cpu, catches first divergence):$(RESET)"
	@echo -e "  make sim   PROG=...   — runs both cores, compares every commit by order"
	@echo -e "  $(GREEN)→ on mismatch: prints pc/inst/rd/mem diff and offers VCD rerun$(RESET)"
	@echo ""
	@echo -e "$(BOLD)Verify golden CPU only (check golden_cpu passes RVFI):$(RESET)"
	@echo -e "  make sim_golden PROG=../testcode/coremark.elf"
	@echo -e "  $(GREEN)→ RVFI monitor watches golden core, DUT is ignored$(RESET)"
	@echo -e "  make build_golden   — build golden-only mode without running"
	@echo ""
	@echo -e "$(BOLD)Debugging a failure with waveforms:$(RESET)"
	@echo ""
	@echo -e "  $(BOLD)Step 1$(RESET) — Run without VCD to find the failure:"
	@echo -e "    make sim PROG=../testcode/<your_test>.s"
	@echo -e "    $(GREEN)→ on RVFI error: prints cycle, asks y/n to rerun with VCD window$(RESET)"
	@echo -e "    $(GREEN)→ on golden mismatch: prints order/cycle diff, asks y/n to rerun$(RESET)"
	@echo ""
	@echo -e "  $(BOLD)Step 2$(RESET) — Or manually rerun with a VCD window:"
	@echo -e "    make run PROG=... LOW=1150 HIGH=1240"
	@echo -e "    $(GREEN)→ writes wave.vcd covering only cycles 1150-1240$(RESET)"
	@echo ""
	@echo -e "  $(BOLD)Step 3$(RESET) — Open the waveform:"
	@echo -e "    make wave"
	@echo ""
	@echo -e "$(BOLD)Random testbench workflow:$(RESET)"
	@echo ""
	@echo -e "  $(BOLD)Step 1$(RESET) — In sim/top_tb.cpp, set:"
	@echo -e "    static bool RANDOM_TB      = true;"
	@echo -e "    static int  RTB_MAX_INSTRS = 100000;  // how many random instrs"
	@echo ""
	@echo -e "  $(BOLD)Step 2$(RESET) — Enable/disable instruction types in RTB_ENABLE[9]:"
	@echo -e "    0:LUI  1:AUIPC  2:JAL  3:JALR  4:Branch"
	@echo -e "    5:OP-IMM  6:OP(R)  7:Load  8:Store"
	@echo -e "    $(GREEN)→ set false for types you don't want to test yet$(RESET)"
	@echo ""
	@echo -e "  $(BOLD)Step 3$(RESET) — Rebuild (required whenever top_tb.cpp changes):"
	@echo -e "    make build"
	@echo ""
	@echo -e "  $(BOLD)Step 4$(RESET) — Run (PROG is ignored in random mode):"
	@echo -e "    make run PROG=../testcode/sanity.s"
	@echo -e "    $(GREEN)→ runs 32 LUI inits + RTB_MAX_INSTRS random instrs + halt$(RESET)"
	@echo ""
	@echo -e "$(BOLD)Debugging a failure with waveforms:$(RESET)"
	@echo ""
	@echo -e "  $(BOLD)Step 1$(RESET) — Run without VCD to find the failure cycle:"
	@echo -e "    make run PROG=../testcode/<your_test>.s"
	@echo -e "    $(GREEN)→ prints: ERROR at cycle 1234$(RESET)"
	@echo ""
	@echo -e "  $(BOLD)Step 2$(RESET) — Re-run with a VCD window around that cycle:"
	@echo -e "    make run PROG=../testcode/<your_test>.s LOW=1150 HIGH=1240"
	@echo -e "    $(GREEN)→ writes wave.vcd covering only cycles 1150-1240$(RESET)"
	@echo ""
	@echo -e "  $(BOLD)Step 3$(RESET) — Open the waveform:"
	@echo -e "    make wave"
	@echo ""
	@echo -e "$(BOLD)All targets:$(RESET)"
	@echo -e "  make sim   PROG=... [LOW= HIGH=] — build + run in one step (LOW/HIGH optional)"
	@echo -e "  make build                       — verilator elaborate + compile"
	@echo -e "  make run   PROG=... [LOW= HIGH=] — assemble + simulate (LOW/HIGH optional)"
	@echo -e "  make wave                      — open wave.vcd in GTKWave"
	@echo -e "  make clean                     — delete obj_dir, wave.vcd, logs"
	@echo -e "  make info                      — print Makefile variable values"
	@echo -e "  make help                      — show this message"
