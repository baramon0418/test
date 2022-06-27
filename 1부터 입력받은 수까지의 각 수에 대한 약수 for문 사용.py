a=int(input("숫자를 입력하세요 : "))
for i in range(1,a+1):
    print(i,'의 약수 :')
    for j in range(1,i+1):
        if i%j==0:
            print(j,end=' ')
    print()
