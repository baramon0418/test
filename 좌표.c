#include <stdio.h>
#include <math.h>

int main(void)
{

	int x1, x2, y1, y2;
	float distance;

	printf("ù��° ��ǥ��(x1,y1):");
	scanf("%d,%d", &x1, &y1);
	printf("�ι�° ��ǥ��(x2,y2):");
	scanf("%d,%d", &x2, &y2);

	distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	printf("�� ��ǥ(%d,%d)�� (%d,%d)�� �Ÿ���=%f\n", x1, y1, x2, y2, distance);
	return 0;
}