#include <stdio.h>

typedef struct inventory {
	char name[15];
	int quantity;
    int price;
}inventory; inventory list[100];

int main(void) {
	for (int i = 0; i < 10; i++)
	{
		printf("이름 입력 : ");
		scanf("%s", &list[i].name);
		printf("수량 입력 : ");
		scanf("%d", &list[i].quantity);
		printf("가격 입력 : ");
		scanf("%d", &list[i].price);
	}
	for (int i = 0; i < 10; i++)
		printf("%s %d %d\n", list[i].name, list[i].quantity, list[i].price);
	return 0;
}