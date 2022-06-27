#include <stdio.h>

int main(void)
{
    char board[3][3];
    int x, y, k, i;

    for (x = 0; x < 3; x++)
        for (y = 0; y < 3; y++) board[x][y] = ' ';

    for (k = 0; k < 9; k++) {
        printf("(x,y) ��ǥ:");
        scanf("%d %d", &x, &y);

        if (board[x][y] == 'X' || board[x][y] == 'O')
        {
            printf("�̹� ���� ���� ��ǥ�� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���.\n");
            continue;
        }
        
        

        board[x][y] = (k % 2 == 0) ? 'X' : 'O';

        for (i = 0; i < 3; i++) {
            printf("---l---l---\n");
            printf(" %c l %c l %c \n", board[i][0], board[i][1], board[i][2]);

        }
        printf("---l---l---\n");
    }
    return 0;
}