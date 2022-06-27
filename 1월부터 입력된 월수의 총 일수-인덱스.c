#include <stdio.h>

int main(void)
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int i;
	int num;
	int sum = 0;
	printf("1월부터 몇 월까지의 총 일을 구할까요 ?");
	scanf("%d",&num);
	for (i = 0; i <= num; i++) {
		sum += days[i];
	}
	printf("1월부터 %d월까지는 총 %d일이 있습니다.\n", num,sum);
	return 0;
}