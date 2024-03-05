import multiprocessing as mp
from math import *
import time


class integration:
    i = 1

    def __init__(self):
        self.func = input("Enter function: ")
        self.acc = int(input("Enter accuracy: "))
        self.a = float(input("Enter lower limit: "))
        self.b = float(input("Enter upper limit: "))

        self.h = (self.b - self.a) / (self.acc * 6)
        self.tables_x = []
        self.tables_y = []

    def y_vals(self, arg):
        x = self.a + arg / (self.acc * 6.0)
        return eval(self.func)

    def add(self, arg):
        if integration.i % 2 == 0 and integration.i % 3 != 0:
            integration.i += 1
            return arg

        if integration.i % 2 != 0 and integration.i % 3 != 0:
            integration.i += 1
            return 5 * arg

        elif integration.i % 6 == 0:
            integration.i += 1
            return 2 * arg

        elif integration.i % 3 == 0 and integration.i % 2 != 0:
            integration.i += 1
            return 6 * arg


if __name__ == "__main__":
    inte = integration()
    lst = [i for i in range(inte.acc * 6 + 1)]

    start = time.time()
    pool = mp.Pool(5)
    inte.tables_y = pool.map(inte.y_vals, lst)
    print(inte.tables_y)
    first_ele = inte.tables_y[0]
    last_ele = inte.tables_y[-1]
    inte.tables_y.pop(0)
    inte.tables_y.pop(-1)
    final_lst = pool.map(inte.add, inte.tables_y)
    Integration = 0.3 * inte.h * (first_ele + last_ele + sum(final_lst))

    pool.close()
    pool.join()
    end = time.time()

    print(f"The integration is: {Integration}")
    print(f"Time taken with multiprocessing: {end - start}")
