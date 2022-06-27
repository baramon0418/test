#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct bill
{
    int voice;
    int text;
    int V_charge;
    int T_charge;
    int charge;
    int basic_charge;
};

extern void voice_charge(struct bill* vc);
extern void text_charge(struct bill* tc);
extern void total_charge(int bc, int vc, int tc, int* total);
extern void bill_print(struct bill* pr);

void voice_charge(struct bill* vc)
{
    if (vc->voice <= 100)
    {
        vc->V_charge = vc->voice * 100;
    }
    else
    {
        vc->V_charge = (vc->voice - 100) * 80 + 100 * 100;
    }
}

void text_charge(struct bill* tc)
{
    if (tc->text > 20)
    {
        tc->T_charge = (tc->text - 20) * 20;
    }
}

void total_charge(int bc, int vc, int tc, int* total)
{
    *total = (int)((bc + vc + tc) * 1.1);
}

void bill_print(struct bill* pr)
{
    printf("휴대폰 사용 요금 청구서\n");
    for (int i = 0; i < 50; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("음성 통화 시간 %d분\n", pr->voice);
    printf("문자 전송 건수 %d건\n", pr->text);
    for (int i = 0; i < 50; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("기본요금\t\t\t\t%d원\n", pr->basic_charge);
    printf("음성 통화료\t%d분\t\t\t%d원\n", pr->voice, pr->V_charge);
    if (pr->text > 20)
    {
        printf("문자 전송료\t초과%d건(20건 무료)\t%d원\n", pr->text - 20, pr->T_charge);
    }
    else
    {
        printf("문자 전송료\t초과%d건(20건 무료)\t%d원\n", pr->text, pr->T_charge);
    }
    for (int i = 0; i < 50; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("합계\t\t\t\t\t%d원\n", pr->basic_charge + pr->V_charge + pr->T_charge);
    printf("부가세(10%%)\t\t\t\t%d원\n", (int)((pr->basic_charge + pr->V_charge + pr->T_charge) * 0.1));
    for (int i = 0; i < 50; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("이번 달 요금\t\t\t\t%d원\n", pr->charge);
}