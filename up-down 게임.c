#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int answer = rand() % 100;
	int guess;
	int tries = 0;
	do {
		printf("������ �����غ�����:");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("������ ������ �����ϴ�.");
		if (guess < answer)
			printf("������ ���ڰ� �����ϴ�.");

	} while (guess != answer);
	printf("�����մϴ�. �õ�Ƚ��=%d", tries);
	return 0;
}