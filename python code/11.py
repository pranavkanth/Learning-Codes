# Accept the marks of English, Math and Science, Social Studies and display the stream allotted according to the following:
# All Subjects more than 80 marks				Science Stream
# English > 80 and Math, Science above  50		Commerce
# English > 80 and Social Studies > 80			Humanities

e = int(input("Enter English marks: "))
m = int(input("Enter Maths marks: "))
s = int(input("Enter Science marks: "))
sst = int(input("Enter Social Science marks: "))

if e > 80 and m > 80 and s > 80 and sst > 80:
    print("You can purse Science Stream")
elif e > 80 and m > 50 and s > 50:
    print("You can purse Commerce Stream")
elif e > 80 and sst > 80:
    print("You can purse Humanities Stream")
else:
    print("You can NOT purse any stream")