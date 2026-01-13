# include<stdio.h>

int main()
{   
    int n,i,T;
     printf("Enter Number n:\n");
    scanf("%d",&n);
    for( i=1;i<=10;i++)
    {
         T=n*i;
         printf("%dX%d=%d\n",n,i,T);
     }
     return 0;
   
}