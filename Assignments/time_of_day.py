# Cb 7th Time of Day

print("What is the hour in military time:")
hour = int(input())

if hour >= 18 or hour < 5:  
    print("Good Evening!")
elif hour >= 12:  
    print("Good Afternoon!")
else:  
    print("Good Morning!")
