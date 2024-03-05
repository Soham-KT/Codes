lst=[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
#get all items
print(lst[:])

#get all items after a speific position
print(lst[5:])

#get all items before a speific position
print(lst[:7])

#get all items between 2 positions
print(lst[2:7])

#get all items in intervals
print(lst[::3])

#get all items in an interval between 2 positions
print(lst[2:8:2])

#get items after a negative position
print(lst[-4:])

#get items before a negative position
print(lst[:-5])

#get items between 2 negative position
print(lst[-7:-2])

#get items in negative intervals
print(lst[::-2])

# get all items in intervals between 2 negative positions
print(lst[-7:-2:2])

# get all items in intervals between 2 negative positions with negative interval
print(lst[-2:-7:-2])