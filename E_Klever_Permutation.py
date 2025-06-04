def solve():
    n, k = map(int, input().split())
    ans = [0]*n
    x , y = 1, n
    for i in range(k):
        for j in range(i, n, k):
            if(i&1):
                ans[j] = y
                y-=1
            else:
                ans[j] = x
                x+=1
    print(*ans)
    
for t in range(int(input())):
    solve()