#include <stdio.h>
#include <stdlib.h>

int main(void)
{

		int t, answer, x, y;
		float ans;

		printf("��ȣ�� �����Ͻÿ�.1:����, 2:����, 3:����, 4:������\n");
		scanf("%d", &t);

		while (1) {
			x = rand() % 100;
			y = rand() % 100;

			switch (t) {
			case 1:
				printf("%d + %d =", x, y);
				scanf("%d", &answer);
				if ((x + y) == answer)
					printf("�����Դϴ�.\n");
				else
					printf("�����Դϴ�.\n");
				break;


			case 2:
				printf("%d - %d =", x, y);
				scanf("%d", &answer);
				if (answer == (x - y))
					printf("�����Դϴ�.\n");
				else
					printf("�����Դϴ�.\n");
				break;

			case 3:
				printf("%d * %d =", x, y);
				scanf("%d", &answer);
				if (answer == (x * y))
					printf("�����Դϴ�.\n");
				else
					printf("�����Դϴ�.\n");
				break;

			case 4:
				printf("%d / %d =", x, y);
				scanf("%f", &ans);
				if (ans == (1.0 * x / y))
					printf("�����Դϴ�.\n");
				else
					printf("�����Դϴ�.\n");
				break;

			}
			if ((x + y) == answer) break;
			if ((x - y) == answer) break;
			if ((x * y) == answer) break;
			if ((x / y) == answer) break;
		}

		return 0;
}