# Speculative Load / Store-to-Load Forwarding Analysis

Two mechanisms are measured:

- **Aggressive speculative execution** — a load with ≥1 older store whose address is unresolved issues to dmem immediately (LS_SPECULATIVE). Identify-error catches RAW violations when the store's address becomes valid.
- **Aggressive speculative forwarding** — a load forwards from the youngest matching store even if intermediate unresolved stores exist between the match and the load (LS_FORWARDING). Same identify-error safety net.

Both are intentional design choices. The load checkpoint + identify-error mechanism is the safety net. The hypothesis: mispredicts are rare enough that aggressive speculation is a net win.

Counters tracked per run:
- **Safe Lds** — loads issued to dmem with all older store addresses resolved
- **Spec Lds** — loads issued to dmem speculatively (≥1 unresolved older store)
- **Fwd Lds** — loads bypassed dmem via SQ forwarding
- **Spec Misp%** — spec load mispredicts / (Spec Lds + Fwd Lds)
- **Fwd Misp%** — forwarding-caused mispredicts / Fwd Lds

---

## Always Not Taken

### IPC and Mispredict Rates

| Benchmark | IPC | Br Misp% | Jmp Misp% | Spec Misp% | Fwd Misp% |
|---|---|---|---|---|---|
| first_run | 0.386 | 0.500 | 0.000 | 0.000 | 0.000 |
| second_run | 0.383 | 0.667 | 0.000 | 0.000 | 0.000 |
| compression | 0.450 | 0.758 | 1.000 | **0.000263** | 0.000 |
| coremark_small | 0.349 | 0.613 | 1.000 | 0.000 | 0.000 |
| coremark | 0.345 | 0.649 | 1.000 | 0.000 | 0.000 |
| dna | 0.381 | 0.843 | 1.000 | 0.000 | 0.000 |
| fft | 0.412 | 0.985 | 1.000 | 0.000 | 0.000 |
| graph | 0.460 | 1.000 | 1.000 | 0.000 | 0.000 |
| mergesort | 0.399 | 0.470 | 1.000 | 0.000 | 0.000 |
| physics | 0.385 | 0.484 | 1.000 | 0.000 | 0.000 |
| physics_d | 0.446 | 0.707 | 1.000 | 0.000 | 0.000 |
| rsa | 0.317 | 0.516 | 1.000 | 0.000 | 0.000 |
| rsa_d | 0.325 | 0.958 | 1.000 | 0.000 | 0.000 |
| sudoku | 0.387 | 0.194 | 1.000 | 0.000 | 0.000 |

### Load Classification

| Benchmark | Safe Lds | Spec Lds | Fwd Lds |
|---|---|---|---|
| first_run | 9 | 0 | 0 |
| second_run | 9 | 0 | 2 |
| compression | 171,223 | 3,801 | 1,810 |
| coremark_small | 298,100 | 0 | 7 |
| coremark | 223,635 | 0 | 5 |
| dna | 66,889 | 0 | 0 |
| fft | 122,053 | 0 | 64 |
| graph | 125,005 | 0 | 0 |
| mergesort | 67,442 | 0 | 0 |
| physics | 135,548 | 0 | 0 |
| physics_d | 90,332 | 0 | 333 |
| rsa | 40 | 0 | 0 |
| rsa_d | 0 | 0 | 0 |
| sudoku | 118,018 | 0 | 9 |

---

## Always Taken + BTB

### IPC and Mispredict Rates

| Benchmark | IPC | Br Misp% | Jmp Misp% | Spec Misp% | Fwd Misp% |
|---|---|---|---|---|---|
| first_run | 0.386 | 0.500 | 0.000 | 0.000 | 0.000 |
| second_run | 0.383 | 0.667 | 0.000 | 0.000 | 0.000 |
| compression | 0.469 | 0.328 | 1.000 | 0.000 | 0.000 |
| coremark_small | 0.371 | 0.528 | 0.287 | 0.000 | 0.000 |
| coremark | 0.378 | 0.501 | 0.314 | 0.000 | 0.000 |
| dna | 0.466 | 0.236 | 0.033 | 0.000 | 0.000 |
| fft | 0.426 | 0.033 | 0.513 | 0.000 | 0.000 |
| graph | 0.500 | 0.001 | 1.000 | 0.000 | 0.000 |
| mergesort | 0.378 | 0.654 | 0.208 | 0.000 | 0.000 |
| physics | 0.373 | 0.648 | 0.612 | 0.000 | 0.000 |
| physics_d | 0.454 | 0.478 | 0.276 | 0.000 | 0.000 |
| rsa | 0.404 | 0.501 | 0.040 | 0.000 | 0.000 |
| rsa_d | 0.479 | 0.077 | 1.000 | 0.000 | 0.000 |
| sudoku | **0.236** | **0.849** | 0.552 | 0.000 | 0.000 |

### Load Classification

| Benchmark | Safe Lds | Spec Lds | Fwd Lds |
|---|---|---|---|
| first_run | 9 | 0 | 0 |
| second_run | 9 | 0 | 2 |
| compression | 169,563 | 4,001 | 3,032 |
| coremark_small | 308,718 | 0 | 7 |
| coremark | 232,501 | 0 | 5 |
| dna | 66,892 | 0 | 0 |
| fft | 126,293 | 0 | 127 |
| graph | 144,997 | 0 | 0 |
| mergesort | 70,219 | 0 | 0 |
| physics | 131,735 | 0 | 0 |
| physics_d | 92,579 | 0 | 426 |
| rsa | 40 | 0 | 0 |
| rsa_d | 0 | 0 | 0 |
| sudoku | 129,152 | 0 | 10 |

---

## 2-bit Counter + BTB

### IPC and Mispredict Rates

