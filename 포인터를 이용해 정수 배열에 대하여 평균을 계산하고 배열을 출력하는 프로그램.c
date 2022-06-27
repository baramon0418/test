#include <stdio.h>
#define SIZE 5
double get_array_avg(int*dat, int n);
void print_array(int*dat, int n);

int main(void)
{
	int i;
	int data[SIZE] = { 10, 20, 30, 40, 50 };
	double result;

	print_array(data, SIZE);
	result = get_array_avg(data, SIZE);
	printf("배열 원소들의 평균 = %f \n", result);
	return 0;
}

// 배열 요소의 평균을 계산하는 함수
double get_array_avg(int* dat, int n)
{
	int i;
	double sum = 0.0;
	for (i = 0; i < n; i++)
		sum += *(dat+i);
	return sum / n;
}

// 배열 요소를 화면에 출력하는 함수
void print_array(int* dat, int n)
{
	int i;
	printf("[ ");
	for (i = 0; i < n; i++)
		printf("%d ", *(dat + i));
	printf("] \n");
}