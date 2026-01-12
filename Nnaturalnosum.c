# include<stdio.h>

int main()
{
    int n,sum=0;
    printf("Enter the value:\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
         sum=sum+i;  
    }
    printf("the sum is: %d",sum);
    return 0;
}