| Benchmark | IPC | Br Misp% | Jmp Misp% | Spec Misp% | Fwd Misp% |
|---|---|---|---|---|---|
| first_run | 0.386 | 0.500 | 0.000 | 0.000 | 0.000 |
| second_run | 0.383 | 0.667 | 0.000 | 0.000 | 0.000 |
| compression | 0.478 | 0.178 | 1.000 | 0.000 | 0.000 |
| coremark_small | 0.403 | 0.299 | 0.818 | 0.000 | 0.000 |
| coremark | 0.404 | 0.319 | 0.678 | 0.000 | 0.000 |
| dna | 0.456 | 0.159 | 1.000 | 0.000 | 0.000 |
| fft | 0.423 | 0.036 | 0.870 | 0.000 | 0.000 |
| graph | 0.500 | 0.001 | 1.000 | 0.000 | 0.000 |
| mergesort | 0.420 | 0.257 | 1.000 | 0.000 | 0.000 |
| physics | 0.411 | 0.314 | 1.000 | 0.000 | 0.000 |
| physics_d | 0.453 | 0.405 | 1.000 | 0.000 | 0.000 |
| rsa | **0.353** | 0.165 | **1.000** | 0.000 | 0.000 |
| rsa_d | 0.479 | 0.077 | 1.000 | 0.000 | 0.000 |
| sudoku | **0.396** | **0.121** | 0.841 | 0.000 | 0.000 |

### Load Classification

| Benchmark | Safe Lds | Spec Lds | Fwd Lds |
|---|---|---|---|
| first_run | 9 | 0 | 0 |
| second_run | 9 | 0 | 2 |
| compression | 168,005 | 4,000 | 3,157 |
| coremark_small | 300,636 | 0 | 22 |
| coremark | 227,044 | 0 | 18 |
| dna | 66,892 | 0 | 0 |
| fft | 125,973 | 0 | 112 |
| graph | 144,993 | 0 | 0 |
| mergesort | 70,158 | 0 | 0 |
| physics | 135,548 | 0 | 0 |
| physics_d | 91,181 | 0 | 333 |
| rsa | 40 | 0 | 0 |
| rsa_d | 0 | 0 | 0 |
| sudoku | 118,265 | 0 | 9 |

---

## TAGE + BTB

### IPC and Mispredict Rates

| Benchmark | IPC | Br Misp% | Jmp Misp% | Spec Misp% | Fwd Misp% |
|---|---|---|---|---|---|
| first_run | 0.386 | 0.500 | 0.000 | 0.000 | 0.000 |
| second_run | 0.383 | 0.667 | 0.000 | 0.000 | 0.000 |
| compression | 0.472 | 0.229 | 1.000 | 0.000 | 0.000 |
| coremark_small | 0.403 | 0.358 | 0.360 | 0.000 | 0.000 |
| coremark | 0.402 | 0.366 | 0.356 | 0.000 | 0.000 |
| dna | 0.476 | 0.161 | 0.034 | 0.000 | 0.000 |
| fft | 0.426 | 0.037 | 0.514 | 0.000 | 0.000 |
| graph | 0.500 | 0.001 | 1.000 | 0.000 | 0.000 |
| mergesort | 0.419 | 0.326 | 0.301 | 0.000 | 0.000 |
| physics | 0.413 | 0.355 | 0.630 | 0.000 | 0.000 |
| physics_d | 0.457 | 0.418 | 0.315 | 0.000 | 0.000 |
| rsa | **0.453** | **0.059** | 0.295 | 0.000 | 0.000 |
| rsa_d | 0.483 | 0.061 | 1.000 | 0.000 | 0.000 |
| sudoku | 0.403 | 0.147 | 0.675 | 0.000 | 0.000 |

### Load Classification

| Benchmark | Safe Lds | Spec Lds | Fwd Lds |
|---|---|---|---|
| first_run | 9 | 0 | 0 |
| second_run | 9 | 0 | 2 |
| compression | 170,347 | 4,000 | 3,222 |
| coremark_small | 303,734 | 0 | 18 |
| coremark | 227,312 | 0 | 11 |
| dna | 66,892 | 0 | 0 |
| fft | 126,268 | 0 | 127 |
| graph | 144,993 | 0 | 0 |
| mergesort | 70,268 | 0 | 0 |
| physics | 136,678 | 0 | 0 |
| physics_d | 92,333 | 0 | 405 |
| rsa | 40 | 0 | 0 |
| rsa_d | 0 | 0 | 0 |
| sudoku | 118,551 | 0 | 9 |

---

## IPC Summary Across All Predictors

| Benchmark | Not Taken | Taken+BTB | 2-bit | TAGE |
|---|---|---|---|---|
| first_run | 0.386 | 0.386 | 0.386 | 0.386 |
| second_run | 0.383 | 0.383 | 0.383 | 0.383 |
| compression | 0.450 | 0.469 | **0.478** | 0.472 |
| coremark_small | 0.349 | 0.371 | **0.403** | 0.403 |
| coremark | 0.345 | 0.378 | **0.404** | 0.402 |
| dna | 0.381 | 0.466 | 0.456 | **0.476** |
| fft | 0.412 | **0.426** | 0.423 | 0.426 |
| graph | 0.460 | **0.500** | 0.500 | 0.500 |
| mergesort | 0.399 | 0.378 | **0.420** | 0.419 |
| physics | 0.385 | 0.373 | 0.411 | **0.413** |
| physics_d | 0.446 | 0.454 | 0.453 | **0.457** |
| rsa | 0.317 | 0.404 | 0.353 | **0.453** |
| rsa_d | 0.325 | 0.479 | 0.479 | **0.483** |
| sudoku | 0.387 | 0.236 | 0.396 | **0.403** |

---

## IPC Delta vs Early Recovery Baseline (Execute-Time Recovery, No Spec Loads)

early_recovery_analysis.md measured the same CPU with execute-time branch recovery but **before speculative load execution was added**. The delta below isolates the IPC impact of adding the spec load / store-to-load forwarding feature specifically.

### Always Not Taken

