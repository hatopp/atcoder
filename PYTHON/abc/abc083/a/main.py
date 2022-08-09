
a=[int(i) for i in input().split()]

left = a[0]+a[1]
right = a[2]+a[3]
if left<right:
	print("Right")
elif left==right:
	print("Balanced")
else:
	print("Left")
