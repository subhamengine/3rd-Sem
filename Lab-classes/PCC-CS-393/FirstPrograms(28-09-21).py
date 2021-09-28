//opeartor

x = int(input("Enter the First Number:\n"))
y = eval(input("Enter the second Numder:\n"))
print("addition = ",x+y)
print("Substraction = ",x-y)
print("Multiplication = ",x*y)
print("Division = ",x/y)
print("Power = ",x**y)
print("Floor division = ",x//y)

//HourMinSec conversion

sec = int(input("Enter total seconds:\n"))

hr = (sec//3600); 
m = (sec -(3600*hr))//60	
s = (sec -(3600*hr)-(m*60))

print("Hours = ",hr ,"Minute = ", m ,"Sec = ",s)

//Target

tar = int(input("Enter the total target"))
print("For east = ", (15*tar)/100,"\nFor West = ",(25*tar)/100,"\nFor North = ",(30*tar)/100,"\nFor south = ",(30*tar)/100)

//swap

x = int(input("Enter the first number:"))
y = int(input("Enter the second number"))
x,y = y,x
print("x = ",x , "y = ",y)
