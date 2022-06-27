#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int answer = rand() % 100;
	int guess;
	int tries = 0;
	do {
		printf("정답을 추측해보세요:");
		scanf("%d", &guess);
		tries++;

		if (guess > answer)
			printf("제시한 정수가 높습니다.");
		if (guess < answer)
			printf("제시한 숫자가 낮습니다.");

	} while (guess != answer);
	printf("축하합니다. 시도횟수=%d", tries);
	return 0;
}