# for i in range(len(string)):
#     print(string[i])

# for i in range(len(string)):
#     print(string[i])

# for char in string:
#     print(char)

for i in range (3):
    for j in range(2):
        print("*")
print("\n")

'''
n = 10
for i in range(0,n,1):
    print(i)
'''

fruits = ["apple", "banana", "cherry"]
for x in fruits:
  if x == "banana":
    continue
  print(x)

def tri_recursion(k):
  if(k>0):
    result = k+tri_recursion(k-1)
    print(result)
  else:
    result = 0
  return result

print("\n\nRecursion Example Results")
tri_recursion(6)

condition = 10
param = 1
while condition > 0:
        print(condition)
        condition = condition - 1