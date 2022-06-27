import random

def makelist(size):
    A=[]
    for i in range(size):
        A.append(random.randint(1, 100))
    return A

def selection_sort(A):
    n = len(A)
    for i in range(n-1):
        min = i
        for j in range(i+1, n):
            if(A[j]<A[min]):
                min = j
        temp = A[i]
        A[i] = A[min]
        A[min] = temp
        print_step(A,i+1)

def print_step(A,s):
    print("step %2d :    " %s,end='')
    print(A)

A = makelist(15)
print("original  : ",A)

selection_sort(A)
print("selestion : ",A)
