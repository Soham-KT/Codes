plus = lambda a, b: a + b


def a_k(val):
    return val[1]


print("1+2=", plus(1, 2))

a = [[1, 14], [5, 6], [8, 23]]
a.sort(key=a_k)
print(a)

# or

a = [[1, 14], [5, 6], [8, 23]]
a.sort(key=lambda x: x[1])
print(a)
