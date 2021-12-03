"""
Kattis problem - Yin and Yang stones
"""
x = input()
w = x.count("W")
b = x.count("B")

if w ==b:
    print("1")
else:
    print("0")