#include <stdio.h>

int dadosTrab(int n, int h, double x)
{
    printf("NUMBER = %d\n", n);
    printf("SALARY = U$%.2lf\n", h * x);
}

int main()
{
    int n, h;
    double slph;
    scanf("%d %d %lf", &n, &h, &slph);
    dadosTrab(n, h, slph);
    return 0;
}
