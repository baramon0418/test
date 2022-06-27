#include <stdio.h>

int main(void) {
	double t = 1000, ans;

	printf("초기연료량: %lf\n", t);
	do {
		printf("연료 충전은 +, 소모는 -로 입력해주세요: ");
		scanf("%lf", &ans);
		t = t + ans;
		printf("현재 남아있는 양은 %lf\n", t);
	} while (t > 100);
	printf("\n(경고) 연료가 10이하입니다.\n");

	return 0;
}