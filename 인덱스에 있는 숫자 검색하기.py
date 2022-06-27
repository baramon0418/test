import random

def makeList(size):
    A = []
    for i in range(size):
        A.append(random.randint(1,100))
    return A

def sequentialSearch(A, key):
    size = len(A)
    for i in range(size):
        if(A[i]== key):
            return i
    return -1

result = makeList(15)
print(result)

key = int(input("\n검색할 키값을 입력하세요 : "))
index = sequentialSearch(result, key)

if(index==-1):
    print("검색실패")
else:
    print("인덱스 %d에서 값%d의 검색에 성공했습니다."%(index, result[index]))
