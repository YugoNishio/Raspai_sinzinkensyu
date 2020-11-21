a = 5
b = 10
c = 1
if a < b:
  x = a
  a = b
  b = x
if b < c:
  x = b
  b = c
  c = x
if c < a:
  x = c
  c = a
  a = x
print(a)
print(b)
print(c)

