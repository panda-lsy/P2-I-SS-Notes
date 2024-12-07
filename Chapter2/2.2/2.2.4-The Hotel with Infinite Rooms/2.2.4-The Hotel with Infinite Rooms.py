#超时
'''
while True:
    try:
        S,D=map(int,input().split())
        while D>0:
            if D-S<=0:
                D=0
            else:
                D-=S
                S+=1
        print(S)
    except:
        break
'''
#更优解
#https://blog.iddle.dev/public/2023/03/18/Python-UVa-10170-The-Hotel-with-Infinite-Rooms/
# UVa 10170 - The Hotel with Infinite Rooms
import math
def solve2(s, d):
    return int(math.ceil((-1 + ((1 - 4 * (-(s ** 2) + s - 2 * d))) ** 0.5) / 2))

while True:
    try:
        s, d = list(map(int, input().split()))
        print(solve2(s, d))
    except EOFError:
        break
# Accepted	PYTH3	0.130