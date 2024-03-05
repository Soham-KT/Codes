import numpy as np

if __name__ == "__main__":
    row = int(input("Enter number of rows: "))
    col = int(input("Enter number of cols: "))

    mat = np.zeros((row, col))

    for i in range(row):
        for j in range(col):
            mat[i][j] = int(input(f"Enter in cell ({i+1}, {j+1}): "))

    print("Normal Matrix:")
    print(mat)

    inv_mat = np.linalg.inv(mat)

    print("Inverse Matrix:")
    print(inv_mat)
