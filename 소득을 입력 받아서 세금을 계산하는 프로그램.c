#include <stdio.h>

int get_tax(int income);

int main(void)
{
	int ic, tax;
	printf("�ݾ��� �Է��Ͻÿ�:");
	scanf("%d", &ic);
	tax = get_tax(ic);
	printf("�ҵ� %d�� �ش��ϴ� �ҵ漼�� %d�Դϴ�.\n", ic, tax);
	return 0;
}  
int get_tax(int income) {
	if (1000 >= income) return income * 0.08;
	else if (1000< income) return income * 0.1;

}