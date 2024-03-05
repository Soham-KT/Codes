import multiprocessing as mp
import time

result_a = []


def calc_a(numbers):
    for nums in numbers:
        result_a.append(nums ** 3)


if __name__ == "__main__":
    numbers = list(range(100000000))
    p1 = mp.Process(target=calc_a, args=(numbers,))

    start = time.time()
    p1.start()
    end = time.time()
    print(result_a)
    print(f"Time taken with multiprossesing: {end - start}")
