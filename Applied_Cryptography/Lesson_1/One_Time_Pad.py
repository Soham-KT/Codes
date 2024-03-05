import math

# ----------------------------------------------------------------The number of bits
no_of_bits = 16


def convert_to_bits(num):
    result = []
    while num > 0:
        if num % 2 == 0:
            result.insert(0, 0)
        else:
            result.insert(0, 1)
        num /= 2
        num = math.floor(num)
    while len(result) < no_of_bits:
        result.insert(0, 0)

    return result


def string_to_bits(text):
    result = []
    for word in text:
        result.append(convert_to_bits(ord(word)))

    return result


print(string_to_bits("CS"))
