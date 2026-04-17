#!/bin/bash
# run_all.sh — run all testcode programs through make run, stop on first failure.
# The failed test's top_tb.cpp will prompt y/n for VCD rerun — just answer normally.

TESTCODE_DIR="../testcode"
PASS=0
FAIL=0

declare -a T_NAME
declare -a T_IPC
declare -a T_BR_MISPR
declare -a T_JMP_MISPR
declare -a T_SPEC_MISPR
declare -a T_FWD_MISPR
declare -a T_SAFE_CNT
declare -a T_SPEC_CNT
declare -a T_FWD_CNT
declare -a T_ROB_FULL
declare -a T_NO_FREE_PR
declare -a T_ALU_FULL
declare -a T_CMP_FULL
declare -a T_JUMP_FULL
declare -a T_MUL_FULL
declare -a T_LQ_FULL
declare -a T_SQ_FULL
declare -a T_BR_CP_FULL
declare -a T_LC_FULL

TESTS=(
    "$TESTCODE_DIR/first_run.s"
    "$TESTCODE_DIR/second_run.s"
    "$TESTCODE_DIR/compression.elf"
    "$TESTCODE_DIR/coremark_small_rv32i.elf"
    "$TESTCODE_DIR/coremark_rv32i.elf"
    "$TESTCODE_DIR/dna.elf"
    "$TESTCODE_DIR/fft.elf"
    "$TESTCODE_DIR/graph.elf"
    "$TESTCODE_DIR/mergesort.elf"
    "$TESTCODE_DIR/physics.elf"
    "$TESTCODE_DIR/physics_d.elf"
    "$TESTCODE_DIR/rsa.elf"
    "$TESTCODE_DIR/rsa_d.elf"
    "$TESTCODE_DIR/sudoku.elf"
)

TMPFILE=$(mktemp)

for PROG in "${TESTS[@]}"; do
    echo ""
    echo "======================================"
    echo "  Running: $PROG"
    echo "======================================"

    make -C "$(dirname "$0")" run PROG="$PROG" | tee "$TMPFILE"
    STATUS=${PIPESTATUS[0]}

    TEST_NAME=$(basename "$PROG")
    T_NAME+=("$TEST_NAME")

    T_IPC+=($(         grep '^\[IPC\]'         "$TMPFILE" | tail -1 | grep -oP 'IPC=\K[0-9.]+'))
    T_BR_MISPR+=($(    grep '^\[Branch\]'       "$TMPFILE" | tail -1 | grep -oP 'rate=\K[0-9.]+'))
    T_JMP_MISPR+=($(   grep '^\[Jump'           "$TMPFILE" | tail -1 | grep -oP 'rate=\K[0-9.]+'))
    T_SPEC_MISPR+=($(  grep 'spec_mispr_rate='  "$TMPFILE" | tail -1 | grep -oP 'spec_mispr_rate=\K[0-9.]+'))
    T_FWD_MISPR+=($(   grep 'fwd_mispr_rate='   "$TMPFILE" | tail -1 | grep -oP 'fwd_mispr_rate=\K[0-9.]+'))
    T_SAFE_CNT+=($(    grep '^\[Spec Load\]'    "$TMPFILE" | tail -1 | grep -oP 'safe=\K[0-9]+'))
    T_SPEC_CNT+=($(    grep '^\[Spec Load\]'    "$TMPFILE" | tail -1 | grep -oP 'spec=\K[0-9]+'))
    T_FWD_CNT+=($(     grep '^\[Spec Load\]'    "$TMPFILE" | tail -1 | grep -oP 'fwd=\K[0-9]+'))
    T_ROB_FULL+=($(    grep '^\[Stall\]'        "$TMPFILE" | tail -1 | grep -oP 'rob_full=\K[0-9]+'))
    T_NO_FREE_PR+=($(  grep '^\[Stall\]'        "$TMPFILE" | tail -1 | grep -oP 'no_free_pr=\K[0-9]+'))
    T_ALU_FULL+=($(    grep '^\[Stall RS\]'     "$TMPFILE" | tail -1 | grep -oP 'alu=\K[0-9]+'))
    T_CMP_FULL+=($(    grep '^\[Stall RS\]'     "$TMPFILE" | tail -1 | grep -oP 'cmp=\K[0-9]+'))
    T_JUMP_FULL+=($(   grep '^\[Stall RS\]'     "$TMPFILE" | tail -1 | grep -oP 'jump=\K[0-9]+'))
    T_MUL_FULL+=($(    grep '^\[Stall RS\]'     "$TMPFILE" | tail -1 | grep -oP 'mul=\K[0-9]+'))
    T_LQ_FULL+=($(     grep '^\[Stall LSQ\]'    "$TMPFILE" | tail -1 | grep -oP 'lq_full=\K[0-9]+'))
    T_SQ_FULL+=($(     grep '^\[Stall LSQ\]'    "$TMPFILE" | tail -1 | grep -oP 'sq_full=\K[0-9]+'))
    T_BR_CP_FULL+=($(  grep '^\[Stall CP\]'     "$TMPFILE" | tail -1 | grep -oP 'br_cp_full=\K[0-9]+'))
    T_LC_FULL+=($(     grep '^\[Stall CP\]'     "$TMPFILE" | tail -1 | grep -oP 'load_cp_full=\K[0-9]+'))

    if [ $STATUS -ne 0 ]; then
        echo ""
        echo "FAILED: $PROG"
        FAIL=$((FAIL + 1))
        rm -f "$TMPFILE"
        echo ""
        echo "======================================"
        echo "  $PASS passed, stopped at first fail"
        echo "======================================"
        exit 1
    fi

    PASS=$((PASS + 1))
