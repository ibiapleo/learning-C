#include <stdio.h>

int main()
{
    int x, y, imp = 0;

    scanf("%d %d", &x, &y);

    if (x > y)
    {
        for (int i = y + 1; i < x; i++)
        {
            if (i % 2 != 0)
            {
                imp += i;
            }
        }
    }
    if (y > x)
    {
        for (int i = x + 1; i < y; i++)
        {
            if (i % 2 != 0)
            {
                imp += i;
            }
        }
    }

    printf("%d\n", imp);
}