import random

def makelist(size):
    A=[]
    for i in range(size):
        A.append(random.randint(1,100))
    return A

def insertion_sort(A):
    n=len(A)
    for i in range(1, n):
        key = A[i]
        j=i-1
        while j>=0 and A[j] > key:
            A[j+1]=A[j]
            j=j-1
        A[j+1] = key
        print_step(A,i+1)

def print_step(A,s):
    print("step %2d :    " %s,end='')
    print(A)
    
A=makelist(15)
print("original : ",A)

insertion_sort(A)
print("insertion : ",A)
