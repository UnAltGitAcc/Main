'''
#4
strange = [[],1]
print(type(strange))

#5
for x in range(0, 2):
    for y in range(0, 2):

        res = ( (x or y) and ((not x) or y) and (not (x and y)) )

        if (res):
            print(x, y)

#01

#6
ar = [i for i in range(1, 10)]
for i in range(len(ar)-1, -1, -1):
    print(ar[i])

#7
import math

def hartleyFunc(num):
    return math.log2(num)

print(hartleyFunc(int(input())))

#8
import math

def entropy(a, b):
    return -a * math.log2(a) -b * math.log2(b)

a, b = map(float, str(input()).split())
print(entropy(a, b))

#9
import math

def calc(a):
    b = math.cos(a)*math.sin(2*a)/(a * math.exp(a))
    return (math.tan(b))**math.log(a, 7)

print(calc(float(input())))

#10
def newB(b: list):
    if (b.count(1) % 2 == 0):
        b.append(0)
        return
    b.append(1)

b = [1, 0, 1, 0, 1, 0, 1, 0]
newB(b)

print(b)
'''