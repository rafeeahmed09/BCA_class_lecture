# WAP to print the list of prime numbers between 100 to 500
# def isPrime(num):
#     dc = 0
#     for i in range(2, num):
#         if num % i == 0:
#             dc += 1
#             break

#     if dc == 0:
#         return True
#     return False


# for i in range(100, 500+1):
#     if isPrime(i):
#         print("prime : ", i)

# WAP to check is a number is armstrong number or not

# import math

# num = 153
# numCP = num
# asm = 0

# length = len(str(num))

# for i in range(length):
#     ldPow = math.pow(numCP % 10, length)
#     numCP //= 10
#     asm += ldPow

# if num == int(asm):
#     print(int(asm), " Is armstrong")
# else:
#     pass
#     print(int(asm), " Is not armstrong")

# arr = [[None, None, None],
#        [None, None, None],
#        [None, None, None]]
# num = 1

# for i in range(3):
#     for j in range(3):
#         arr[i][j] = num
#         num += 1

# print(arr)
