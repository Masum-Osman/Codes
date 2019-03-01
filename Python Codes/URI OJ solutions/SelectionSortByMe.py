import sys

A = [10,20,80,1,7,1,10]

for i in range(len(A)):
    minimum = i

    for j in range(i+1, len(A)):
        if(A[minimum] > A[j]):
            minimum = j
    
    A[i], A[minimum] = A[minimum], A[i]


print ("Sorted array")
for i in range(len(A)):
	print("%d" %A[i]), 