#include <stdio.h>

int main(void)
{
	int n = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int p = 0;

	printf("0���� 999 ������ ���ڸ� �Է��Ͻÿ�.\n");
	scanf("%d", &n);

	if (n > 0 && n < 1000) {
		a = (n % 10);
		b = (n / 10) % 10;
		c = n / 100;
		p = (a * a * a) + (b * b * b) + (c * c * c);
		{
			if (n == p)
				printf("�Ͻ�Ʈ�� �����Դϴ�.\n");

			else
				printf("�Ͻ�Ʈ�� ���ڰ� �ƴմϴ�.\n");
		}

	}

	return 0;

}