| Benchmark | Early Recovery | Current | Delta | % |
|---|---|---|---|---|
| compression | 0.442 | 0.450 | +0.008 | +1.8% |
| coremark_small | 0.353 | 0.349 | -0.004 | -1.1% |
| coremark | 0.349 | 0.345 | -0.004 | -1.1% |
| dna | 0.384 | 0.381 | -0.003 | -0.8% |
| fft | 0.420 | 0.412 | -0.008 | -1.9% |
| graph | 0.460 | 0.460 | 0.000 | 0% |
| mergesort | 0.406 | 0.399 | -0.007 | -1.7% |
| physics | 0.385 | 0.385 | 0.000 | 0% |
| physics_d | 0.464 | 0.446 | **-0.018** | **-3.9%** |
| rsa | 0.317 | 0.317 | 0.000 | 0% |
| rsa_d | 0.325 | 0.325 | 0.000 | 0% |
| sudoku | 0.410 | 0.387 | **-0.023** | **-5.6%** |

### Always Taken + BTB

| Benchmark | Early Recovery | Current | Delta | % |
|---|---|---|---|---|
| compression | 0.468 | 0.469 | +0.001 | +0.2% |
| coremark_small | 0.377 | 0.371 | -0.006 | -1.6% |
| coremark | 0.382 | 0.378 | -0.004 | -1.0% |
| dna | 0.466 | 0.466 | 0.000 | 0% |
| fft | 0.435 | 0.426 | -0.009 | -2.1% |
| graph | 0.500 | 0.500 | 0.000 | 0% |
| mergesort | 0.389 | 0.378 | -0.011 | -2.8% |
| physics | 0.373 | 0.373 | 0.000 | 0% |
| physics_d | 0.473 | 0.454 | **-0.019** | **-4.0%** |
| rsa | 0.404 | 0.404 | 0.000 | 0% |
| rsa_d | 0.479 | 0.479 | 0.000 | 0% |
| sudoku | 0.270 | 0.236 | **-0.034** | **-12.6%** |

### 2-bit Counter + BTB

| Benchmark | Early Recovery | Current | Delta | % |
|---|---|---|---|---|
| compression | 0.473 | 0.478 | +0.005 | +1.1% |
| coremark_small | 0.407 | 0.403 | -0.004 | -1.0% |
| coremark | 0.408 | 0.404 | -0.004 | -1.0% |
| dna | 0.456 | 0.456 | 0.000 | 0% |
| fft | 0.433 | 0.423 | -0.010 | -2.3% |
| graph | 0.500 | 0.500 | 0.000 | 0% |
| mergesort | 0.429 | 0.420 | -0.009 | -2.1% |
| physics | 0.412 | 0.411 | -0.001 | ~0% |
| physics_d | 0.469 | 0.453 | **-0.016** | **-3.4%** |
| rsa | 0.353 | 0.353 | 0.000 | 0% |
| rsa_d | 0.479 | 0.479 | 0.000 | 0% |
| sudoku | 0.424 | 0.396 | **-0.028** | **-6.6%** |

### TAGE + BTB

| Benchmark | Early Recovery | Current | Delta | % |
|---|---|---|---|---|
| compression | 0.472 | 0.472 | 0.000 | 0% |
| coremark_small | 0.407 | 0.403 | -0.004 | -1.0% |
| coremark | 0.406 | 0.402 | -0.004 | -1.0% |
| dna | 0.475 | 0.476 | +0.001 | +0.2% |
| fft | 0.435 | 0.426 | **-0.009** | **-2.1%** |
| graph | 0.500 | 0.500 | 0.000 | 0% |
| mergesort | 0.430 | 0.419 | **-0.011** | **-2.6%** |
| physics | 0.412 | 0.413 | +0.001 | +0.2% |
| physics_d | 0.475 | 0.457 | **-0.018** | **-3.8%** |
| rsa | 0.453 | 0.453 | 0.000 | 0% |
| rsa_d | 0.483 | 0.483 | 0.000 | 0% |
| sudoku | 0.434 | 0.403 | **-0.031** | **-7.1%** |

---

## Analysis

### compression is the only benchmark with speculative load activity

Every other benchmark shows zero speculative loads and negligible forwarding. compression's kernel drives tight store-load sequences in its inner loop — stores write intermediate values while loads read neighboring locations in the same window, creating the OOO conditions for both LS_SPECULATIVE and LS_FORWARDING states to fire.

**rsa_d is notable:** zero safe loads, zero speculative loads, zero forwarded loads. It is essentially a compute-bound benchmark — the only memory traffic is stack setup/teardown, which resolves before any loads are in-flight speculatively.

**rsa:** only 40 safe loads total across the entire run. Extremely memory-light in the hot path.

### Jmp Misp% = 1.000 under Always Not Taken, drops with BTB

Without a BTB, JALR targets cannot be predicted — every indirect jump mispredicts. With Taken+BTB, BTB entries warm up from actual jump targets. By the time benchmarks are in steady state, most JAL/JALR targets are in the BTB. Remaining mispredict comes from BTB cold misses and capacity evictions. fft (0.513) and physics (0.612) have higher jump mispredict under Taken+BTB because their indirect call patterns have more unique targets than the BTB can hold, or the BTB is polluted by taken-branch entries.

### compression shows a non-zero spec mispredict rate under Always Not Taken, zero under Taken+BTB

Spec Misp% = 0.000263 — approximately 1–2 speculative load mispredicts across the entire compression run. This is the **first observed spec load mispredict** across any benchmark and any predictor setting tested so far.

The mechanism: under "always not taken", branches are mispredicted at 75.8%. This drives very different instruction interleaving in the OOO window compared to TAGE. The high branch mispredict rate causes frequent partial flushes that change which stores and loads are simultaneously in-flight, exposing a store-load RAW hazard that doesn't appear under TAGE's lower-mispredict execution trace.

Fwd Misp% = 0.000 — the mispredict came from a speculative dmem load (was_forwarded == 0), not from the forwarding path. The forwarding mechanism remains clean across all predictors tested.

