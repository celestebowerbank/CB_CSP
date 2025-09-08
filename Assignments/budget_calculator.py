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
print("Total Expenses",utilities + rent + grocries + transportation)
print("Money left over",savings)