# CB 7th Conditionals Notes

# homework_done = input("Is your homework done?").strip().capitalize()

#if homework_done == "Yes":
   # print("Yes you can go!")
#else:
    #print("Then go do your homework!")

grade = 103

if grade >= 90 and not grade >100:
    if grade > 100:
            print("You cheated that isn't possible!")
    else:
      print(f"You have a {grade}% that is an A!")
elif grade> 79:
    print(f"You have a {grade}% that is a B")
else:
    print(f"You have a {grade}% that is below an:(")

    # logical operators and, or not

name = input("What is your name")

if name == "Ms LaRose":
        print("You are the teacher!")
elif name == "Tia" or name == "Ashley":
        print ("You are the TA")
else:
        print(f"Hello{name}, you are a student!")



#What puts something inside of the “if” statement?
    # Boolean Statement or Condition (Result is always true or false)
#What do if statements do?
    # Check if its true or false
#What are boolean statements? 
    # Its True or false named after a mathmatition 
#What do else statements do?
    # Ensures Exclusivity
#What kind of statement do you use if you have more than 2 needed outcomes?
     # Chain or if statement
#What do each of the different symbols mean in conditionals?

# < - Less Than

# > - Greater Than

# <= - Less than or equal to

# >= - Greater Than or equal to

# == - Are they equal

# ! - Not equal to

# What are the 3 logical operators?
    # and, or, not
# What are logical operators for?
    # To combine multiple Boolean (true/false) expressions
# What does a nested conditional statement do?
    # Only happens within another condition