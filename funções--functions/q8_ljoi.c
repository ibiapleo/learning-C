#include <stdio.h>

int areaTriangulo(double base, double altura)
{
    printf("TRIANGULO: %.3lf\n", (base * altura) / 2.0);
}

int areaCirculo(double raio)
{
    printf("CIRCULO: %.3lf\n", (3.14159 * (raio * raio)));
}

int areaTrapezio(double base1, double base2, double altura)
{
    printf("TRAPEZIO: %.3lf\n", ((base1 + base2) * altura) / 2.0);
}

int areaQuadrado(double lado)
{
    printf("QUADRADO: %.3lf\n", lado * lado);
}

int areaRetangulo(double base, double altura)
{
    printf("RETANGULO: %.3lf\n", base * altura);
}

int main()
{
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    areaTriangulo(a, c);
    areaCirculo(c);
    areaTrapezio(a, b, c);
    areaQuadrado(b);
    areaRetangulo(a, b);
    return 0;
}
