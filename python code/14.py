# WAP to determine whether the given is one digit, two digit, three digit...

a = int(input("Enter a number : "))
c = 0

while a != 0:
    a = a // 10
    c = c + 1

print("Number of digtits = ", c)
