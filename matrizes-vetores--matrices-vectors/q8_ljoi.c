#include <stdio.h>

int main()
{
    int size = 10, n[size], v;

    scanf("%d", &v);

    if (v > 50)
    {
        return 1;
    }

    n[0] = v;

    for (int i = 1; i < size; i++)
    {
        n[i] = n[i - 1] * 2;
    }

    for (int i = 0; i < size; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
