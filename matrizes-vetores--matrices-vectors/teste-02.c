#include <stdio.h>

int main()
{
    int n = 0, m[n][n], soma = 0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        m[(n-1)][i] *= m[(n-1)][i]; 
    }
    
    for (int i = 0; i < n; i++)
    {
        soma += m[0][i];
    }

    printf("%d", soma);
    
    return 0;
}
