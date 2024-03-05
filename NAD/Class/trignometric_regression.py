import numpy as np
import matplotlib.pyplot as plt
import math
import itertools as ite
import mplcyberpunk as cbp

plt.style.use("cyberpunk")


def calc_var(y_cos_wx_sin_wx, y_sin_wx, sin_sq_wx_cos_wx, sin_sq_wx, sin_wx):
    a1 = (y_cos_wx_sin_wx - y_sin_wx) / (sin_sq_wx_cos_wx - sin_sq_wx)
    a2 = (y_sin_wx - (a1 * sin_sq_wx)) / sin_wx

    return a1, a2


def f(x, W, a1, a2):
    A = math.sqrt(a1 ** 2 + a2 ** 2)
    phi = math.atan(a2 / a1)
    return A * math.sin(W * x + phi)


if __name__ == '__main__':
    # --------------------------------------------------------- calculating the equation
    n = int(input("Enter number of coordinates: "))
    w = int(input("Enter value of omega: "))
    x_pts = [0 for i in range(n)]
    y_pts = [0 for j in range(n)]
    y_cos_x_sin_x = 0
    y_sin_x = 0
    sin_sq_x_cos_x = 0
    sin_sq_x = 0
    sin_x = 0
    coords = {}

    for i in range(n):
        x_pts[i], y_pts[i] = map(float, input(f"Enter x{i+1}, y{i+1}: ").split())
        coords[x_pts[i]] = y_pts[i]
        y_cos_x_sin_x += y_pts[i] * math.cos(w * x_pts[i]) * math.sin(w * x_pts[i])
        y_sin_x += y_pts[i] * math.sin(w * x_pts[i])
        sin_sq_x_cos_x += (math.sin(w * x_pts[i]) ** 2) * math.cos(w * x_pts[i])
        sin_sq_x += math.sin(w * x_pts[i]) ** 2
        sin_x = math.sin(w * x_pts[i])

    a_1, a_2 = calc_var(y_cos_x_sin_x, y_sin_x, sin_sq_x_cos_x, sin_sq_x, sin_x)

    # --------------------------------------------------------- plotting the equation
    x_lst = np.linspace(0, 2, num=1000)
    y_lst = list(map(f, x_lst, ite.repeat(w), ite.repeat(a_1), ite.repeat(a_2)))
    plt.scatter(x_pts, y_pts, color="C0")
    plt.plot(x_lst, y_lst, color="C4")
    x_pts = np.array(x_pts)
    error_y = list(map(f, x_pts, ite.repeat(w), ite.repeat(a_1), ite.repeat(a_2)))
    error_dict = {}
    for i in range(len(x_pts)):
        error_dict[x_pts[i]] = error_y[i]

    for i, j in error_dict.items():
        if abs(j - coords.get(i)) > 0.05:
            plt.plot((i, i), (j, coords.get(i)), color="C3")
            plt.scatter(i, j, color="C3")

    cbp.make_lines_glow()
    cbp.make_scatter_glow()
    cbp.add_underglow()
    plt.show()
