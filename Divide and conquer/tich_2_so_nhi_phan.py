t = int(input())
while t:
    t -= 1
    str = input()
    arr = str.split(' ')
    a = int(arr[0], 2)
    b = int(arr[1], 2)
    print(a*b)