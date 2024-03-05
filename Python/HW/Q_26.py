size=int(input("Enter size of square matrix: "))
mat1=[[0 for i in range(size)] for j in range(size)]
mat2=[[0 for i in range(size)] for j in range(size)]
mat3=[[0 for i in range(size)] for j in range(size)]

print("Enter in matrix 1:")
for i in range(size):
    for j in range(size):
        mat1[i][j]=int(input(f"Enter in position ({i}, {j}): "))

print("Enter in matrix 2:")
for i in range(size):
    for j in range(size):
        mat2[i][j]=int(input(f"Enter in position ({i}, {j}): "))

for i in range(size):
    for j in range(size):
        for k in range(size):
            mat3[i][j]+=mat1[i][k]*mat2[k][j]

print("Product:")
for i in range(size):
    for j in range(size):
        print(mat3[i][j], end=" ")
    print("\n")