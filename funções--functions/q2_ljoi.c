#include <stdio.h>

int soma(int a, int b){
    printf("SOMA = %d\n", a + b);
}

int main()
{   
    int a, b;
    scanf("%d %d", &a, &b);
    soma(a, b);
    return 0;
}
