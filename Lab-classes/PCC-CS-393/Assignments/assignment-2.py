Q1. Write a program to check whether a year is Leap Year or not.
 solution:- 

year=int(input("Enter year"))
if((year%400==0)or((year%100))and(year%4==0)):
  print("\nLeap year")
else:
  print("\nNot a leap year")
  
Q2. Write a program to check convert celcius to farenhite.
solution:-

c=int(input("Enter temperature in celcius"))
f=(c*9/5)+32
print("\nThe temperature in farhenite is",f)

Q3. Write a program to check whether a character is an Alphabet or digit or any other character.
solution:-

n=input("Please Enter Any Character : ")
 
if((n>='a' and n<='z') or (n>='A' and n<='Z')): 
    print("The Given Character ", n, "is an Alphabet") 
elif(n>='0' and n<='9'):
    print("The Given Character ", n, "is a Digit")
else:
    print("The Given Character ", n, "is a Special Character")
