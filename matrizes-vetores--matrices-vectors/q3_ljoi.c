#include <stdio.h>

int main()
{
    int ord;
    while (scanf("%d", &ord) != EOF)
    {

        if (ord < 3 || ord >= 70)
        {
            return 1;
        }

        for (int i = 0; i < ord; i++)
        {
            for (int j = 0; j < ord; j++)
            {
                if (i + j == (ord - 1))
                {
                    printf("2");
                }
                else if (i == j)
                {
                    printf("1");
                }
                else
                {
                    printf("3");
                }
            }
            printf("\n");
        }
    }
    return 0;
}
