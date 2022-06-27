n = list()
for i in range(0,5):
    n.append(int(input('정수를 입력하시오 :')))

total = sum(n)
avg = total/5
big = max(n)
small = min(n)
print('입력한 성적들 =',n)
print('최고성적 =',big)
print('최저성적 =',small)
print('평균성적 =',avg)
