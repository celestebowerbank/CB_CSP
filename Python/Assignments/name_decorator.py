 # CB 7th Name Decorator

def format_name_with_brackets():
  """
  Asks the user for their name and then prints it with "<<<< >>>>" on both sides.
  """
  user_name = input("Please enter your name: ")
  formatted_name = f"<<<< {user_name} >>>>"
  print(formatted_name)

# Call the function to run the program
format_name_with_brackets()