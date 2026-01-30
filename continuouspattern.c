#include <stdio.h>

int main()
{
    int ch;
    printf("Enter the number:\n");
    scanf("%d", &ch);
    char character = 'A';
    for (int i = 1; i <= ch; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ", character);
            character++;
        }
        printf("\n");
    }

    return 0;
}