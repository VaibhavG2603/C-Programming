#include <stdio.h>

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j > i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            if (k == 1 || k == i || i == 1 || i == n)
            {
                printf("%c ", 'A'+k-1);
            }
            else
            {
                printf("  ");
            }
        }
         printf("\n");
    }
    return 0;
}

