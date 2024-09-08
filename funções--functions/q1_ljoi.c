#include <stdio.h>

int areaCirculo(double r, double n)
{
    printf("A=%.4lf\n", n * (r * r));
}

int main()
{
    double n = 3.14159, r;
    scanf("%lf", &r);
    areaCirculo(r, n);
    return 0;
}
