#include <stdio.h>
#include <stdlib.h>

int main(void)
{

		int t, answer, x, y;
		float ans;

		printf("기호를 선택하시오.1:덧셈, 2:뺄셈, 3:곱셈, 4:나누셈\n");
		scanf("%d", &t);

		while (1) {
			x = rand() % 100;
			y = rand() % 100;

			switch (t) {
			case 1:
				printf("%d + %d =", x, y);
				scanf("%d", &answer);
				if ((x + y) == answer)
					printf("정답입니다.\n");
				else
					printf("오답입니다.\n");
				break;


			case 2:
				printf("%d - %d =", x, y);
				scanf("%d", &answer);
				if (answer == (x - y))
					printf("정답입니다.\n");
				else
					printf("오답입니다.\n");
				break;

			case 3:
				printf("%d * %d =", x, y);
				scanf("%d", &answer);
				if (answer == (x * y))
					printf("정답입니다.\n");
				else
					printf("오답입니다.\n");
				break;

			case 4:
				printf("%d / %d =", x, y);
				scanf("%f", &ans);
				if (ans == (1.0 * x / y))
					printf("정답입니다.\n");
				else
					printf("오답입니다.\n");
				break;

			}
			if ((x + y) == answer) break;
			if ((x - y) == answer) break;
			if ((x * y) == answer) break;
			if ((x / y) == answer) break;
		}

		return 0;
}