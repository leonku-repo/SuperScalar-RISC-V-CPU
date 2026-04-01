SHELL := /bin/bash
.SHELLFLAGS := -o pipefail -c

WAIVERFILE := ../waivers.verilator
REPORT     := verilator_lint.txt

# RTL sources only — testbench and RVFI checker are excluded from lint
PKG_SRCS := ../pkg/types.sv
RTL_SRCS := $(shell find ../rtl -type f \( -name "*.sv" -o -name "*.v" \) | sort)

# Parse waiver file -> -Wno-XXXX
WAIVERS_RAW := $(shell test -f $(WAIVERFILE) && sed -e 's/#.*//' -e '/^[[:space:]]*$$/d' $(WAIVERFILE) | tr -d '\r' || true)
WNO_FLAGS   := $(addprefix -Wno-,$(WAIVERS_RAW))

# Colors
RED   := \033[1;31m
GREEN := \033[1;32m
BOLD  := \033[1m
RESET := \033[0m

.PHONY: lint clean

lint:
	@echo -e "$(BOLD)Running Verilator lint (-Wall, warnings fatal unless waived)$(RESET)"
	@rm -f $(REPORT)
	@set +e; \
	verilator -Wall --lint-only --top-module cpu $(WNO_FLAGS) $(PKG_SRCS) $(RTL_SRCS) \
	  2>&1 | tee $(REPORT); \
	status=$$?; \
	set -e; \
	if [ $$status -eq 0 ]; then \
	  echo -e "\n$(GREEN)====================================$(RESET)"; \
	  echo -e "$(GREEN)        LINT PASSED ✅              $(RESET)"; \
	  echo -e "$(GREEN)        Report: lint/$(REPORT)      $(RESET)"; \
	  echo -e "$(GREEN)====================================$(RESET)\n"; \
	else \
	  echo -e "\n$(RED)====================================$(RESET)"; \
	  echo -e "$(RED)        LINT FAILED ❌              $(RESET)"; \
	  echo -e "$(RED)        Report: lint/$(REPORT)      $(RESET)"; \
	  echo -e "$(RED)====================================$(RESET)\n"; \
	  exit $$status; \
	fi

clean:
	@rm -f $(REPORT)