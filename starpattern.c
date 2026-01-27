#include <stdio.h>
void starpattern(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
void reversepattern(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = row; j > i; j--)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, type;

    printf("Enter 0 for forward and 1 for reverse pattern printting:\n");
    scanf("%d", &type);
    if (type == 0)
    {
        printf("Enter the row for forward star pattern printting:\n");
        scanf("%d", &rows);
        starpattern(rows);
    }
    else if (type == 1)
    {
        printf("Enter the rows for reverse star pattern printting:\n");
        scanf("%d", &rows);
        reversepattern(rows);
    }
    else
    {
        printf("invalid choice input...!\n");
    }

    return 0;
}