#G reatest of three

a = int(input("Enter the first number:\n"))
b = int(input("Enter the second number:\n"))
c = int(input("Enter the third number:\n"))
if(a>b) and (b>c):
    print(a," is greatest.\n")
elif(b>a) and (a>c):
    print(b," is greatest.\n")
else:
    print(c," is greatest.\n")

# Odd Even

num = int(input("Enter the number:\n"))
if(num%2):
    print("Odd number!")
else:
    print("Even number!")

# positive negative zero

num = int(input("Enter the number:\n"))
if(num == 0):
    print("Its a Zero!")
elif(num > 0):
    print("It's a Positive number")
else:
    print("It's a Negative number")
