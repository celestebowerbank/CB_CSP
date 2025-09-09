# CB 7th String Notes

print("I did it!")

# What makes something a string?
# A set of symbols held together by "" or '' (have to be the same throughout the code)
#Examples
first_name = input("What is your first name?:\n").strip().title()

last_name = input("What is your last name?:\n").strip().title()

full_name = first_name + " "+ last_name

sentence = '          The quick brown fox jumps over the lazy dog    ' 
print (sentence.strip())

print("Welcome to my program", full_name + "!")

# Sanitization and stupid proofing
# Why do we have strings?
# because it strings the code together
# How do stupid proofing and sanitization relate to each other?
# Both error proof the code
# What is debugging?
# Resolving issues/ fixing code
# How do you debug the different types of errors?
    # Syntax Error - 
# error = ("This is a bug")
    # Logic Error
numOne = "1"
numTwo = "2"

print(numOne+numTwo)

    #Run-Time Error
# num = 3
# print("my favorite number is"+num)
#  find()-
print(sentence.find("jumps"))
print(sentence[20:25])
print(sentence[sentence.find("lazy"): len("lazy")+ sentence.find("lazy")])