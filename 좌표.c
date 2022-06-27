#include <stdio.h>
#include <math.h>

int main(void)
{

	int x1, x2, y1, y2;
	float distance;

	printf("첫번째 좌표는(x1,y1):");
	scanf("%d,%d", &x1, &y1);
	printf("두번째 좌표는(x2,y2):");
	scanf("%d,%d", &x2, &y2);

	distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf("두 좌표(%d,%d)와 (%d,%d)의 거리는=%f\n", x1, y1, x2, y2, distance);
	return 0;
}