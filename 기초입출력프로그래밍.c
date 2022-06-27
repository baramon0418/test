#include <stdio.h>

int main(void)
{
	int number;
	int eng;
	int math;
	int sci;
	int sum;
	int avg;

	printf("학번을 입력하시오:");
	scanf_s("%d", &number);

	printf("영어 점수를 입력하시오:");
	scanf_s("%d", &eng);

	printf("수학 점수를 입력하시오:");
	scanf_s("%d", &math);

	printf("과학 점수를 입력하시오.");
	scanf_s("%d", &sci);

	sum = eng + math + sci;
	printf("총점:%d \n", sum);

	avg = (eng + math + sci) / 3;
	printf("평균:%d", avg);

	return 0;
}