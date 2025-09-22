# CB 7th Loop Notes

foods = ["Chocolate", "Pasta", "Brownies", "Cookies", "Garlic Bread", "Wontons"]

# For Loop
for food in foods:
    #print(f"{food} is my favorite food!")
    print("Hi!")

    for x in range (1,21):
        print(x)

# While Loop
"""i = 0 
while True:
    print(i)
    i+=1"""
# Infinite Loop (one of the 3 steps missing)

# Correct while loop
i = 1

while i <= 20:
    print(i)
    i+= 1

x = 1

while x < 21:
    if x % 2 == 0:
        print(f"{x} is an even number.")
    else:
        print(f"{x} is an odd number.")
    x+= 1

import random

d = 1
end = random.randint(1,20)

"""while d != end:
    print("Duck")
    d+= 1

 print("Goose")"""

"""while True:
    if d == end:
        print("Goose!")
        break
    else:
        print("Duck!")
        d += 1"""


# What is a loop? 
    # A loop repeates the code inside them a specific number of times
# What are the two types of loops?
    # For Loop, While Loop
# What is iteration
    # Objects that can be iriated over 
# What are lists? 
    #  Items in a list maintain a specific order
# How do you make lists in python? 
    # Using Square Brackets and commas 
# How do you make for loops in python? 
    # Used to iterate over a sequence
# How do you make while loops in python?
    # used to repeatedly execute a block of code 