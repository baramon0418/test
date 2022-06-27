#include <stdio.h>

int main(void)
{
	int size;

		printf("사이즈를 입력하시오:\n");
		scanf("%d", &size);

		if (size < 100) {
			printf("사이즈는 small입니다.\n");
		}
		else if (size >= 100 && size < 200) {
			printf("사이즈는 medium입니다.\n");
		}
		else {
				printf("사이즈는 large입니다.\n");
		}
		
		return 0;


}