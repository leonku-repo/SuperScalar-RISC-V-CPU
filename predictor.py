import matplotlib.pyplot as plt

tests = [
    "first_run","second_run","compression","coremark_small","coremark",
    "dna","fft","graph","mergesort","physics","physics_d","rsa","rsa_d","sudoku"
]

# IPC
ipc_not_taken = [0.354167,0.333333,0.433879,0.309249,0.304864,
                 0.343917,0.379969,0.44229,0.365332,0.344536,
                 0.426298,0.268282,0.276394,0.371909]

ipc_taken_btb = [0.354167,0.333333,0.463477,0.339035,0.344066,
                 0.450444,0.418203,0.499922,0.34913,0.330561,
                 0.4551,0.36829,0.469556,0.261525]

ipc_2bit = [0.354167,0.333333,0.469998,0.373174,0.374584,
            0.437072,0.41362,0.499909,0.393811,0.376735,
            0.436545,0.307849,0.469442,0.382873]

ipc_tage = [0.354167,0.333333,0.470193,0.373593,0.372356,
            0.461328,0.418651,0.499909,0.399826,0.377242,
            0.461452,0.432331,0.47373,0.408661]

# Mispredict rate
mp_not_taken = [0.5,0.666667,0.757771,0.613257,0.648614,
                0.84282,0.984975,0.9998,0.469891,0.483835,
                0.706662,0.516436,0.957928,0.194369]

mp_taken_btb = [0.5,0.666667,0.326384,0.523412,0.500726,
                0.235896,0.0291823,0.00059988,0.658508,0.576582,
                0.546177,0.501484,0.0765576,0.647465]

mp_2bit = [0.5,0.666667,0.177028,0.301466,0.318993,
           0.159265,0.0320717,0.00079984,0.261785,0.311275,
           0.515897,0.165441,0.0768641,0.154651]

mp_tage = [0.5,0.666667,0.223654,0.358595,0.368733,
           0.178028,0.0323606,0.00079984,0.310606,0.360454,
           0.428085,0.0721795,0.0654456,0.135164]

# ---------------- IPC PLOT ----------------
plt.figure()
plt.plot(tests, ipc_not_taken, marker='o', label='Always Not Taken')
plt.plot(tests, ipc_taken_btb, marker='o', label='Always Taken + BTB')
plt.plot(tests, ipc_2bit,      marker='o', label='2-bit Counter + BTB')
plt.plot(tests, ipc_tage,      marker='o', label='TAGE + BTB')

plt.xticks(rotation=45)
plt.xlabel("Benchmark")
plt.ylabel("IPC")
plt.title("IPC Comparison")
plt.legend()
plt.tight_layout()
plt.savefig("ipc_comparison.png", dpi=150)

# ---------------- MISPREDICT PLOT ----------------
plt.figure()
plt.plot(tests, mp_not_taken, marker='o', label='Always Not Taken')
plt.plot(tests, mp_taken_btb, marker='o', label='Always Taken + BTB')
plt.plot(tests, mp_2bit,      marker='o', label='2-bit Counter + BTB')
plt.plot(tests, mp_tage,      marker='o', label='TAGE + BTB')

plt.xticks(rotation=45)
plt.xlabel("Benchmark")
plt.ylabel("Mispredict Rate")
plt.title("Mispredict Rate Comparison")
plt.legend()
plt.tight_layout()
plt.savefig("mp_comparison.png", dpi=150)
