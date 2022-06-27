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
    printf("�޴��� ��� ��� û����\n");
    for (int i = 0; i < 50; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("���� ��ȭ �ð� %d��\n", pr->voice);
    printf("���� ���� �Ǽ� %d��\n", pr->text);
    for (int i = 0; i < 50; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("�⺻���\t\t\t\t%d��\n", pr->basic_charge);
    printf("���� ��ȭ��\t%d��\t\t\t%d��\n", pr->voice, pr->V_charge);
    if (pr->text > 20)
    {
        printf("���� ���۷�\t�ʰ�%d��(20�� ����)\t%d��\n", pr->text - 20, pr->T_charge);
    }
    else
    {
        printf("���� ���۷�\t�ʰ�%d��(20�� ����)\t%d��\n", pr->text, pr->T_charge);
    }
    for (int i = 0; i < 50; i++)
    {
        printf("-");
    }
    printf("\n");
    printf("�հ�\t\t\t\t\t%d��\n", pr->basic_charge + pr->V_charge + pr->T_charge);
    printf("�ΰ���(10%%)\t\t\t\t%d��\n", (int)((pr->basic_charge + pr->V_charge + pr->T_charge) * 0.1));
    for (int i = 0; i < 50; i++)
    {
        printf("=");
    }
    printf("\n");
    printf("�̹� �� ���\t\t\t\t%d��\n", pr->charge);
}