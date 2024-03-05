import numpy as np

if __name__ == "__main__":
    std_id = list(map(str, input("Enter student IDs: ").split()))
    height = []
    for i in range(len(std_id)):
        feet, inch = map(int, input(f"Enter height in format 'feet inches' for student {i+1}: ").split())
        height.append(((feet * 12) + inch) * 2.54)

    sorted_lst = np.lexsort((std_id, height))
    for std, ind in zip(std_id, sorted_lst):
        print(f"{std}: {ind+1}")
