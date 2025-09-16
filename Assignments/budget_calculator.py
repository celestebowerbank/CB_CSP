# CB 7th Budget Calculator

# make sure to have income,rent, utilites, grocries,transportation 
# It needs to figure out how much to put into savings 10% of income
#  (Utilities + rent + grocries + transportation + savings)
# rent/income*100
income = 1000
rent = 296
utilities = 174
grocries = 232
transportation = 60
savings = (1000 - (296+174+232+60))
rent_percent = (rent/income) * 100
utilities_percent = (utilities/income) * 100
groceries_percent = (grocries/income) * 100
transportation_percentsge = (transportation/income) * 100
savings = (income *.10)
leftover = income - ( rent + utilities + grocries + transportation + savings )

print("your rent is", rent)
print("The percentage of rent from your income is", rent_percent)
print("Your utilities bill is", utilities)
print("The percentage of your utility from your income is", utility_percent)
print("Your transportation is", transportation)
print("The percentage of your transportation from your income is", transportation_percent)
print("Your percentage of money leftover is:", leftover)
