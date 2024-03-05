import random

print("Rock Paper Scissors Game")
rps = ["rock", "paper", "scissors"]
p_w = 0
b_w = 0
count = 0
while count < 10:
    ch_b = random.choice(rps)
    p = input("Enter choice(r/p/s): ")
    if p == "r":
        if ch_b == "paper":
            print("You Loose, bot chose Paper")
            b_w += 1
        elif ch_b == "scissors":
            print("You Win, bot chose Scissors")
            p_w += 1
        else:
            print("Tie")

    elif p == "p":
        if ch_b == "scissors":
            print("You Loose, bot chose Scissors")
            b_w += 1
        elif ch_b == "rock":
            print("You Win, bot chose Rock")
            p_w += 1
        else:
            print("Tie")

    elif p == "s":
        if ch_b == "rock":
            print("You Loose, bot chose Rock")
            b_w += 1
        elif ch_b == "paper":
            print("You Win, bot chose Paper")
            p_w += 1
        else:
            print("Tie")

    else:
        print("Incorrect input")

    count += 1

if p_w > b_w:
    print("You won")
elif p_w < b_w:
    print("You loose")
else:
    print("It's a Tie")
