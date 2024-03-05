import math

if __name__ == "__main__":
    num = float(input("Enter floating point number: "))

    print(f"Float part of {num}: {math.modf(num)[0]}")
    print(f"Integer part of {num}: {math.modf(num)[1]}")
