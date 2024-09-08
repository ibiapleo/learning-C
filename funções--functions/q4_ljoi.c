#include <stdio.h>

int media(double a, double b)
{
    printf("MEDIA = %.5lf\n", ((a * 3.5) + (b * 7.5)) / 11.0);
}

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    media(a, b);
    return 0;
}
