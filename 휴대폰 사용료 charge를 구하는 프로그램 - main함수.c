#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct bill {

    int voice;          // 음성통화 시간
    int text;           // 문자전송 건수
    int V_charge;       // 음성요금
    int T_charge;  //문자 요금
    int charge;  //총 전화요금
    int basic_charge; //기본 요금

};

struct bill data;

extern void voice_charge(struct bill* vc);
extern void text_charge(struct bill* tc);
extern void total_charge(int bc, int vc, int tc, int* total);
extern void bill_print(struct bill* pr);

int main(void)
{
    data.basic_charge = 10000;

    printf("음성 통화 시간은(분)? ");
    scanf("%d", &data.voice);
    printf("문자 전송 건수는? ");
    scanf("%d", &data.text);

    voice_charge(&data);
    text_charge(&data);
    total_charge(data.basic_charge, data.V_charge, data.T_charge, &data.charge);

    printf("\n");
    bill_print(&data);
}