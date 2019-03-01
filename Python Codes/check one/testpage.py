# age = input("How old are you: ")
# print(age)

print("How old are you: ")
age = input()
print(age)






k = input()
factorial(k)

def factorial(n):
    if n == 1:
        return 1
    else: 
        return n * factorial(n - 1)