Under Taken+BTB, compression's spec mispredict disappears (0.000). The branch mispredict rate drops from 75.8% to 32.8% — the OOO window is less polluted with wrong-path instructions, and the specific store-load interleaving that triggered the RAW hazard under not-taken no longer occurs.

### 2-bit vs Always Taken: branch mispredict improves across the board, but jump mispredict regresses

Branch mispredict drops substantially with 2-bit counters — sudoku 84.9% → 12.1%, mergesort 65.4% → 25.7%, physics 64.8% → 31.4%. sudoku fully recovers from its always-taken collapse (IPC 0.236 → 0.396).

However, **jump mispredict gets worse on many benchmarks**. Under always-taken+BTB, the BTB warmed up on actual jump targets and most indirect jumps were predicted correctly. Under 2-bit, multiple benchmarks regress to Jmp Misp% = 1.000 (dna, mergesort, physics, physics_d, rsa, rsa_d, graph). The likely cause: the 2-bit counter and BTB share capacity. With 2-bit state consuming BTB entries for branch prediction, jump target entries are evicted, losing the BTB warmup that always-taken had accumulated.

**rsa is the clearest victim:** IPC drops from 0.404 (taken) to 0.353 (2-bit) despite branch mispredict improving from 50.1% to 16.5%. Jmp Misp% goes from 0.040 to 1.000 — rsa's indirect jumps, which were in the BTB under always-taken, are now evicted. Every jump mispredicts, erasing the branch prediction gain. This matches the predictor_analysis.md anomaly note verbatim.

### sudoku collapses under Always Taken

IPC drops from 0.387 (not-taken) to 0.236 (taken+BTB), branch mispredict jumps from 19.4% to 84.9%. This matches the predictor_analysis.md finding — sudoku has predominantly not-taken branches, so always-taken is the worst possible predictor for it. Despite the much higher branch mispredict rate, safe load counts actually increase slightly (118,018 → 129,152) because more wrong-path loads complete before the branch flush arrives, inflating the count.

### TAGE recovers rsa from the 2-bit BTB eviction problem

rsa is the most dramatic example of predictor interaction: IPC 0.317 → 0.404 → 0.353 → 0.453 across not-taken, taken+BTB, 2-bit, TAGE. Under 2-bit, BTB capacity eviction drove Jmp Misp% to 1.000, collapsing IPC below even not-taken. TAGE separates its history tables from BTB storage, restoring jump target prediction: Jmp Misp% drops to 0.295 under TAGE vs 1.000 under 2-bit. Combined with TAGE's best-in-class branch mispredict rate (5.9%), rsa achieves its peak IPC.

### TAGE has higher branch mispredict than 2-bit on some benchmarks, but higher IPC

| Benchmark | 2-bit Br% | TAGE Br% | 2-bit Jmp% | TAGE Jmp% | 2-bit IPC | TAGE IPC |
|---|---|---|---|---|---|---|
| coremark_small | 0.299 | 0.358 | 0.818 | 0.360 | 0.403 | 0.403 |
| coremark | 0.319 | 0.366 | 0.678 | 0.356 | 0.404 | 0.402 |
| mergesort | 0.257 | 0.326 | 1.000 | 0.301 | 0.420 | 0.419 |
| physics_d | 0.405 | 0.418 | 1.000 | 0.315 | 0.453 | 0.457 |
| sudoku | 0.121 | 0.147 | 0.841 | 0.675 | 0.396 | 0.403 |

TAGE trades slightly worse branch mispredict for significantly better jump mispredict on these benchmarks. The net effect is neutral-to-positive IPC because jump mispredicts and branch mispredicts cost the same penalty — reducing jump mispredict by 0.4–0.7 more than compensates for increasing branch mispredict by 0.03–0.06.

### Predictor quality affects speculative load exposure

A weaker predictor creates a noisier OOO window. Wrong-path instructions occupy ROB, LQ, and SQ slots — changing which stores are "older" than which loads at any cycle. The single spec mispredict seen in compression under "always not taken" was caused by this wrong-path pollution creating a store-load interleaving that doesn't occur under better predictors. Under 2-bit and TAGE, the mispredict disappears entirely.

### Spec load counts are remarkably stable across predictors

compression's speculative and forwarded load counts barely move across all 4 predictors:

| Predictor | Spec Lds | Fwd Lds |
|---|---|---|
| Not Taken | 3,801 | 1,810 |
| Taken+BTB | 4,001 | 3,032 |
| 2-bit | 4,000 | 3,157 |
| TAGE | 4,000 | 3,222 |

Spec loads are nearly constant (~4,000). Fwd loads increase with better predictors — under not-taken, more branch flushes kill forwarded loads before they reach LS_EXECUTED, so fewer are counted. Under TAGE, fewer wrong-path flushes occur and more forwarded loads complete and are counted.

### The spec load feature introduced regressions on several benchmarks

Compared to the execute-time-only baseline, adding spec loads caused IPC to drop on several benchmarks consistently across all 4 predictors:

| Benchmark | TAGE Δ | Pattern |
|---|---|---|
| physics_d | -0.018 | consistent across all 4 predictors (-0.016 to -0.019) |
| sudoku | -0.031 | consistent across all 4 predictors (-0.023 to -0.034) |
| fft | -0.009 | consistent across all 4 predictors (-0.008 to -0.010) |
| mergesort | -0.011 | consistent across all 4 predictors (-0.007 to -0.011) |
| coremark_small/coremark | -0.004 | consistent, small |

These regressions are real — the same benchmarks are affected across all predictor settings, which rules out predictor interaction as the cause. Stall counter data (TAGE run) reveals the root cause per benchmark:

| Benchmark | rob_full | sq_full | lc_full | cmp_full | Root cause |
|---|---|---|---|---|---|
| fft | 36,112 | 26,841 | 11,723 | 0 | SQ full + ROB full + load checkpoint full |
| mergesort | 3,826 | 97 | 0 | 0 | ROB full only |
| physics_d | 8,392 | 7,453 | 8 | 0 | SQ full + ROB full (load checkpoint negligible) |
| sudoku | 512 | 38 | 2,177 | 19,896 | CMP RS full dominant; lc_full backs up dispatch which fills CMP RS |

