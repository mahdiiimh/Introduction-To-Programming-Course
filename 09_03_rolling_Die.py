
import random
import time

# Rolling a six-sided die 60,000,000 times.
NUM_ROLLS = 60_000_000

frequency1 = 0
frequency2 = 0
frequency3 = 0
frequency4 = 0
frequency5 = 0
frequency6 = 0

start_time = time.perf_counter()

for roll in range(NUM_ROLLS):
    face = random.randint(1, 6)

    if face == 1:
        frequency1 += 1
    elif face == 2:
        frequency2 += 1
    elif face == 3:
        frequency3 += 1
    elif face == 4:
        frequency4 += 1
    elif face == 5:
        frequency5 += 1
    elif face == 6:
        frequency6 += 1

end_time = time.perf_counter()

print(f"{'Face':>4} {'Frequency':>13}")
print(f"{1:>4} {frequency1:>13}")
print(f"{2:>4} {frequency2:>13}")
print(f"{3:>4} {frequency3:>13}")
print(f"{4:>4} {frequency4:>13}")
print(f"{5:>4} {frequency5:>13}")
print(f"{6:>4} {frequency6:>13}")

elapsed = end_time - start_time
print(f"\nExecution time: {elapsed:.3f} seconds")
print(f"Execution time: {elapsed / 60:.2f} minutes")
