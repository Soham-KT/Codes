import numpy as np
import matplotlib.pyplot as plt
import mplcyberpunk as cbp

plt.style.use("cyberpunk")


def compute_cost(x, y, w, b):
    m = x.shape[0]
    cost = 0
    for i in range(m):
        f_wb = w * x[i] + b
        cost = f_wb - y[i]
    cost = 1 / (2 * m) * cost

    return cost


def compute_gradient(x, y, w, b):
    m = x.shape[0]
    dj_db = 0
    dj_dw = 0

    for i in range(m):
        f_wb = w * x[i] + b
        dj_dw_temp = (f_wb - y[i]) * x[i]
        dj_db_temp = f_wb - y[i]
        dj_db += dj_db_temp
        dj_dw += dj_dw_temp

    dj_dw /= m
    dj_db /= m

    return dj_dw, dj_db


def gradient_descent(x, y, w_in, b_in, alpha, iter, grad_func):
    b = b_in
    w = w_in
    for i in range(iter):
        dj_dw, dj_db = grad_func(x, y, w, b)
        b = b - alpha * dj_db
        w = w - alpha * dj_dw

    return w, b


def f(x, w, b):
    return w * x + b


if __name__ == '__main__':
    print("Linear Regression with one variable:")
    m = int(input("Enter number of training examples: "))
    iters = int(input("Enter number of iterations: "))
    w, b = map(float, input("Enter initial W and B: ").split())
    alpha = float(input("Enter learning rate(alpha): "))

    x_examples = np.zeros(m)
    y_examples = np.zeros(m)
    coords = {}

    for i in range(m):
        x_examples[i], y_examples[i] = map(float, input(f"Enter x{i + 1}, y{i + 1}: ").split())
        coords[x_examples[i]] = y_examples[i]

    w_final, b_final = gradient_descent(x_examples, y_examples, w, b, alpha, iters, compute_gradient)

    x_lst = np.linspace(0, 10, num=1000)
    y_lst = f(x_lst, w_final, b_final)
    x_pts = np.array(x_examples)
    plt.scatter(x_pts, y_examples, color="C0")
    plt.plot(x_lst, y_lst, color="C4")
    error_y = f(x_pts, w_final, b_final)
    error_dict = {}
    for i in range(len(x_pts)):
        error_dict[x_pts[i]] = error_y[i]

    for i, j in error_dict.items():
        if abs(j - coords.get(i)) > 0.05:
            plt.plot((i, i), (j, coords.get(i)), color="C3")
            plt.scatter(i, j, color="C3")

    cbp.make_lines_glow()
    cbp.make_scatter_glow()
    plt.legend()

    plt.show()

