#!/bin/bash
# run_all.sh — run all testcode programs through make run, stop on first failure.
# The failed test's top_tb.cpp will prompt y/n for VCD rerun — just answer normally.

TESTCODE_DIR="../testcode"
PASS=0
FAIL=0

# IPC and misprediction tracking: parallel arrays
declare -a IPC_NAMES
declare -a IPC_VALUES
declare -a MISPRED_VALUES

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

    # Run make run, tee stdout to tmpfile; stdin passes through for y/n prompt
    make -C "$(dirname "$0")" run PROG="$PROG" | tee "$TMPFILE"
    STATUS=${PIPESTATUS[0]}

    # Extract IPC and misprediction rate from the output
    IPC_LINE=$(grep '\[C++ IPC\]' "$TMPFILE" | tail -1)
    IPC_VAL=$(echo "$IPC_LINE" | grep -oP 'IPC=\K[0-9.]+')
    BRANCH_LINE=$(grep '\[C++ Branch\]' "$TMPFILE" | tail -1)
    MISPRED_VAL=$(echo "$BRANCH_LINE" | grep -oP 'mispredict_rate=\K[0-9.]+')
    TEST_NAME=$(basename "$PROG")
    IPC_NAMES+=("$TEST_NAME")
    IPC_VALUES+=("${IPC_VAL:-N/A}")
    MISPRED_VALUES+=("${MISPRED_VAL:-N/A}")

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
printf "  %-40s %-10s %s\n" "Test" "IPC" "Mispredict Rate"
echo "  ------------------------------------------------------------"
for i in "${!IPC_NAMES[@]}"; do
    printf "  %-40s %-10s %s\n" "${IPC_NAMES[$i]}" "${IPC_VALUES[$i]}" "${MISPRED_VALUES[$i]}"
done
echo "======================================"
exit 0
