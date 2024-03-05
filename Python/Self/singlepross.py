import multiprocessing as mp
import time

result_a = []

def calc_a(numbers):
    for nums in numbers:
        result_a.append(nums**3)

if __name__ == "__main__":
    numbers = list(range(100000000))
    start = time.time()
    calc_a(numbers)
    end = time.time()
    print(f"Time taken without multiprossesing: {end-start}")