def multiplyLists(myList):
    #multiply each element
    result = 1
    for x in myList:
        result = result * x
    return result

n = (str) (input()) #accepts input
n = n.split()   #splits str
n = [int (i) for i in n]    #created list for each number or split
anwser = multiplyLists(n)
print(anwser)