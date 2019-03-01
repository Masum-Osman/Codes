try:
    file = open('written.txt', 'w+')
    file.write("Bismillahir Rahmanir Rahim")
    file.seek(0)
    print(file.read())
except ZeroDivisionError:
    print("Number is not equal to zero")
except IOError:
    print("File DNE") 