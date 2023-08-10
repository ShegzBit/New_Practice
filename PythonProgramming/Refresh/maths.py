import math as mt
import random as rnd
import sys

num = int(input("Enter a number to get the squareroot: "))
print(f"squareroot of {num} = {int(mt.sqrt(num))}")

rand = rnd.randint(1, 10)
print(f"random number is {rand}")

print (sys.argv[0])
