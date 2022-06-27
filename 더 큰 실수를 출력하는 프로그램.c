#include <stdio.h>

double get_biger()
{
	double value;
	printf("실수를 입력하세요:");
	scanf("%lf", &value);
	return value;
}

double get_bigger(double n1, double n2)
{
	if (n1 > n2)return(n1);
	else return(n2);
}
double main(void)
{
	double a = get_biger();
	double b = get_biger();

	printf("더 큰 수는 %lf:\n", get_bigger(a, b));
	return 0;
}