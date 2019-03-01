def factorial(number):
    if (number == 0):
        return 1
    else:
        return number * factorial(number - 1)

key = int(input())
print(factorial(key))