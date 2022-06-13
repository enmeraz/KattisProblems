line = input()
base, height = line.split()
base = int(base)
height = int(height)


def printArea(b, h):
    area = b * h * 0.5
    return print(area)

printArea(base, height)