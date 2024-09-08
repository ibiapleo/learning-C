#include <stdio.h>

int volumeEsfera(double r)
{
    printf("VOLUME = %.3lf\n", (4.0 / 3.0) * 3.14159 * (r * r * r));
}

int main()
{
    double r;
    scanf("%lf", &r);
    volumeEsfera(r);
    return 0;
}
