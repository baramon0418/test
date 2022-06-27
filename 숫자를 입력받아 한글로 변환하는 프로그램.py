def f_han(num):
    if num =="0":
        char = "영"
    elif num =="1":
        char = "일"
    elif num =="2":
        char = "이"
    elif num =="3":
        char = "삼"
    elif num =="4":
        char = "사"
    elif num =="5":
        char = "오"
    elif num =="6":
        char = "육"
    elif num =="7":
        char = "칠"
    elif num =="8":
        char = "팔"
    elif num == "9":
        char = "구"
    else:
        char = ""

    return char
    
a = input("숫자를 입력하세요:")

for x in a:
    print(f_han(x), end=" ")
