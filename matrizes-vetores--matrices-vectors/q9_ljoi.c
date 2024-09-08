#include <stdio.h>
int main()
{

    float a, b, c, troca;
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0)
    {
        return 1;
    }

    if (a < b)
    {
        troca = a;
        a = b;
        b = troca;
    }
    if (a < c)
    {
        troca = a;
        a = c;
        c = troca;
    }
    if (b < c)
    {
        troca = b;
        b = c;
        c = troca;
    }

    if (a >= b + c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ((a * a) == (b * b) + (c * c))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((a * a) > (b * b) + (c * c))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((a * a) < (b * b) + (c * c))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && a == c && b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (a == b || a == c || b == c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
