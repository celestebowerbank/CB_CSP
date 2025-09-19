# CB 7th Old Enough
# Vote 18
# Drive 16
# Get a learners permit 15
# Go to school 4

age_input = input("How old are you: ")
        age = int(age_input)

        if age >= 18:
            print("You are old enough to vote!")
        elif age >= 16:
            print("You are old enough to drive!")
        elif age >= 15:
            print("You are old enough to get a learners permit!")
        elif age >= 5:
            print("You are old enough to go to school!")
        else:
            print("You are not yet old enough for school.")
