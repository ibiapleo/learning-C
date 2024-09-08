#include <stdio.h>

int main()
{

    int n;

    while (scanf("%d", &n) != EOF)
    {
        int m[n][n];
        if (n > 100 || n < 0)
        {
            return 1;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int dist_i, dist_j, menorDist;

                if (i < n - i - 1)
                {
                    dist_i = i;
                }
                else
                {
                    dist_i = n - i - 1;
                }

                if (j < n - j - 1)
                {
                    dist_j = j;
                }
                else
                {
                    dist_j = n - j - 1;
                }

                if (dist_i < dist_j)
                {
                    menorDist = dist_i;
                }
                else
                {
                    menorDist = dist_j;
                }
                m[i][j] = menorDist + 1;
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == n - 1)
                {
                    printf("%3d", m[i][j]);
                }
                else
                {
                    printf("%3d ", m[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
