
def solve():
    n = int(input())
    arr = list(map(int, input().split()))
    arr.sort()
    if(arr[0] != arr[1]):
        print("YES")
    else:
        for i in range(1,n):
            if(arr[i]%arr[0] != 0):
                print("YES")
                return
        print("NO")

for _ in range(int(input())):
    solve()