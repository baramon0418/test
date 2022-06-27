#include <stdio.h>
#include <math.h>

struct ThreeDime {
	double x;
	double y;
	double z;
}; typedef struct ThreeDime ThreeDime;

double Distance1(ThreeDime a) {
	double d;
	d = sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
	return d;
}

double Distance2(ThreeDime a, ThreeDime b)
{
	double d;
	d = sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y) + (a.z - b.z) * (a.z - b.z));
	return d;

}

ThreeDime SymOri(ThreeDime a) {
	a.x = -a.x;
	a.y = -a.y;
	a.z = -a.z;
	return a;
}

int main(void)
{
	double D1, D2;
	ThreeDime A1, A2, A3;
	printf("�� A1�� x,y,z�� �Է��Ͻÿ�\n");
	scanf("%lf %lf %lf", &A1.x, &A1.y, &A1.z);
	printf("�� A2�� x,y,z�� �Է��Ͻÿ�\n");
	scanf("%lf %lf %lf", &A2.x, &A2.y, &A2.z);

	D1 = Distance1(A1);
	D2 = Distance2(A1, A2);
	A3 = SymOri(A1);

	printf("A1���� �������� �Ÿ��� %.2lf �̴�.\n", D1);
	printf("A1���� A2������ �Ÿ��� %.2lf �̴�.\n", D2);
	printf("A1���� ������ ��Ī��Ų ���� x: %.2lf, y=%.2lf, z=%.2lf�̴�.\n", A3.x, A3.y, A3.z);

	return 0;
}