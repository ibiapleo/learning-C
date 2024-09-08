#include <stdio.h>
#include <string.h>

int comissao(double a, double b)
{
    printf("TOTAL = R$ %.2lf\n", (a + (0.15 * b)));
}

int main()
{
    char nome[100];
    double sl, vnd;
    scanf("%s %lf %lf", nome, &sl, &vnd);
    comissao(sl, vnd);
    return 0;
}
