line = input()
a,b = line.split()
a = int(a)
b = int(b)

def IsGreater( n1,  n2):
    temp = 0
    if (n1 > n2):
        temp = n1
        n1 = n2
        n2 = temp
    print(n1 , n2)

IsGreater(a,b)