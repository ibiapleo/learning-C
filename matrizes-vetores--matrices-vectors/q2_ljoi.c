#include <stdio.h>

int main()
{
    int ord;

    while (scanf("%d", &ord) != EOF)
    {
        if (ord <= 0 || ord > 100)
        {
            continue;
        }

        for (int i = 0; i < ord; i++)
        {
            for (int j = 0; j < ord; j++)
            {
                printf("%3d", (1 + (i > j ? (i - j) : (j - i))));
                if (j < ord - 1)
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
