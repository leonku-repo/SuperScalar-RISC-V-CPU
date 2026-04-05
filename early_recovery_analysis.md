# Execute-Time vs Commit-Time Branch Recovery: IPC Comparison

Execute-time recovery fires as soon as the CMP/Jump resolves in the execute stage, rolling back the ROB, RS, LSQ, free list, busy table, and SRAT from a checkpoint. Commit-time recovery waited until the instruction reached the ROB head before redirecting fetch.

For stateless predictors (always not taken), mispredict rates are identical between the two schemes — the prediction logic makes the same decisions either way. For stateful predictors (BTB, 2-bit counter, TAGE), mispredict rates can differ slightly. Both schemes train the predictor at commit time, but execute-time recovery prevents wrong-path instructions from ever reaching commit. This stops wrong-path branches from updating BTB or counter state. In most cases this is neutral or beneficial, but on some benchmarks wrong-path training was accidentally warming up entries that happened to be needed — removing it causes a slight regression.

---

## Always Not Taken

### IPC

| Benchmark | Commit-Time | Execute-Time | Delta | % Gain |
|---|---|---|---|---|
| first_run | 0.354 | 0.386 | +0.032 | +9.1% |
| second_run | 0.333 | 0.360 | +0.027 | +8.0% |
| compression | 0.434 | 0.442 | +0.008 | +1.8% |
| coremark_small | 0.309 | 0.353 | +0.044 | +14.2% |
| coremark | 0.305 | 0.349 | +0.044 | +14.6% |
| dna | 0.344 | 0.384 | +0.040 | +11.6% |
| fft | 0.380 | 0.420 | +0.040 | +10.6% |
| graph | 0.442 | 0.460 | +0.018 | +4.0% |
| mergesort | 0.365 | 0.406 | +0.041 | +11.1% |
| physics | 0.345 | 0.385 | +0.040 | +11.6% |
| physics_d | 0.426 | 0.464 | +0.038 | +8.8% |
| rsa | 0.268 | 0.317 | +0.049 | +18.3% |
| rsa_d | 0.276 | 0.325 | +0.049 | +17.5% |
| sudoku | 0.372 | 0.410 | +0.038 | +10.3% |

### Mispredict Rate (identical — stateless predictor)

| Benchmark | Commit-Time | Execute-Time |
|---|---|---|
| compression | 0.758 | 0.758 |
| coremark_small | 0.613 | 0.613 |
| coremark | 0.649 | 0.649 |
| dna | 0.843 | 0.843 |
| fft | 0.985 | 0.985 |
| graph | 1.000 | 1.000 |
| mergesort | 0.470 | 0.470 |
| physics | 0.484 | 0.484 |
| physics_d | 0.707 | 0.707 |
| rsa | 0.516 | 0.516 |
| rsa_d | 0.958 | 0.958 |
| sudoku | 0.194 | 0.194 |

---

## Always Taken + BTB

### IPC

| Benchmark | Commit-Time | Execute-Time | Delta | % Gain |
|---|---|---|---|---|
| first_run | 0.354 | 0.386 | +0.032 | +9.1% |
| second_run | 0.333 | 0.360 | +0.027 | +8.0% |
| compression | 0.463 | 0.468 | +0.004 | +0.9% |
| coremark_small | 0.339 | 0.377 | +0.038 | +11.2% |
| coremark | 0.344 | 0.382 | +0.038 | +11.2% |
| dna | 0.450 | 0.466 | +0.016 | +3.5% |
| fft | 0.418 | 0.435 | +0.016 | +3.9% |
| graph | 0.500 | 0.500 | +0.000 | ~0% |
| mergesort | 0.349 | 0.389 | +0.039 | +11.3% |
| physics | 0.331 | 0.373 | +0.042 | +12.8% |
| physics_d | 0.455 | 0.473 | +0.017 | +3.8% |
| rsa | 0.368 | 0.404 | +0.035 | +9.6% |
| rsa_d | 0.470 | 0.479 | +0.010 | +2.1% |
| sudoku | 0.262 | 0.270 | +0.008 | +3.2% |

### Mispredict Rate

