#include <stdio.h>

int main(void)
{
	int size;

		printf("����� �Է��Ͻÿ�:\n");
		scanf("%d", &size);

		if (size < 100) {
			printf("������� small�Դϴ�.\n");
		}
		else if (size >= 100 && size < 200) {
			printf("������� medium�Դϴ�.\n");
		}
		else {
				printf("������� large�Դϴ�.\n");
		}
		
		return 0;


}