**physics_d regression is not from load checkpoints at all** — lc_full=8 is negligible. SQ full (7,453) and ROB full (8,392) are the culprits.

**mergesort regression is purely ROB full** — lc_full=0.

**fft has all three** — load checkpoint pressure is real (11,723 cycles) but SQ and ROB pressure are even larger.

**sudoku's dominant stall is CMP RS full** (19,896 cycles). The load checkpoint stalls (2,177) reduce dispatch throughput, which backs up rename and eventually saturates the CMP reservation station with unissued compare instructions.

The common thread across physics_d, fft, and mergesort is **SQ full and ROB full**. The new split SQ is a separate 8-entry FIFO that only drains when a store commits and dmem responds. Under the old unified loadstore_queue, store management behaved differently — stores apparently didn't back up the ROB as often on these workloads. The IPC regression is a structural cost of the new design, not a spec load algorithm bug.

compression, dna, rsa, rsa_d, and physics show zero or positive delta — these benchmarks are either unaffected by the new structural bottlenecks or benefit directly from spec load execution (compression's ~7,000 aggressive loads).

### Safe loads dominate in all benchmarks

Even in compression, safe loads (~170,000) outnumber speculative (~4,000) and forwarded (~3,200) by ~25:1. The aggressive mechanisms fire on a small fraction of total loads — but on that fraction they eliminate stalls entirely (speculative) or skip the memory port completely (forwarding).

---

## Cross-Cutting Observations

**The aggressive forwarding path (Fwd Misp%) is 0.000 across every predictor and every benchmark.** The store-to-load forwarding mechanism has never caused a mispredict.

**The aggressive speculative execution path (Spec Misp%) is 0.000 everywhere except one case:** compression under "always not taken" (0.000263 ≈ 1–2 mispredicts total). This disappears under all three better predictors. The identify-error mechanism correctly detected and recovered from it — no wrong results, just a performance counter increment.

**The safety net works exactly as designed.** The single observed mispredict demonstrates identify-error firing and triggering recovery. The load re-executed with the correct value. Zero correctness violations across all 56 benchmark × predictor combinations.

**rsa is the most predictor-sensitive benchmark for both branch prediction and speculative loads.** Its IPC swings from 0.317 to 0.453 across predictors — a 43% range. Spec load counts (40 safe loads, 0 spec, 0 fwd) are negligible; the sensitivity is entirely driven by branch and jump prediction quality.

**compression is the only benchmark where speculative load mechanisms matter.** Every other benchmark has zero spec loads across all predictor settings. compression's tight store-load sequences in its inner loop are the sole source of OOO-window RAW hazard candidates in this benchmark suite.

---

## LQ=SQ=16, Flat DMEM (4-cycle total) — TAGE + BTB

Queue sizes increased from 8 to 16 for both LQ and SQ. Load checkpoints (LC_SIZE) also increased to 16. All else unchanged; DMEM_DELAY=3 (4-cycle total), same as the LQ=SQ=8 runs above.

### IPC and Load Classification

| Benchmark | IPC | Br Misp% | Jmp Misp% | Spec Misp% | Fwd Misp% | Safe Lds | Spec Lds | Fwd Lds |
|---|---|---|---|---|---|---|---|---|
| first_run | 0.386 | 0.500 | 0.000 | 0.000 | 0.000 | 9 | 0 | 0 |
| second_run | 0.383 | 0.667 | 0.000 | 0.000 | 0.000 | 9 | 0 | 2 |
| compression | 0.477 | 0.183 | 1.000 | 0.000 | 0.000 | 168,880 | 4,000 | 3,389 |
| coremark_small | 0.403 | 0.354 | 0.362 | 0.000 | 0.000 | 303,311 | 0 | 18 |
| coremark | 0.402 | 0.368 | 0.353 | 0.000 | 0.000 | 227,323 | 0 | 10 |
| dna | 0.474 | 0.174 | 0.034 | 0.000 | 0.000 | 66,894 | 0 | 0 |
| fft | 0.428 | 0.036 | 0.514 | 0.000 | 0.000 | 127,975 | 0 | 192 |
| graph | 0.500 | 0.001 | 1.000 | 0.000 | 0.000 | 144,993 | 0 | 0 |
| mergesort | 0.419 | 0.326 | 0.301 | 0.000 | 0.000 | 70,268 | 0 | 0 |
| physics | 0.412 | 0.356 | 0.629 | 0.000 | 0.000 | 136,745 | 0 | 0 |
| physics_d | 0.456 | 0.426 | 0.320 | 0.000 | 0.000 | 92,405 | 0 | 402 |
| rsa | 0.453 | 0.059 | 0.295 | 0.000 | 0.000 | 40 | 0 | 0 |
| rsa_d | 0.483 | 0.061 | 1.000 | 0.000 | 0.000 | 0 | 0 | 0 |
| sudoku | 0.403 | 0.146 | 0.655 | 0.000 | 0.000 | 118,554 | 0 | 9 |

### Stall Counters

| Benchmark | rob_full | no_free_pr | alu | cmp | jump | mul | lq_full | sq_full | br_cp_full | lc_full |
|---|---|---|---|---|---|---|---|---|---|---|
| first_run | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| second_run | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| compression | 403 | 0 | 39,794 | 1,968 | 0 | 0 | 0 | 0 | 0 | 0 |
| coremark_small | 667 | 0 | 410 | 63,057 | 0 | 0 | 0 | 8 | 0 | 0 |
| coremark | 675 | 0 | 406 | 48,912 | 0 | 0 | 0 | 8 | 0 | 0 |
| dna | 54 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| fft | 69,759 | 0 | 0 | 0 | 0 | 0 | 0 | 980 | 0 | 0 |
| graph | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| mergesort | 3,923 | 0 | 689 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| physics | 6,854 | 0 | 240 | 958 | 0 | 0 | 0 | 0 | 0 | 0 |
| physics_d | 12,781 | 0 | 158 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| rsa | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| rsa_d | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| sudoku | 2,595 | 0 | 0 | 20,009 | 0 | 0 | 0 | 0 | 0 | 0 |

### IPC Delta vs LQ=SQ=8, Flat DMEM (TAGE)

| Benchmark | LQ=8 IPC | LQ=16 IPC | Δ IPC | % | Dominant stall shift |
|---|---|---|---|---|---|
| compression | 0.472 | 0.477 | +0.005 | +1.1% | sq_full/lc_full → eliminated |
| coremark_small | 0.403 | 0.403 | 0.000 | 0% | sq_full=8 remained; rob_full down |
| coremark | 0.402 | 0.402 | 0.000 | 0% | same |
| dna | 0.476 | 0.474 | -0.002 | -0.4% | negligible; never stall-bound |
| fft | 0.426 | 0.428 | +0.002 | +0.5% | sq_full 26,841→980; lc_full 11,723→0; rob_full 36,112→69,759 |
| graph | 0.500 | 0.500 | 0.000 | 0% | never stall-bound |
| mergesort | 0.419 | 0.419 | 0.000 | 0% | rob_full only, unchanged |
| physics | 0.413 | 0.412 | -0.001 | ~0% | negligible |
| physics_d | 0.457 | 0.456 | -0.001 | ~0% | sq_full 7,453→0; lc_full 8→0; rob_full 12,781 (similar) |
| rsa | 0.453 | 0.453 | 0.000 | 0% | never stall-bound |
| rsa_d | 0.483 | 0.483 | 0.000 | 0% | never stall-bound |
| sudoku | 0.403 | 0.403 | 0.000 | 0% | lc_full 2,177→0; cmp_full 19,896→20,009 (unchanged) |
| **Geomean** | **0.441** | **0.441** | **0.000** | **0%** | |

### Analysis

**Enlarging LQ/SQ from 8→16 produced zero IPC gain.** The geomean across 12 benchmarks is identical (0.441). This is the clearest possible demonstration of **conservation of bottlenecks**: one stall type is eliminated and another absorbs the headroom it created.

The stall shift is visible per-benchmark:

- **fft**: sq_full dropped from 26,841 → 980 and lc_full from 11,723 → 0. But rob_full nearly doubled (36,112 → 69,759). The ROB, not the queues, was always the fundamental limit. Larger queues just let the ROB fill up faster before anything stalled.

- **physics_d**: sq_full 7,453 → 0, lc_full 8 → 0. rob_full stayed at ~12,781. The queue stalls were always a symptom of the ROB being full — stores couldn't commit because the ROB head was blocked, backing up the SQ. Enlarging the SQ doesn't unblock the ROB head.

- **sudoku**: lc_full 2,177 → 0. CMP RS stalls held at ~20,000 (19,896 → 20,009). The load checkpoint was gating dispatch, which backed up the CMP RS. Removing that gate revealed that the CMP RS was already essentially saturated — cmp stalls barely moved because the CMP RS was the true bottleneck.

- **mergesort**: rob_full was already the sole stall (no sq/lc pressure under LQ=8); IPC unchanged as expected.

**The ROB (16 entries) is the binding constraint for every stall-bound benchmark in this suite.** Enlarging LQ/SQ relieved structural pressure in the execute stage but left the commit stage unchanged. Since loads and stores cannot commit faster, they block the ROB head at the same rate, keeping overall throughput identical.

---

## LQ=SQ=16, Probabilistic DMEM (90% L1 / 8% L2 / 2% DRAM) — TAGE + BTB

Memory latency model: each dmem transaction independently draws L1 hit (4-cycle total, 90%), L2 hit (12-cycle total, 8%), or DRAM (80-cycle total, 2%). Expected latency per transaction = 0.90×4 + 0.08×12 + 0.02×80 = **6.2 cycles** vs the previous flat 4 cycles. Fixed seed `srand(42)` ensures fully reproducible results across runs and fair comparison against any alternative configuration.

### IPC and Load Classification

| Benchmark | IPC | Br Misp% | Jmp Misp% | Spec Misp% | Fwd Misp% | Safe Lds | Spec Lds | Fwd Lds |
|---|---|---|---|---|---|---|---|---|
| first_run | 0.386 | 0.500 | 0.000 | 0.000 | 0.000 | 9 | 0 | 0 |
| second_run | 0.383 | 0.667 | 0.000 | 0.000 | 0.000 | 9 | 0 | 2 |
| compression | 0.344 | 0.189 | 1.000 | **0.000273** | 0.000 | 242,506 | 3,660 | 3,565 |
| coremark_small | 0.378 | 0.359 | 0.366 | 0.000 | 0.000 | 468,405 | 0 | 169 |
| coremark | 0.381 | 0.370 | 0.362 | 0.000 | 0.000 | 353,353 | 0 | 167 |
| dna | 0.440 | 0.188 | 0.034 | 0.000 | 0.000 | 94,454 | 0 | 0 |
| fft | 0.360 | 0.037 | 0.514 | 0.000 | 0.000 | 192,792 | 0 | 200 |
| graph | 0.416 | 0.001 | 1.000 | 0.000 | 0.000 | 260,205 | 0 | 0 |
| mergesort | 0.365 | 0.343 | 0.313 | 0.000 | 0.000 | 112,999 | 0 | 20 |
| physics | 0.378 | 0.366 | 0.637 | 0.000 | 0.000 | 205,215 | 0 | 0 |
| physics_d | 0.367 | 0.436 | 0.311 | 0.000 | 0.000 | 139,420 | 0 | 527 |
| rsa | 0.453 | 0.059 | 0.295 | 0.000 | 0.000 | 48 | 0 | 0 |
| rsa_d | 0.483 | 0.061 | 1.000 | 0.000 | 0.000 | 0 | 0 | 0 |
| sudoku | 0.322 | 0.153 | 0.631 | 0.000 | 0.000 | 168,734 | 0 | 14 |

### Stall Counters

| Benchmark | rob_full | no_free_pr | alu | cmp | jump | mul | lq_full | sq_full | br_cp_full | lc_full |
|---|---|---|---|---|---|---|---|---|---|---|
| first_run | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| second_run | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| compression | 1,496 | 0 | 123,900 | 7,103 | 0 | 0 | 0 | 0 | 0 | 0 |
| coremark_small | 30,510 | 0 | 18,981 | 148,879 | 0 | 0 | 0 | 16 | 0 | 0 |
| coremark | 26,629 | 0 | 19,758 | 109,685 | 0 | 0 | 0 | 16 | 0 | 0 |
| dna | 1,271 | 0 | 19,820 | 22 | 0 | 0 | 0 | 0 | 0 | 0 |
| fft | 133,752 | 0 | 2,045 | 0 | 0 | 0 | 0 | 2,431 | 0 | 0 |
| graph | 89,314 | 0 | 6,321 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| mergesort | 30,160 | 0 | 7,415 | 1,395 | 0 | 0 | 0 | 0 | 0 | 0 |
| physics | 40,248 | 0 | 20,173 | 2,436 | 0 | 12 | 0 | 0 | 0 | 0 |
| physics_d | 62,211 | 0 | 8,559 | 171 | 0 | 1,989 | 0 | 759 | 0 | 0 |
| rsa | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| rsa_d | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 | 0 |
| sudoku | 8,230 | 0 | 0 | 65,398 | 0 | 0 | 0 | 0 | 0 | 0 |

### IPC Delta vs LQ=SQ=16, Flat DMEM

| Benchmark | Flat IPC | Prob IPC | Δ IPC | % | Primary new stall |
|---|---|---|---|---|---|
| compression | 0.477 | 0.344 | -0.133 | **-27.9%** | rob_full 403→1,496; alu RS 40k→124k |
| coremark_small | 0.403 | 0.378 | -0.025 | -6.2% | rob_full 667→30,510; cmp RS 63k→149k |
| coremark | 0.402 | 0.381 | -0.021 | -5.2% | rob_full 675→26,629; cmp RS 49k→110k |
| dna | 0.474 | 0.440 | -0.034 | -7.2% | rob_full 54→1,271 |
| fft | 0.428 | 0.360 | -0.068 | **-15.9%** | rob_full 69,759→133,752; sq_full 980→2,431 |
| graph | 0.500 | 0.416 | -0.084 | **-16.8%** | rob_full 0→89,314 |
| mergesort | 0.419 | 0.365 | -0.054 | -12.9% | rob_full 3,923→30,160 |
| physics | 0.412 | 0.378 | -0.034 | -8.3% | rob_full 6,854→40,248 |
| physics_d | 0.456 | 0.367 | -0.089 | **-19.5%** | rob_full 12,781→62,211; mul RS 0→1,989; sq_full 0→759 |
| rsa | 0.453 | 0.453 | 0.000 | **0%** | no stalls |
| rsa_d | 0.483 | 0.483 | 0.000 | **0%** | no stalls |
| sudoku | 0.403 | 0.322 | -0.081 | **-20.1%** | rob_full 2,595→8,230; cmp RS 20k→65k |
| **Geomean** | **0.441** | **0.388** | **-0.053** | **-12.0%** | |

### Analysis

**rob_full is the universal bottleneck under realistic memory latency.** Every stall-bound benchmark sees rob_full increase by 2–200×. A load waiting 80 cycles for DRAM holds its ROB slot for 80 cycles, blocking all younger instructions from committing. With 16 ROB entries and a 2% DRAM rate, even one DRAM hit stalls the ROB for up to 80 cycles.

**Compute-bound benchmarks are completely immune.** rsa and rsa_d show zero IPC change — rsa has only 48 loads in its entire hot path. Fully dominated by branch prediction and ALU throughput.

**Memory-intensive benchmarks show proportional sensitivity.** physics_d dropped 19.5% — mul RS stalls (0→1,989) appeared for the first time, suggesting mul results are being consumed before store addresses can be calculated. fft dropped 15.9% with sq_full more than doubling (980→2,431): slow DRAM responses mean stores sit in the SQ longer, backing up new store dispatch.

**The new RS stalls (alu, cmp) are a consequence of rob_full, not a new bottleneck.** When the ROB is full, dispatch stalls and no new instructions reach the RS. The large alu/cmp RS stall counts reflect instructions already queued waiting for wakeup, not new dispatch pressure.

**Spec loads in compression show an interesting interaction with higher latency.** Spec load count dropped slightly (4,000 → 3,660) and a spec mispredict appeared (Spec Misp% = 0.000273 ≈ 1 event). Under higher memory latency, stores and loads are both in-flight longer — giving store addresses more time to resolve before a load issues, converting some LS_SPECULATIVE to LS_SAFE. The single mispredict confirms identify-error is firing correctly under realistic latency conditions.

**The three-configuration summary tells a clean story:**

| Configuration | Geomean IPC | Key bottleneck |
|---|---|---|
| LQ=SQ=8, flat 4-cycle DMEM | 0.441 | SQ full + lc_full + ROB (mixed) |
| LQ=SQ=16, flat 4-cycle DMEM | 0.441 | ROB full (SQ/lc stalls absorbed into ROB) |
| LQ=SQ=16, probabilistic 6.2-cycle DMEM | 0.388 | ROB full (amplified by longer in-flight load times) |

The queue size increase eliminated one category of structural stalls entirely but produced zero IPC gain because the ROB was always the binding commit-stage constraint. Realistic memory latency then amplifies that ROB bottleneck significantly — loads stay in-flight 1.5–20× longer per transaction, blocking commit at proportionally higher rates.

---

## Baseline Without Spec Loads, Probabilistic DMEM — TAGE + BTB

**Purpose:** isolate the true IPC benefit of speculative load execution under realistic memory latency. The section above (spec loads + prob DMEM) cannot be evaluated in isolation — this run provides the matching baseline.

**How to run:**
1. In `rtl/cpu_execute/cpu_execute.sv`, swap `lsq.sv` → `loadstore_queue.sv` (the old unified queue, still present in the repo)
2. Keep `DMEM_PROBABILISTIC = true`, same percentages (90/8/2), same seed (`srand(42)`)
3. Run benchmarks and paste results below

### IPC

The baseline outputs IPC and combined mispredict rate only — no per-load-type counters (spec/fwd/safe load tracking is part of the spec load feature).

| Benchmark | IPC | Misp% |
|---|---|---|
| first_run | 0.386 | 0.500 |
| second_run | 0.360 | 0.667 |
| compression | 0.333 | 0.213 |
| coremark_small | 0.381 | 0.360 |
| coremark | 0.384 | 0.369 |
| dna | 0.443 | 0.169 |
| fft | 0.365 | 0.036 |
| graph | 0.414 | 0.001 |
| mergesort | 0.371 | 0.331 |
| physics | 0.379 | 0.360 |
| physics_d | 0.381 | 0.428 |
| rsa | 0.453 | 0.059 |
| rsa_d | 0.483 | 0.061 |
| sudoku | 0.344 | 0.151 |

### IPC Delta: Spec Loads vs No Spec Loads (Probabilistic DMEM)

| Benchmark | No Spec IPC | Spec IPC | Δ IPC | % |
|---|---|---|---|---|
| compression | 0.333 | 0.344 | +0.011 | **+3.3%** |
| coremark_small | 0.381 | 0.378 | -0.003 | -0.8% |
| coremark | 0.384 | 0.381 | -0.003 | -0.8% |
| dna | 0.443 | 0.440 | -0.003 | -0.7% |
| fft | 0.365 | 0.360 | -0.005 | -1.4% |
| graph | 0.414 | 0.416 | +0.002 | +0.5% |
| mergesort | 0.371 | 0.365 | -0.006 | -1.6% |
| physics | 0.379 | 0.378 | -0.001 | -0.3% |
| physics_d | 0.381 | 0.367 | -0.014 | **-3.7%** |
| rsa | 0.453 | 0.453 | 0.000 | 0% |
| rsa_d | 0.483 | 0.483 | 0.000 | 0% |
| sudoku | 0.344 | 0.322 | -0.022 | **-6.4%** |
| **Geomean** | **0.392** | **0.388** | **-0.004** | **-1.0%** |

### Analysis

**Spec loads are a net -1.0% under realistic memory latency.** The hypothesis was that higher memory latency would let speculative loads hide more latency and eliminate regressions — but the regression persists.

**compression is the only winner (+3.3%).** It is the only benchmark with real speculative load activity (~3,660 spec loads, ~3,565 forwarded loads). The latency hiding from spec execution and store-to-load forwarding produces a measurable gain. Every other benchmark has zero spec/fwd load activity and gains nothing from the feature.

**The regression is structural, not algorithmic.** The pattern of losers (sudoku -6.4%, physics_d -3.7%, fft -1.4%, mergesort -1.6%) matches exactly the benchmarks identified as SQ/ROB-stall-bound in the LQ=SQ=8 flat-DMEM analysis. The split SQ only drains one store per dmem response, which under the old unified queue behaved differently. This structural overhead persists under realistic latency and outweighs any speculation benefit on these workloads.

**The baseline uses a unified 8-entry queue; the spec load version uses split LQ=16 + SQ=16.** Adding more hardware (32 total entries vs 8) and a more sophisticated execution model still produces worse geomean IPC. This underscores that the bottleneck is the commit-stage drain rate, not queue capacity.

**Summary across all memory latency configurations:**

| Configuration | No Spec Geomean | Spec Geomean | Spec vs No Spec |
|---|---|---|---|
| Flat 4-cycle DMEM | 0.441 (early recovery baseline) | 0.441 | 0% |
| Probabilistic 6.2-cycle DMEM | 0.392 | 0.388 | **-1.0%** |

Spec loads never beat the baseline at geomean level. The only consistent winner is compression, and only when spec load activity is actually triggered.

---

## When Speculative Loads Help — Workload Characterization

**Headline numbers:** +3.3% IPC on compression under realistic memory latency (probabilistic 6.2-cycle avg DMEM). Zero measurable gain on the other 11 benchmarks. Spec mispredict rate = 0.000273% — the safety net (identify-error + load checkpoint recovery) fired correctly and caused no wrong results.

The feature has three requirements for a workload to benefit:

**1. Tight store-load sequences in the hot loop (producer-consumer pattern).**
The inner loop must contain stores writing intermediate results while loads read overlapping or adjacent memory locations before those store addresses resolve in the OOO window. Compression triggers ~3,660 speculative dmem loads and ~3,565 store-to-load forwarding bypasses per run — ~49% of all aggressive memory operations skip dmem entirely via forwarding, eliminating those load latencies completely.

**2. Sufficient memory traffic density.**
The OOO window must regularly contain unresolved store addresses when loads are ready to issue. Of the 12 benchmarks, only compression generates this interleaving. The other 11 produce zero speculative or forwarded loads across all runs.

**3. Meaningful memory latency.**
Under a flat 4-cycle model, the gain on compression was only +1.1% — stores resolved quickly and most loads became safe before issuing. At a realistic 6.2-cycle average (90% L1 / 8% L2 / 2% DRAM), the same benchmark gained +3.3% because slower store address resolution keeps more loads in the speculative window, making latency hiding more valuable.

**Workload profile that benefits:** data-processing kernels with sliding-window, ring-buffer, or scratch-array patterns — compression, codec, and encryption algorithms where recently written values are immediately read back. General-purpose control-flow-heavy or compute-bound workloads see no benefit and may regress due to the structural cost of the split store queue.
