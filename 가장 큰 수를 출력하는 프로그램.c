#include <stdio.h>

int main(void)
{
    int max, i, num[10] = {0};

    printf("���� 10���� �Է��Ͻÿ�:\n");
    
    max = num[0];
    

    for (i = 1; i < 10; i++) {
        printf("%d��° �� ", i);
        scanf("%d", &num[i]);
        if (max < num[i]) { 
            max = num[i];
        }
        
    }

    printf("�ִ��� %d�Դϴ�.\n", max); 
    
    return 0;
}


