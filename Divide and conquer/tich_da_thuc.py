t = int(input())

for i in range(t):
    m, n = map(int, input().split())

    p = list(map(int, input().split()))
    q = list(map(int, input().split()))

    for i in range(len(p) + len(q) - 1):
        ans = 0
        for j in range(i+1):
            if(j < len(p) and (i-j) < len(q)):
                ans += p[j] * q[i-j]
        print(ans, end=' ')
    print('\n')