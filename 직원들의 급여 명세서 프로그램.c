#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define size 30

typedef struct employee_info {
	char name[9];
	int position;
	int position_pay;
	int overtime;
	int overtime_pay;
	int basicpay;
	int pay;
}EI;

void input(EI* ptr_e);
void allowance(EI* ptr_e, int max_count);
void basic_pay(EI* ptr_e, int max_count);
void output(EI* ptr_e, int max_count);

int main(void) {
	EI einfo[size];
	int job;

	do
	{
		printf("작업 선택: 1:입력 2:급여조회 -1:종료\n");
		scanf("%d", &job);
		if (job == 1) input(einfo);
		else if (job == 2) output(einfo, size);
		else if (job != -1) continue;
	} while (job != -1);
	return 0;
}

void input(EI* ptr_e)
{
	printf("30명의 정보를 차례대로 입력\n");
	for (int i = 0; i < size; i++)
	{
		int ch, j = 0;
		printf("[%d]이름: ", i + 1);
		scanf("%s", &ptr_e[i].name);
		printf("직위(과장:1, 대리:2, 사원:3): ");
		scanf("%d", &ptr_e[i].position);
		printf("아근시간: ");
		scanf("%d", &ptr_e[i].overtime);
	}
	basic_pay(ptr_e, size);
	allowance(ptr_e, size);
}
void allowance(EI* ptr_e, int max_count)
{
	for (int i = 0; i < max_count; i++)
	{
		if (ptr_e[i].position == 1)
		{
			ptr_e[i].position_pay = ptr_e[i].basicpay * 0.1;
		}
		else if (ptr_e[i].position == 2)
		{
			ptr_e[i].position_pay = ptr_e[i].basicpay * 0.07;
		}
		else if (ptr_e[i].position == 3)
		{
			ptr_e[i].position_pay = ptr_e[i].basicpay * 0.07;
		}
		else return;
		ptr_e[i].overtime_pay = ptr_e[i].overtime * 2;
		ptr_e[i].pay = ptr_e[i].position_pay + ptr_e[i].overtime_pay + ptr_e[i].basicpay;
	}
}
void basic_pay(EI* ptr_e, int max_count)
{
	for (int i = 0; i < max_count; i++)
	{
		if (ptr_e[i].position == 1)
			ptr_e[i].basicpay = 300;
		else if (ptr_e[i].position == 2)
			ptr_e[i].basicpay = 200;
		else if (ptr_e[i].position == 3)
			ptr_e[i].basicpay = 150;
		else return;
	}
}
void output(EI* ptr_e, int max_count)
{
	for (int i = 0; i < max_count; i++)
	{
		char* pos;
		if (ptr_e[i].position == 1) pos = "과장";
		else if (ptr_e[i].position == 2) pos = "대리";
		else pos = "사원";

		printf("이름: %s, 직위: %s, 직위수당: %d만원, 야근시간: %d, 야근수당: %d만원, 기본금: %d만원, 최종급여: %d만원\n"
			, ptr_e[i].name, pos, ptr_e[i].position_pay, ptr_e[i].overtime, ptr_e[i].overtime_pay, ptr_e[i].basicpay, ptr_e[i].pay);
	}
}