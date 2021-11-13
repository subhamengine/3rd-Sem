import math

a = float(input("Enter a number:\n"))
flag = False;
if(a<=1):
    flag = True;
s = math.sqrt(abs(a))
    
for i in range(2 , int(s)):
        if(a%i==0 ) and (flag==False):
                flag = True
                break
if(flag):
    print("Not prime\n")
elif(flag == False):
    print("Prime\n")
