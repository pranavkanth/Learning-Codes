# WAP to check whether the last digit of a number is divisible by 3 or not.

a = int(input("Enter a number: "))

ld = a % 10

if ld % 3 == 0:
    print("Last digit of the number is divisible by 3 ")
else:
    print("Last digit of the number is NOT divisible by 3")