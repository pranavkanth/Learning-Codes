# A five-digit number is entered through the keyboard. Write the code to obtain the reversed number
# and determine whether it is a palindrome or not.
import math
a = int(input("Enter a number: "))

n = int(math.log10(a) + 1)
print("Nuber of digits in the given number: ", n)

b = a
s = 0
m = n

for i in range(0, n, 1):
    ld = b % 10
    s = s + ld
    b = b // 10  # b = b // 10

print("Sum of digits =", s)

y = 0
h = a
for p in range(n, 0, -1):
    x = h % 10
    y = y + x * 10 ** (p - 1)
    h = h // 10

print("Rverse Number = ", y)

if y == a:
    print(a, "is a Palindrome Number")
else:
    print(a, "is NOT a palindrome number")