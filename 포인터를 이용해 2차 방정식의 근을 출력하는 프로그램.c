#include <stdio.h>
#include <math.h>

void quadratic(int a, int b, int c, double *xplus, double *xminus);

int main(void)
{
    int x, y, z;
    double xp, xm;
    scanf("%d %d %d", &x, &y, &z);
    quadratic(x,y,z, &xp, &xm);
    printf("xplus= %lf, xminus= %lf\n", xp, xm);
    return 0;
}

void quadratic(int a, int b, int c, double *xplus, double *xminus)
{
    *xplus = (-b + sqrt(b * b - 4 * a * c) / (2 * a));
    *xminus = (-b - sqrt(b * b - 4 * a * c) / (2 * a));
}