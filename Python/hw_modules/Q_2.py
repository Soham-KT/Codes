import random

if __name__ == "__main__":
    n = int(input("Enter number of output you want: "))
    lower_bound = int(input("Enter lower bound: "))
    upper_bound = int(input("Enter upper bound: "))

    random_nums = random.sample(range(lower_bound, upper_bound), n)

    print(f"Distinct random numbers in range ({lower_bound}, {upper_bound}): {random_nums}")
