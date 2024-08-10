# WAP to accept two numbers from the user and a mathematical operator and perform the operation accordingly

while True:
    print("\n\nEnter your choice:\n1)Addition\n2)Subtraction\n3)Multiplication\n4)Division\n5)Exponentiation\n6)Exit\n")
    a = int(input("Your choice: "))
    if a == 6:
        print("Thank you, EXIT!!!!!")
        exit()
    elif not(1 <= a <= 6):
        print("Invalid choice, Please enter choice number from 1 to 6 only...")
        continue
    b = int(input("Enter 1st number: "))
    c = int(input("Enter 2nd number: "))
    if a == 1:
        print(b, "+", c, "=", c + b); break
    elif a == 2:
        print(b, "-", c, "=", b - c); break
    elif a == 3:
        print(b, "*", c, "=", b * c); break
    elif a == 4:
        print(b, "/", c, "=", b / c); break
    elif a == 5:
        print(b, "^", c, "=", b ** c); break
    # elif a == 6:
    #     print("Exit"); 
    #     break
    # print("Invalid Choice! , Please enter valid choice ")