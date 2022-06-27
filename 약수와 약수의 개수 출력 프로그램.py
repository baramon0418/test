a=int(input("정수를 입력하세요 : "))
b=0

for i in range(1,a+1):
    if a%i==0:
        print(i,end=' ')
        b+=1
        
print(a, "의 약수의 개수 :", b)
