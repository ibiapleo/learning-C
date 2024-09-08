#include <stdio.h>

int main()
{
    int size = 20, n[size], save;
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &n[i]);
    }

    for (int i = 0; i < (size / 2); i++)
    {
        save = n[i];
        n[i] = n[(size - 1) - i];
        n[(size - 1) - i] = save;
    }

    for (int i = 0; i < size; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
