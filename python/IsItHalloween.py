import string

# This is to get the users input from one line
line = input()
month, day = line.split()

if (month == "OCT" and day == "31") or (month == "DEC" and day == "25"):
    print("yup")
else:
    print("nope")

