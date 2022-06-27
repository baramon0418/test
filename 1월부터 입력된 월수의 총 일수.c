#include <stdio.h>

int main(void)
{
    int month, total;

    printf("1월부터 몇 월까지의 총일을 구할까요?:");
    scanf("%d", &month);


    {
        switch (month) {
        case 1:
            (total = 31);
            printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total);
            break;

        case 2:
            (total = 28);
            printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total + 31);
            break;

        case 3:
            (total = 31);
                    printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total + 59);
                    break;
        case 4:
            (total = 30);
                    printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total + 90);
                break;
        case 5:
                (total = 31);
                    printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total + 120);
                break;
        case 6:
                (total = 30);
                    printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total + 151);
                break;
        case 7:
                (total = 31);
                    printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total + 181);
                break;
        case 8:
                (total = 31);
                    printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total + 212);
                break;
        case 9:
                (total = 30);
                    printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total + 243);
                break;
        case 10:
                (total = 31);
                    printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total + 273);
                break;
        case 11:
                (total = 30);
                    printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total + 304);
                break;
        case 12:
                (total = 31);
                    printf("1월부터 %d월까지는 총%d일이 있습니다.\n", month, total + 334);
                break;
        }
      
    }

    return 0;
}