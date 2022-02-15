# This is to get the users input from one line
line = input()
a, b = line.split()
a = int(a)
b = int(b)

def addNum( num1, num2):
    sum = num1 + num2
    return print(sum)

addNum(a,b)