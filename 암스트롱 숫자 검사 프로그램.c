#include <stdio.h>

int main(void)
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int p = 0;

	printf("0에서 999 사이의 숫자를 입력하시오.\n");
	scanf("%d", &n);

	if (n > 0 && n < 1000) {
		a = (n % 10);
		b = (n / 10) % 10;
		c = n / 100;
		p = (a * a * a) + (b * b * b) + (c * c * c);
		{
			if (n == p)
				printf("암스트롱 숫자입니다.\n");

			else
				printf("암스트롱 숫자가 아닙니다.\n");
		}

	}

	return 0;

}