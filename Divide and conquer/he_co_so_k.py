def transfer(k, sum):
    ass = ""
    while sum > 0:
        ass = str(sum%k) + ass
        sum = sum // k
    return ass
    

t = int(input())
while t:
    t-=1
    string1 = input()
    arr = string1.split(' ')
    k = int(arr[0])
    a = int(arr[1], k)
    b = int(arr[2], k)
    print(transfer(k = k, sum = a+b))
