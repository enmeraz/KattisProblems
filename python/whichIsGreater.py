line = input()
a, b = line.split()
a = int(a)
b = int(b)

def IsGreater( n1,  n2):
    if (n1 > n2):
        return 1
    return 0

print(IsGreater(a,b))