done

rm -f "$TMPFILE"

echo ""
echo "======================================"
echo "  ALL $PASS TESTS PASSED"
echo "======================================"
echo ""

# --- Performance table ---
printf "  %-35s %6s  %8s  %9s  %10s  %10s  %10s  %10s  %10s\n" \
    "Test" "IPC" "Br Misp%" "Jmp Misp%" "Spec Misp%" "Fwd Misp%" "Safe Lds" "Spec Lds" "Fwd Lds"
echo "  ----------------------------------------------------------------------------------------------------------------------------------"
for i in "${!T_NAME[@]}"; do
    printf "  %-35s %6s  %8s  %9s  %10s  %10s  %10s  %10s  %10s\n" \
        "${T_NAME[$i]}" \
        "${T_IPC[$i]:-N/A}" \
        "${T_BR_MISPR[$i]:-N/A}" \
        "${T_JMP_MISPR[$i]:-N/A}" \
        "${T_SPEC_MISPR[$i]:-N/A}" \
        "${T_FWD_MISPR[$i]:-N/A}" \
        "${T_SAFE_CNT[$i]:-N/A}" \
        "${T_SPEC_CNT[$i]:-N/A}" \
        "${T_FWD_CNT[$i]:-N/A}"
done
echo "  =================================================================================================================================="

echo ""

# --- Stall table ---
printf "  %-35s %9s  %10s  %8s  %8s  %9s  %8s  %8s  %8s  %10s  %9s\n" \
    "Test" "rob_full" "no_free_pr" "alu" "cmp" "jump" "mul" "lq_full" "sq_full" "br_cp_full" "lc_full"
echo "  ---------------------------------------------------------------------------------------------------------------------------------------"
for i in "${!T_NAME[@]}"; do
    printf "  %-35s %9s  %10s  %8s  %8s  %9s  %8s  %8s  %8s  %10s  %9s\n" \
        "${T_NAME[$i]}" \
        "${T_ROB_FULL[$i]:-N/A}" \
        "${T_NO_FREE_PR[$i]:-N/A}" \
        "${T_ALU_FULL[$i]:-N/A}" \
        "${T_CMP_FULL[$i]:-N/A}" \
        "${T_JUMP_FULL[$i]:-N/A}" \
        "${T_MUL_FULL[$i]:-N/A}" \
        "${T_LQ_FULL[$i]:-N/A}" \
        "${T_SQ_FULL[$i]:-N/A}" \
        "${T_BR_CP_FULL[$i]:-N/A}" \
        "${T_LC_FULL[$i]:-N/A}"
done
echo "  ======================================================================================================================================="
exit 0
