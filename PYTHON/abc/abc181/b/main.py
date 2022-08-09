
n = int(input())

ans = 0
for i in range(n):
    x, y = map(int, input().split())
    ans += y*(y+1)//2 - x*(x-1)//2

print(ans)
