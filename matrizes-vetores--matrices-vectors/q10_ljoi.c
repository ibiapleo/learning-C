#include <stdio.h>

int main()
{
    int valores = 6, v[valores], cont = 0;
    for (int i = 0; i < valores; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < valores; i++)
    {
        if (v[i] > 0)
        {
            cont++;
        }
    }

    printf("%d valores positivos", cont);

    return 0;
}
