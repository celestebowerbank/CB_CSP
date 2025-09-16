# CB 7th Update Calculator

# Function to get user input
def get_user_inputs():
    income = float(input("What is your monthly income: "))
    rent = float(input("What is your monthly rent/mortgage: "))
    utilities = float(input("What is your monthly utilities: "))
    groceries = float(input("What is your monthly groceries: "))
    transportation = float(input("What is your monthly transportation: "))
    
    # Return all the numbers
    return income, rent, utilities, groceries, transportation

# Function to calculate percentages and show results
def calculate_percentages(income, rent, utilities, groceries, transportation):
    # Calculate percent of income for each expense
    rent_percent = (rent / income) * 100
    utilities_percent = (utilities / income) * 100
    groceries_percent = (groceries / income) * 100
    transportation_percent = (transportation / income) * 100

    # Calculate savings (10% of income)
    savings = income * 0.10
    savings_percent = 10

    # Calculate remaining money
    total_expenses = rent + utilities + groceries + transportation + savings
    leftover_money = income - total_expenses

    # Show the results
    print("")
    print("Your rent is $" + str(rent) + " and that is " + str(round(rent_percent)) + "% of your income.")
    print("Your utilities are $" + str(utilities) + " and that is " + str(round(utilities_percent)) + "% of your income.")
    print("Your groceries are $" + str(groceries) + " and that is " + str(round(groceries_percent)) + "% of your income.")
    print("Your transportation is $" + str(transportation) + " and that is " + str(round(transportation_percent)) + "% of your income.")
    print("")
    print("You should save $" + str(round(savings, 2)) + " a month, that is " + str(savings_percent) + "% of your income.")
