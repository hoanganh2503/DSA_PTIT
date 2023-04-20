a = []
a.append(1)
a.append(1)
for i in range (2, 101) :
    top = 0
    for j in range(0, i):
        top += a[j]*a[i-j-1]
    a.append(top)

t = int(input())
while t:
    t -= 1
    n = int(input())
    print(a[n], "\n")