| Benchmark | Commit-Time | Execute-Time | Change |
|---|---|---|---|
| compression | 0.326 | 0.327 | +0.001 |
| coremark_small | 0.523 | 0.528 | +0.005 |
| coremark | 0.501 | 0.501 | ~0 |
| dna | 0.236 | 0.236 | ~0 |
| fft | 0.029 | 0.031 | +0.002 |
| graph | 0.001 | 0.001 | ~0 |
| mergesort | 0.659 | 0.654 | -0.004 |
| physics | 0.577 | 0.643 | **+0.066** |
| physics_d | 0.546 | 0.478 | **-0.068** |
| rsa | 0.501 | 0.501 | ~0 |
| rsa_d | 0.077 | 0.077 | ~0 |
| sudoku | 0.647 | **0.849** | **+0.202** |

---

## 2-bit Counter + BTB

### IPC

| Benchmark | Commit-Time | Execute-Time | Delta | % Gain |
|---|---|---|---|---|
| first_run | 0.354 | 0.386 | +0.032 | +9.1% |
| second_run | 0.333 | 0.360 | +0.027 | +8.0% |
| compression | 0.470 | 0.473 | +0.003 | +0.7% |
| coremark_small | 0.373 | 0.407 | +0.034 | +9.1% |
| coremark | 0.375 | 0.408 | +0.034 | +9.0% |
| dna | 0.437 | 0.456 | +0.019 | +4.4% |
| fft | 0.414 | 0.433 | +0.020 | +4.7% |
| graph | 0.500 | 0.500 | +0.000 | ~0% |
| mergesort | 0.394 | 0.429 | +0.035 | +8.9% |
| physics | 0.377 | 0.412 | +0.035 | +9.2% |
| physics_d | 0.437 | 0.469 | +0.033 | +7.5% |
| rsa | 0.308 | 0.353 | +0.045 | +14.7% |
| rsa_d | 0.469 | 0.479 | +0.010 | +2.1% |
| sudoku | 0.383 | 0.424 | +0.041 | +10.7% |

### Mispredict Rate

| Benchmark | Commit-Time | Execute-Time | Change |
|---|---|---|---|
| compression | 0.177 | 0.179 | +0.001 |
| coremark_small | 0.301 | 0.299 | -0.003 |
| coremark | 0.319 | 0.319 | ~0 |
| dna | 0.159 | 0.159 | ~0 |
| fft | 0.032 | 0.034 | +0.002 |
| graph | 0.001 | 0.001 | ~0 |
| mergesort | 0.262 | 0.257 | -0.004 |
| physics | 0.311 | 0.309 | -0.002 |
| physics_d | 0.516 | **0.405** | **-0.111** |
| rsa | 0.165 | 0.165 | ~0 |
| rsa_d | 0.077 | 0.077 | ~0 |
| sudoku | 0.155 | **0.121** | **-0.033** |

---

## TAGE + BTB

### IPC

| Benchmark | Commit-Time | Execute-Time | Delta | % Gain |
|---|---|---|---|---|
| first_run | 0.354 | 0.386 | +0.032 | +9.1% |
| second_run | 0.333 | 0.360 | +0.027 | +8.0% |
| compression | 0.470 | 0.472 | +0.002 | +0.4% |
| coremark_small | 0.374 | 0.407 | +0.033 | +8.9% |
| coremark | 0.372 | 0.406 | +0.034 | +9.1% |
| dna | 0.461 | 0.475 | +0.013 | +2.9% |
| fft | 0.419 | 0.435 | +0.016 | +3.8% |
| graph | 0.500 | 0.500 | +0.000 | ~0% |
| mergesort | 0.400 | 0.430 | +0.031 | +7.7% |
| physics | 0.377 | 0.412 | +0.035 | +9.3% |
| physics_d | 0.461 | 0.475 | +0.014 | +3.0% |
| rsa | 0.432 | 0.453 | +0.021 | +4.9% |
| rsa_d | 0.474 | 0.483 | +0.010 | +2.0% |
| sudoku | 0.409 | 0.434 | +0.025 | +6.2% |

### Mispredict Rate

| Benchmark | Commit-Time | Execute-Time | Change |
|---|---|---|---|
| compression | 0.224 | 0.217 | -0.006 |
| coremark_small | 0.359 | 0.357 | -0.001 |
| coremark | 0.369 | 0.368 | ~0 |
| dna | 0.178 | 0.170 | -0.008 |
| fft | 0.032 | 0.035 | +0.002 |
| graph | 0.001 | 0.001 | ~0 |
| mergesort | 0.311 | 0.306 | -0.005 |
| physics | 0.360 | 0.352 | -0.008 |
| physics_d | 0.428 | 0.424 | -0.005 |
| rsa | 0.072 | **0.059** | **-0.013** |
| rsa_d | 0.065 | 0.061 | -0.004 |
| sudoku | 0.135 | 0.139 | +0.004 |

