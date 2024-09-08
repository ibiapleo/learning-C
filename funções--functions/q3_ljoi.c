#include <stdio.h>

int prod(int a, int b){
    printf("PROD = %d\n", a * b);
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    prod(a, b);
    return 0;
}
