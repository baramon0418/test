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
		printf("나이 입력 : ");
		scanf("%d", &data[i].age);
		printf("부서입력:0은 salary 1은 personnel, 2는research, 3은 enginering : ");
		scanf("%d", &department[i]);
		printf("이름 입력 : ");
		scanf("%s", &data[i].name);
		printf("주소 입력 : ");
		scanf("%s", &data[i].address);
		printf("월급 입력 : ");
		scanf("%d", &data[i].salary);
	}
	for (int i = 0; i < 10; i++) {
		printf("나이 : %d\n", data[i].age);
		printf("부서 : %d\n", department[i]);
		printf("이름 : %s\n", data[i].name);
		printf("주소 : %s\n", data[i].address);
		printf("월급 : %d\n", data[i].salary);

	}

	return 0;
}