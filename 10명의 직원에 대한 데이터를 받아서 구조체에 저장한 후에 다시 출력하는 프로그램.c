#include <stdio.h>

typedef enum deptcode {sales, personnel, research, enginering
}deptcode;
char* department[100] = { "salary","personnel","research","enginering"}; 

typedef struct person {
int age,salary;
deptcode department;
char name[100];
char address[100];
}person; person data[100];

int main(void) {
	for (int i = 0; i < 10; i++)
	{
		printf("���� �Է� : ");
		scanf("%d", &data[i].age);
		printf("�μ��Է�:0�� salary 1�� personnel, 2��research, 3�� enginering : ");
		scanf("%d", &department[i]);
		printf("�̸� �Է� : ");
		scanf("%s", &data[i].name);
		printf("�ּ� �Է� : ");
		scanf("%s", &data[i].address);
		printf("���� �Է� : ");
		scanf("%d", &data[i].salary);
	}
	for (int i = 0; i < 10; i++) {
		printf("���� : %d\n", data[i].age);
		printf("�μ� : %d\n", department[i]);
		printf("�̸� : %s\n", data[i].name);
		printf("�ּ� : %s\n", data[i].address);
		printf("���� : %d\n", data[i].salary);

	}

	return 0;
}