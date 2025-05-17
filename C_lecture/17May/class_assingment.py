

import math


# WAP to print the list of prime numbers between 100 to 500
def isPrime(num):
    dc = 0
    for i in range(2, num):
        if num % i == 0:
            dc += 1
            break

    if dc == 0:
        return True
    return False


for i in range(100, 500+1):
    if isPrime(i):
        print("prime : ", i)

# WAP to check is a number is armstrong number or not

num = 153
asm = 0
