def solve():
    n, m = map(int, input().split())
    s = input()
    v = list(map(int, input().split()))
    ans = [0]*26
    v.sort(reverse=True)
    x = 0
    for i in range(0, m-1, 1):
        x +=1
        for j in range(v[i], v[i+1], -1):
            c = ord(s[j-1]) - ord('a')
            ans[c] += x
            
    x+=1
    for i in range(v[m-1],0, -1):
        c = ord(s[i-1]) -  ord('a')
        ans[c] +=x
    for i in range(n):
        c = ord(s[i]) -  ord('a')
        ans[c] += 1
    print(*ans)

for i in range(int(input())):
    solve()