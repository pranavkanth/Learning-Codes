# WAP to display "Hello" if a number entered by user is multiple of 5 otherwise print "Bye"

a = int(input("Enter a number: "))

if a % 5 == 0:
    print("Hello")
else:
    print("Bye")