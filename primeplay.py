import random
from math import sqrt

def primecheck(n):
    if n<1:
        return False 
    check=True 
    for i in range(2,int(sqrt(n))+1):
        if n%i==0:
            check=False 
            break 
    return check 

score=0
greets=["GG!","Good Going!","Superb!","Is that all?"]
life=3
print("Try to enter as many prime numbers as many possible, else you loose.. Good Luck :)")
while life:
    a=int(input("Enter a integer: "))
    if primecheck(a):
        score+=1
        print(greets[random.randint(0,len(greets))])
    else:
        life-=1
        print("Oops! Remaining life :", life)

print("Well played! You score was :",score)