#include <stdio.h>

int get_tax(int income);

int main(void)
{
	int ic, tax;
	printf("금액을 입력하시오:");
	scanf("%d", &ic);
	tax = get_tax(ic);
	printf("소득 %d에 해당하는 소득세는 %d입니다.\n", ic, tax);
	return 0;
}  
int get_tax(int income) {
	if (1000 >= income) return income * 0.08;
	else if (1000< income) return income * 0.1;

}