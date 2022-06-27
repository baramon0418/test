s = input('문자열을 입력하시오: ')

a = 0
b = 0
c = 0

for letter in s:
    if letter.isalpha():
        a = a + 1
    elif letter.isdigit():
        b = b + 1
    elif letter.isspace():
        c = c + 1

print('알파벳 문자의 개수= ', a)
print('숫자 문자의 개수= ', b)
print('스페이스 문자의 개수= ', c)
