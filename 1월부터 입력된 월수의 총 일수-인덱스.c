#include <stdio.h>

int main(void)
{
	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
	int i;
	int num;
	int sum = 0;
	printf("1������ �� �������� �� ���� ���ұ�� ?");
	scanf("%d",&num);
	for (i = 0; i <= num; i++) {
		sum += days[i];
	}
	printf("1������ %d�������� �� %d���� �ֽ��ϴ�.\n", num,sum);
	return 0;
}