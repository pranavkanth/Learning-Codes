# WAP to accept three sides of a triangle and check whether it is an equiliteral, isosceles or scalene triangle.print

a = int(input("Enter 1st side of the triangle: ")) 
b = int(input("Enter 2nd side of the triangle: "))
c = int(input("Enter 3rd side of the triangle: "))

if not (a + b > c and a + c > b and b + c > a):
    print("These sides do NOT make a triangle")
    exit()

if a == b == c:
    print("Equilateral Triangle")
elif a == b or b  == c or a == c:
    print("Isosceles Triangle")
else:
    print("Scalene Triangle")