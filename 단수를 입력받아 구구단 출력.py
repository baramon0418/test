def f_gugu(d):
    result = list()
    for i in range(1,10):
        result.append("%d x %d = %2d" %(d, i, d*i))
        
    return result

a = int(input("단수를 입력하세요:"))

for i in f_gugu(a):
    print(i)
