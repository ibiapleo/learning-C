#include <stdio.h>

int main()
{
    int size = 10, x[size];

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &x[i]);
    }

    for (int i = 0; i < size; i++)
    {
        if (x[i] <= 0)
        {
            x[i] = 1;
        }
    }

    for (int i = 0; i < size; i++)
    {
        printf("x[%d] = %d\n", i, x[i]);
    }
    return 0;
}
