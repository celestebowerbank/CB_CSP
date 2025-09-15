# CB 7th Function Notes

def welcome():
    name = input("What is your name?:")
    print(f"hello, {name}!")


print("This is not in my function")
#welcome()
#welcome()
#welcome()
#welcome()

def add(number, number_two):
    number+= number_two
    print(number)

num_one = 12
num_two = 4

#add(80, 8)
#add(3, 6)
#add(9, 20)
#add(11, 71)
#add(num_one, num_two)


import random

def roll(mod):
    return random.randint(2,18) + mod


strength = roll(0)
dexterity = roll(1)
intellegence = roll(1)
charisma = roll(0)
print("Here are your stats!")
print(f"Strength: {strength}\nDex: {dexterity}\nInt: {intellegence}\nChar: {charisma}")
# What is a function is
    # a prebuilt set of code
# Why do we use functions
    # So we don't have to repeat things over and over again
#How to write a function in Python
    # Use the def keyword, followed by the function name, parentheses (), and a colon :. The parentheses can optionally contain parameters.
#What are parameters and arguments 
    # Parameters are the variables defined in a function's declaration or definition.
#How to use parameters and arguments in python
    # Defining a Function with Parameters: Calling a Function with Arguments: 
#What are return statements
    #is used within a function to send a value (or object) back to the part of the code that called the function.
#How to use return statements in a program
    #In Python, the return statement is used within a function to send a value back to the part of the code that called the function. It also immediately terminates the function's execution. 