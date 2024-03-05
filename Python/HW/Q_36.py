set_1 = {1, 2, 3, 4, 5, "A", "B", "C"}
set_2 = {1, 2, 5, 6, 7, "A", "B", "D"}

print(f"Union: {set_1.union(set_2)}")
print(f"Intersection: {set_1.intersection(set_2)}")
print(f"Difference: {set_1 - set_2}")
print(f"Symmetric difference: {set_1.symmetric_difference(set_2)}")
