print("Bismillahir Rahmanir Rahim")
print("welcome")
print('well')

number = 20000000000000 #is it a comment?

print(number)

one, two, three = '1', 'two', 3
print(one)
print(two)
print(three)

''''
Is that also a comment?
'''

string = 'I am string in python'

print(string)

print("Today I had {0} cups of {1}".format(3,"coffee"))

print('{:b}'.format(m))

f = lambda x: "Masum on lambda"

print(f(2))

#file reading
try:
    file = open('char.txt', 'r')
    print(file.read())
except ZeroDivisionError:
    print("Number is not equal to zero")
except IOError:
    print("File DNE")  

try:
    a = int(input("Enter your value: "))
except ValueError:
    print("Not an Int") 