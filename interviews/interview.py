"""
//startBalance = int(input())
//
//def subAccount(moneySpent,startBalance):
//    startBalance = startBalance
//    if(moneySpent > 0):
//        startBalance = startBalance + moneySpent
//        print(moneySpent)
//    if(moneySpent < 0):
//    startBalance = startBlance - moneySpent
//    print(moneySpent)
//    
//    return startBalance
"""
p1 = input()
class Account:
    def __init__(self,startAmount, moneySpent):
        self.startAmount = startAmount
        self.moneySpent = moneySpent
        if(moneySpent > 0):
            startAmount= startAmount+moneySpent
            print(moneySpent)
            
        if(moneySpent < 0):
            startAmount= startAmount-moneySpent
            print(moneySpent)
        
Account(p1)