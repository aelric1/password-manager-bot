import random 
import string
t=int(input("enter the genratations time : "))
s=int(input("enter the passwords chars : "))
chars=''.join(string.digits +string.ascii_letters+ "!@#$%")
for i in range(t):
    print(''.join(random.choices(chars,k=s)))