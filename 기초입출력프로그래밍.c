#include <stdio.h>

int main(void)
{
	int number;
	int eng;
	int math;
	int sci;
	int sum;
	int avg;

	printf("�й��� �Է��Ͻÿ�:");
	scanf_s("%d", &number);

	printf("���� ������ �Է��Ͻÿ�:");
	scanf_s("%d", &eng);

	printf("���� ������ �Է��Ͻÿ�:");
	scanf_s("%d", &math);

	printf("���� ������ �Է��Ͻÿ�.");
	scanf_s("%d", &sci);

	sum = eng + math + sci;
	printf("����:%d \n", sum);

	avg = (eng + math + sci) / 3;
	printf("���:%d", avg);

	return 0;
}