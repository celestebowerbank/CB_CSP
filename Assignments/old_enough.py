# CB 7th Old Enough
# Vote 18
# Drive 16
# Get a learners permit 15
# Go to school 4

age = input("How old are you?\n")

if age>=4 and not age<15:
        print("You can go to school!")
elif age>=16:
        print ("You can drive")
if age>=18:
    print(f"You can vote!")
elif age==15:
        print ("You can get a learners permit!")