import random

def makelist(size):
    A=[]
    for i in range(size):
        A.append(random.randint(1,100))
    return A


def bubble_sort(A):
    n = len(A)
    for i in range(n-1, 0, -1):
        flag = False
        for j in range(i):
            if (A[j]>A[j+1]):
                temp = A[j]
                A[j] = A[j+1]
                A[j+1]=temp
                flag = True
        if(flag==False):
            break
        print_step(A,n-i)


def print_step(A,s):
    print("step %2d :" %s,end='')
    print(A)
            
A = list(set(makelist(15)))

print("Original :", A)

bubble_sort(A)
print("Bubble :",A)
