print("input----->")
x = int(input())
f = x
n = 0
for i in range(0,x,1):
  n = n + 1
  u = f % n
  if u==0:
    print(n)
