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
	printf("점 A1의 x,y,z를 입력하시오\n");
	scanf("%lf %lf %lf", &A1.x, &A1.y, &A1.z);
	printf("점 A2의 x,y,z를 입력하시오\n");
	scanf("%lf %lf %lf", &A2.x, &A2.y, &A2.z);

	D1 = Distance1(A1);
	D2 = Distance2(A1, A2);
	A3 = SymOri(A1);

	printf("A1점과 원점과의 거리는 %.2lf 이다.\n", D1);
	printf("A1점과 A2점과의 거리는 %.2lf 이다.\n", D2);
	printf("A1점을 원점에 대칭시킨 점은 x: %.2lf, y=%.2lf, z=%.2lf이다.\n", A3.x, A3.y, A3.z);

	return 0;
}