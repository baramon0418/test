#include<stdio.h>

int prime(int);

int main() {
    int num; 
    int i, n;
    int check = 0; 
    printf("양의 정수를 입력하시오 : ");
    scanf("%d", &num);
    for (i = 2; i <= num / 2; i++) {
        if (prime(i) != 0) {
            n = prime(i);
            if (prime(num - n) != 0) {
                check = 1;
                printf("%d = %d + %d\n", num, n, (num - n));
            }
        }
    }
}


int prime(int num)
{
    int i;
    for (i = 2; i <= num; i++) {
        if (num % i == 0) {
            if (num == i) return num;
            if (num != i) return 0;
        }
    }
    return 0;
}