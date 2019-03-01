A = list()
num = input("Enter how many elements you want:")
print('Enter numbers in array: ')
for i in range(int(num)):
    n = input("num :")
    A.append(int(n))
print( 'ARRAY: ',A)

for i in range(len(A)):
    minimum = i

    for j in range(i+1, len(A)):
        if(A[minimum] > A[j]):
            minimum = j
    
    A[i], A[minimum] = A[minimum], A[i]


print ("Sorted array")
for i in range(len(A)):
	print("%d" %A[i]), 