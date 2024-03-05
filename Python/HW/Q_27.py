size=int(input("Enter size of square matrix: "))
mat1=[[0 for i in range(size)] for j in range(size)]
mat2=[[0 for i in range(size)] for j in range(size)]

print("Enter in matrix 1:")
for i in range(size):
    for j in range(size):
        mat1[i][j]=int(input(f"Enter in position ({i}, {j}): "))

for i in range(size):
    for j in range(size):
        mat2[i][j]=mat1[j][i]

print("Orignal:")
for i in range(size):
    for j in range(size):
        print(mat1[i][j], end=" ")
    print("\n")

print("Transpose:")
for i in range(size):
    for j in range(size):
        print(mat2[i][j], end=" ")
    print("\n")