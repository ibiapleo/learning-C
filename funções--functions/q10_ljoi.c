#include <stdio.h>

int perimOuArea(double a, double b, double c)
{
    if (a + b > c && a + c > b && b + c > a)
    {
        printf("Perimetro = %.1lf\n", a + b + c);
    }
    else
    {
        printf("Area = %.1lf\n", ((a + b) * c) / 2.0);
    }
}

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    perimOuArea(a, b, c);
    return 0;
}
