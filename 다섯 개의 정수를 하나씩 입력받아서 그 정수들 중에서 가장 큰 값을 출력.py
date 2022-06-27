a=int(input("정수를 입력하세요 : "))
b=int(input("정수를 입력하세요 : "))
c=int(input("정수를 입력하세요 : "))
d=int(input("정수를 입력하세요 : "))
e=int(input("정수를 입력하세요 : "))

if a>b and a>c and a>d and a>e:
    print("가장 큰 값 : ",a)

if b>a and b>c and b>d and b>e:
    print("가장 큰 값 : ",b)

if c>a and c>b and c>d and c>e:
    print("가장 큰 값 : ",c)

if d>a and d>b and d>c and d>e:
    print("가장 큰 값 : ",d)

if e>a and e>b and e>c and e>d:
    print("가장 큰 값 : ",e)
