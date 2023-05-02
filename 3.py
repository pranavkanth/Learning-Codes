# WAP to find the given number is divisible by 2 and 3 both

a = int(input("Enter a number:"))
if a % 2 == 0 and a % 3 == 0:
    print(a, "is divisible by both 2 and 3")
else:
    print(a, "is NOT divisible by 2 and 3")