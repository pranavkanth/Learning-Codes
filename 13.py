# WAP to calculate the wages of a worker. Read the hours worked and hour wages of the worker. If the hours worked 
#are more than 40 hrs then the pay over time at 1.5 times the hourly wages on the extra hrs. 

hrs = int(input("Total number of worked by the worker = "))
wages = int(input("Enter wages per hours fixed = "))

if hrs <= 40:
    print("Total wages to be paid the worker = ", hrs * wages)
else:
    ext = hrs - 40
    wage = wages * 1.5
    print("Total wages to be paid the worker = ", 40 * wages + ext * wage)