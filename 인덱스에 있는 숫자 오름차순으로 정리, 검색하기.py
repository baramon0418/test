import random

def makelist(size):
    A=[]
    for i in range(size):
        A.append(random.randint(1,100))
    return A

def recur_b_search(A,key,low,high):
    if(low<=high):
        middle = (low+high)//2
        if(key == A[middle]):
            return middle
        elif(key>A[middle]):
            recur_b_search(A,key,middle+1,high)
        else:
            recur_b_search(A,key,low,middle-1)

def binary_search(A, key):
    low=0
    high=len(A)-1
    count = 0
    while(low<=high):
        middle = (low+high)//2
        if(key == A[middle]):
            return middle
        elif(key>A[middle]):
            low = middle+1
        else:
            high = middle-1            
    return -1

            

result = makelist(30)
result = list(set(result))
print(result)

key = int(input("\n검색할 key값 입력 : "))
index = binary_search(result, key)
count =+ 1
if(index == -1):
    print("탐색실패")
else:
    print("%d위치에서 %d값을 찾았습니다."%(index, result[index]))
    print("%d번 탐색하였습니다." %count)
