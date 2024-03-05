import numpy as np
import matplotlib.pyplot as plt
import mplcyberpunk as cbp

plt.style.use("cyberpunk")


def calc_var(x, y, x_y, x_sq):
    a = ((n * x_y) - (x * y)) / ((n * x_sq) - (x ** 2))
    b = ((y * x_sq) - (x * x_y)) / ((n * x_sq) - (x ** 2))

    return a, b


def f(x, a, b):
    return a * x + b


if __name__ == '__main__':
    # --------------------------------------------------------- calculating the equation
    n = int(input("Enter number of coordinates: "))
    x_pts = [0 for i in range(n)]
    y_pts = [0 for j in range(n)]
    x_2 = 0
    xy = 0
    sum_x = 0
    sum_y = 0
    coords = {}
    for i in range(n):
        x_pts[i], y_pts[i] = map(float, input(f"Enter x{i + 1}, y{i + 1}: ").split())
        coords[x_pts[i]] = y_pts[i]
        sum_x += x_pts[i]
        sum_y += y_pts[i]
        xy += x_pts[i] * y_pts[i]
        x_2 += x_pts[i] ** 2

    a_1, a_0 = calc_var(sum_x, sum_y, xy, x_2)
    print(a_1, a_0)
    print(f"f(1.22540333) = {f(1.22540333, a_1, a_0)}")
    print(f"f(2.77459667) = {f(2.77459667, a_1, a_0)}")

    # --------------------------------------------------------- plotting the equation
    # x_lst = np.linspace(0, 10, num=1000)
    # y_lst = f(x_lst, a_1, a_0)
    # x_pts = np.array(x_pts)
    # plt.scatter(x_pts, y_pts, color="C0")
    # plt.plot(x_lst, y_lst, color="C4")
    # error_y = f(x_pts, a_1, a_0)
    # error_dict = {}
    # for i in range(len(x_pts)):
    #     error_dict[x_pts[i]] = error_y[i]
    #
    # for i, j in error_dict.items():
    #     if abs(j - coords.get(i)) > 0.05:
    #         plt.plot((i, i), (j, coords.get(i)), color="C3")
    #         plt.scatter(i, j, color="C3")
    #
    # cbp.make_lines_glow()
    # cbp.make_scatter_glow()

    plt.show()
