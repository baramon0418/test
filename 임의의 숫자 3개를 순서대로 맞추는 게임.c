#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void)
{
    int i, j = 0;
    int n[3] = { 0 };
    int y[3] = { 0 };
    int strike = 0;
    int ball = 0;
    int end = 0;
    

    while (n[0] == n[1] || n[0] == n[2] || n[1] == n[2]) 
    {
        srand((int)time(NULL));

        for (i = 0; i < 3; i++)
        {
            n[i] = (rand() % 10) + 1;
        }
    }
        

    while (end == 0)
    {
        printf("서로다른 숫자 0~10까지 세개를 입력해주세요.\n");
        for (i = 0; i < 3; i++)
        {
            scanf("%d", &y[i]);
        }


        for (i = 0; i < 3; i++)
        {
            if (n[i] == y[i])
            {
                strike = strike + 1;
            }
        }

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (n[i] == y[j])
                {
                    ball = ball + 1;
                    break;
                }
            }

        }

        printf(" %d strike %d ball\n", strike, ball - strike);

        if (strike == 3)
        {
            end = 1;
        }
        strike = 0;
        ball = 0;


    }
    
            return 0;
}

