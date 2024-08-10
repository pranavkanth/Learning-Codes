# WAP to check whether the number entered positive and negative 

a = int(input("Enter a number: "))
if a > 0:
    print(a, "is a positive number.")
elif a < 0:
    print(a, "is negative number.")
else:
    print(a, "is zero.")