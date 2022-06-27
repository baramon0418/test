#include <stdio.h>
#include <math.h>

int main(void)
{

	int time, hour, minut, sec;

	printf("초를 입력하시오:");
	scanf("%d,%d,%d,%d", &time ,&hour, &minut, &sec);

	hour = time / 3600;
	minut = (time - hour * 3600) / 60;
	sec = time % 60;

	printf("%d hours, minut%d, and %d seconds", hour, minut, sec);
	
	return 0;
}