#include <stdio.h>

double get_biger()
{
	double value;
	printf("�Ǽ��� �Է��ϼ���:");
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

	printf("�� ū ���� %lf:\n", get_bigger(a, b));
	return 0;
}