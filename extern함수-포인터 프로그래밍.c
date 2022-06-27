#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUM_GAMES 30

int user_count, com_count, user_win_count, com_win_count;
extern void game_count(int x, int* y, int* z);
extern void reset_parameter(void);
extern int game_result_print(int x, int y, int z);


int main(void)
{

	int target;
	int i, result;
	int user[MAX_NUM_GAMES] = { 0 };
	int com[MAX_NUM_GAMES] = { 0 };
	int game;


	while (1)
	{
		printf("목표 점수를 입력하시오 : ");
		scanf("%d", &target);

		srand((unsigned)time(NULL));

		for (i = 0; i < 30; i++)
		{
			printf("주사위를 던지려면 1을 누르십시요: ");
			scanf("%d", &game);
			if (game == 1)
			{
				user[i] = rand() % 6 + 1;
				com[i] = rand() % 6 + 1;


				printf("%d번째 user_dice: %d\t ", i + 1, user[i]);
				printf("%d번째 com_dice: %d\n", i + 1, com[i]);

				game_count(i, user, com);
				result = game_result_print(i, target, MAX_NUM_GAMES);
				if (result == 1) break;
			}
		}

		printf("게임을 계속하시겠습니까? (1:계속 2:중지)");
		scanf("%d", &game);
		if (game == 2) break;
		else reset_parameter();
	}
	return 0;
}

extern void game_count(int x, int* y, int* z) {
	int i = 0, user = 0, com = 0;
	int user_count = 0, com_count = 0, user_win_count = 0, com_win_count = 0;
	int target = 0;



	for (i = 0; i < 30; i++) {
		if (user_count >= target)
		{
			printf("user가 %d 대 %d로 승리 하였습니다.", user_count, com_count);
			printf("이긴 횟수 %d : %d \n", user_win_count, com_win_count);
			break;
		}
		else if (com_count >= target)
		{
			printf("computer%d 대 %d로 승리 하였습니다\n", user_count, com_count);
			printf("이긴 횟수 %d : %d \n", user_win_count, com_win_count);
			break;
		}

		else if (i == 29)
		{
			if (user_count > com_count)
			{
				printf("user가 %d 대 %d로 승리 하였습니다.", user_count, com_count);
				printf("이긴 횟수 %d : %d \n", user_win_count, com_win_count);
			}
			else if (user_count < com_count)
			{
				printf("computer%d 대 %d로 승리 하였습니다\n", user_count, com_count);
				printf("이긴 횟수 %d : %d \n", user_win_count, com_win_count);
			}
			else
			{
				printf("user와 computer가 비겼습니다.\n");
				printf("이긴 횟수 %d : %d \n", user_win_count, com_win_count);
			}
			if (user_count >= target)
			{
				printf("user가 %d 대 %d로 승리 하였습니다.", user_count, com_count);
				printf("이긴 횟수 %d : %d \n", user_win_count, com_win_count);
				break;
			}
			else if (com_count >= target)
			{
				printf("computer%d 대 %d로 승리 하였습니다\n", user_count, com_count);
				printf("이긴 횟수 %d : %d \n", user_win_count, com_win_count);
				break;
			}
			else if (i == 29)
			{
				if (user_count > com_count)
				{
					printf("user가 %d 대 %d로 승리 하였습니다.", user_count, com_count);
					printf("이긴 횟수 %d : %d \n", user_win_count, com_win_count);
				}
				else if (user_count < com_count)
				{
					printf("computer%d 대 %d로 승리 하였습니다\n", user_count, com_count);
					printf("이긴 횟수 %d : %d \n", user_win_count, com_win_count);
				}
				else
				{
					printf("user와 computer가 비겼습니다.\n");
					printf("이긴 횟수 %d : %d \n", user_win_count, com_win_count);
				}
			}
		}
	}

}

extern void reset_parameter(void) {
	user_count = com_count = 0;
	user_win_count = com_win_count = 0;
}

extern int game_result_print(int x, int y, int z) {

	int i = 0;
	int user = 0, com = 0;
	int user_count = 0, com_count = 0, user_win_count = 0, com_win_count = 0;

	for (i = 0; i < 30; i++) {

		int user[MAX_NUM_GAMES] = { 0 };
		int com[MAX_NUM_GAMES] = { 0 };


		user[i] = rand() % 6 + 1;
		com[i] = rand() % 6 + 1;


		if (user[i] > com[i]) {
			user_count += user[i];
			user_win_count++;
		}
		else if (com[i] > user[i])
		{
			com_count += com[i];
			com_win_count++;
		}
	}
	printf("user_count: %d ", user_count);
	printf("com_count: %d\n", com_count);
	user_count = com_count = 0;
	user_win_count = com_win_count = 0;

	return 0;
}