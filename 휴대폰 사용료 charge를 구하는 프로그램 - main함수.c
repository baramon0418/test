#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct bill {

    int voice;          // ������ȭ �ð�
    int text;           // �������� �Ǽ�
    int V_charge;       // �������
    int T_charge;  //���� ���
    int charge;  //�� ��ȭ���
    int basic_charge; //�⺻ ���

};

struct bill data;

extern void voice_charge(struct bill* vc);
extern void text_charge(struct bill* tc);
extern void total_charge(int bc, int vc, int tc, int* total);
extern void bill_print(struct bill* pr);

int main(void)
{
    data.basic_charge = 10000;

    printf("���� ��ȭ �ð���(��)? ");
    scanf("%d", &data.voice);
    printf("���� ���� �Ǽ���? ");
    scanf("%d", &data.text);

    voice_charge(&data);
    text_charge(&data);
    total_charge(data.basic_charge, data.V_charge, data.T_charge, &data.charge);

    printf("\n");
    bill_print(&data);
}