
mojia,mojib = map(str,input().split())
kosu = list(map(int,input().split()))

col = str(input())

if col == mojia:
	kosu[0] -= 1
elif col == mojib:
	kosu[1] -= 1
print(*kosu)