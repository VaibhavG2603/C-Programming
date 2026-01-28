# include<stdio.h>

int main()
{
    int row;
    printf("Enter the rows:\n");
    scanf("%d",&row);
    for(int i=row;i>=1;i--){
        for(int j=row;j>=i;j--){
            printf(" ");
        }
        for (int k = 0; k <= 2*(i-1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}