data = input().split()
x = int(data[0])
y = int(data[1])
limit = int(data[2])

for value in range(1,limit+1):
    output = ""
    if value % x == 0:
        output += "Fizz"
    if value % y == 0:
        output += "Buzz"
    if output == "":
        print(value)
    else:
        print(output)