---

## Geometric Mean IPC (excluding first_run, second_run)

| Predictor | Commit-Time | Execute-Time | % Gain |
|---|---|---|---|
| Always Not Taken | 0.351 | 0.390 | +11.1% |
| Always Taken + BTB | 0.389 | 0.413 | +6.2% |
| 2-bit Counter + BTB | 0.408 | 0.443 | +8.6% |
| TAGE + BTB | 0.427 | **0.448** | +4.9% |

---

## Analysis

### Execute-time recovery improves IPC on every benchmark, every predictor

Not a single regression across all 56 data points (14 benchmarks × 4 predictors). The minimum gain is ~0% (graph, which is near-perfectly predicted already) and the maximum is +18.3% (rsa with not-taken).

### Weaker predictors benefit more from execute-time recovery

The percentage IPC gain from execute-time recovery is inversely proportional to predictor quality:

| Predictor | Geomean IPC gain |
|---|---|
| Always Not Taken | +11.1% |
| 2-bit Counter + BTB | +8.6% |
| Always Taken + BTB | +6.2% |
| TAGE + BTB | +4.9% |

This is expected — a weaker predictor mispredicts more often, so there are more events where execute-time recovery saves cycles. A perfect predictor would gain nothing.

### Execute-time recovery on a weaker predictor can match commit-time recovery on a stronger one

| Configuration | Geomean IPC |
|---|---|
| Commit-time TAGE | 0.427 |
| Execute-time 2-bit | 0.443 |
| Execute-time TAGE | 0.448 |

Execute-time 2-bit (0.443) outperforms commit-time TAGE (0.427). The recovery scheme contributes meaningfully to IPC — it is not just a minor tuning on top of predictor quality.

### Mispredict rate effects from eliminating wrong-path training

Stateless predictors (always not taken) show perfectly identical mispredict rates. Stateful predictors can change. Three distinct patterns emerge:

**Wrong-path training was polluting state (removing it helps):**
- physics_d with 2-bit: mispredict drops from 51.6% → 40.5% (-11pp). Wrong-path branches were dirtying counter state. Execute-time recovery cleans this up, IPC improves +7.5%.
- sudoku with 2-bit: 15.5% → 12.1% (-3.3pp). Similar effect.
- rsa with TAGE: 7.2% → 5.9% (-1.3pp). TAGE is already accurate; cleaning wrong-path updates gives a modest further improvement.

**Wrong-path training was accidentally helping (removing it hurts):**
- sudoku with always-taken: mispredict jumps from 64.7% → 84.9% (+20pp). Under commit-time recovery, wrong-path branches were pre-warming BTB entries that sudoku happened to need. Without this, many BTB lookups miss or return incorrect targets. Despite the much worse mispredict rate, IPC still improves (+3.2%) because the shorter penalty per mispredict more than compensates.
- physics with always-taken: 57.7% → 64.3% (+6.6pp). Same effect, smaller scale.

**No meaningful change:**
- TAGE on most benchmarks changes by less than 1pp. TAGE's long history provides enough context that wrong-path training rarely makes a difference in either direction.

### graph and compression are insensitive to recovery scheme

graph achieves near-perfect prediction with taken+BTB (0.06% mispredict) — there is simply nothing for better recovery to improve. Execute-time recovery adds essentially 0%.

compression shows the smallest IPC gains across all predictors (0.4–1.8%) despite having a high mispredict rate with not-taken (75.8%). This suggests compression is bottlenecked by something other than branch penalty — likely memory latency or data-dependent load chains — leaving little room for branch recovery improvements to manifest.

### rsa is the most sensitive benchmark to both predictor and recovery scheme

| Configuration | IPC |
|---|---|
| Commit-time not-taken | 0.268 |
| Execute-time not-taken | 0.317 |
| Commit-time taken+BTB | 0.368 |
| Commit-time 2-bit | 0.308 |
| Execute-time taken+BTB | 0.404 |
| Execute-time 2-bit | 0.353 |
| Commit-time TAGE | 0.432 |
| Execute-time TAGE | **0.453** |

The spread from worst (0.268) to best (0.453) is 69%. RSA's data-dependent branch patterns (driven by key bits) benefit enormously from TAGE's long history, and the execute-time recovery further reduces the cost of the remaining 5.9% mispredict rate.
