def add(a,b):
    n=a+b
    return n
    
sum_i = 0
while True:
    n = input("숫자를 입력하세요:")

    if n.isdigit():
        i=int(n)
        sum_i = add(sum_i, i)
    else:
        break

print("총 합은 ", sum_i)
