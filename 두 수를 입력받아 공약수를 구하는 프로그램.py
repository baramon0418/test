a=int(input("첫번째 숫자를 입력하세요 : "))
b=int(input("두번째 숫자를 입력하세요 : "))
for i in range(1,a+b):
    if a%i==0 and b%i==0:
        print(i, end='  ')
