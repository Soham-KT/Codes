import math

if __name__ == "__main__":
    num = float(input("Enter floating point number: "))
    rnd = int(input("Enter the number of decimals you want to round up to: "))

    print(f"Rounded up value: {round(num, rnd)}")
    print(f"Ceiling value: {math.ceil(num)}")
    print(f"Floor value: {math.floor(num)}")
