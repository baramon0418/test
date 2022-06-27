#include <stdio.h>

int main(void)
{
    int max, i, num[10] = {0};

    printf("숫자 10개를 입력하시오:\n");
    
    max = num[0];
    

    for (i = 1; i < 10; i++) {
        printf("%d번째 수 ", i);
        scanf("%d", &num[i]);
        if (max < num[i]) { 
            max = num[i];
        }
        
    }

    printf("최댓값은 %d입니다.\n", max); 
    
    return 0;
}


