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
transportation_percentsge = (trasportation/income) * 100
savings = (income *.10)
leftover = income - ( rent + utilities + grocries + transportation + savings )

print()
