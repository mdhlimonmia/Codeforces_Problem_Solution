def solve():
    s = input()
    n = len(s)
    arr = [0]*(n+1)
    ans = 0
    for i in range(1, n):
        j = 0
        if(s[i] == s[i-1] and arr[i-1] == 0):
            j = 1
        if(i>1 and s[i] == s[i-2] and arr[i-2] == 0):
            j = 1
        arr[i] = j
        ans += j
    print(ans)


for _ in range(int(input())):
    solve()