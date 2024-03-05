import random

if __name__ == "__main__":
    print("Counting number of heads and tails by flipping a coin 1000 times")
    input("Press enter to start.......")
    head_count = 0
    tail_count = 0
    for i in range(1000):
        coin = random.randint(0, 1)
        # 0 -> head, 1 -> tail
        if coin == 0:
            head_count += 1
        else:
            tail_count += 1

    print(f"No of times head occurred: {head_count}")
    print(f"No of times tail occurred: {tail_count}")
