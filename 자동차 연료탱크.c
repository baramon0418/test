#include <stdio.h>

int main(void) {
	double t = 1000, ans;

	printf("�ʱ⿬�ᷮ: %lf\n", t);
	do {
		printf("���� ������ +, �Ҹ�� -�� �Է����ּ���: ");
		scanf("%lf", &ans);
		t = t + ans;
		printf("���� �����ִ� ���� %lf\n", t);
	} while (t > 100);
	printf("\n(���) ���ᰡ 10�����Դϴ�.\n");

	return 0;
}