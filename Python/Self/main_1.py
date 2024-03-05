"""mera naam jadu"""


def print_this_str(string):
    print(f"The string is: {string}")


def add(num1, num2):
    print(f"The addition is: {num1 + num2}")


# without __main__
# print_this_str("Hello everybody")
# add(1, 2)


if __name__ == '__main__':
    print_this_str("Hello everybody")
    add(1, 2)
