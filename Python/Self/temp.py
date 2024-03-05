time_taken = [0.9370937347412109, 0.921001672744751, 0.9083609580993652, 0.951045036315918, 1.0541532039642334, 2.3506035804748535]

for i in range(len(time_taken)):
    time_taken[i] = round(time_taken[i], 5)

heat_generated = [63.125, 65.0, 65.125, 65.75, 66.5, 67.25]
acc_lst = [1, 10, 100, 1000, 10000, 100000]

for (xi, yi, tt) in zip(acc_lst, heat_generated, time_taken):
    print((xi, yi), tt)