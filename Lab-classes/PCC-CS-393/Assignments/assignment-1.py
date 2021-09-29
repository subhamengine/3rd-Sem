1. Write a python program to perform all arithmetic operation by taking two variables as Input.

soln:-
x = int(input("Enter the First Number:\n"))
y = eval(input("Enter the second Numder:\n"))
print("addition = ",x+y)
print("Substraction = ",x-y)
print("Multiplication = ",x*y)
print("Division = ",x/y)
print("Power = ",x**y)
print("Floor division = ",x//y)

2. Write a python program to input two variable and swap them without using 3rd  Variable

soln:-
x = int(input("Enter the first number:"))
y = int(input("Enter the second number"))
x,y = y,x
print("x = ",x , "y = ",y)

3. Write a python program to input time in seconds and convert to hour,minutes and seconds.

soln:-
sec = int(input("Enter total seconds:\n"))

hr = (sec//3600); 
m = (sec -(3600*hr))//60	
s = (sec -(3600*hr)-(m*60))

print("Hours = ",hr ,"Minute = ", m ,"Sec = ",s)

4. A company wants to set target for each of the four regions (EAST, WEST , NORTH and SOUTH). The company allots the following percentage target for each region.
East      15%
              West      25%
              North     30%
              South     30%
Write a program in python to input total target and print out the breakup of the target for each region.

soln:-
tar = int(input("Enter the total target"))
print("For east = ", (15*tar)/100,"\nFor West = ",(25*tar)/100,"\nFor North = ",(30*tar)/100,"\nFor south = ",(30*tar)/100)
