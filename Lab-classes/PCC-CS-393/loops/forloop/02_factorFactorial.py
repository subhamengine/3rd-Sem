num = int(input("Enter the nmber.\n"))
f = 1
print("Factors :")
for i in range(1 , num+1):
    if(num%i) == 0:
        print(i)
print("Factorial:")
for j in range(1 , num+1):
    f = f*j;
print(f)
