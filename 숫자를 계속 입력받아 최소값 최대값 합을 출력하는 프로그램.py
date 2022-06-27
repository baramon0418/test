t = list()

while True:
    a = input("숫자를 입력하세요:")

        if a:
        a = int(a)
        t.append(a)
    else:
        break


print('최소값',min(t))
print('최대값',max(t))
print('합계',sum(t))
