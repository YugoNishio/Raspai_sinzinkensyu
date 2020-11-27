print("input----->")
f = int(input())
x = 0
ans = 0
for i in range(0,f,1):
  x += 1
  if x%3==0 and x%5==0:
    print("FizzBuzz,")
  if x%3==0 and x%5!=0:
    print("Fizz,")
  if x%5==0 and x%3!=0:
    print("Buss,")
  if x%3!=0 and x%5!=0:
    ans = ans + x
    print(x)
print("Total----->")
print(ans)
#print(x)
