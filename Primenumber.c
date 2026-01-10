#include <stdio.h>
int main()
{   
    int n,isPrime=1;
    printf("enter the value which you wants to check prime number or not:\n");
    scanf("%d",&n);
    if(n<=1)
    {
        isPrime=0;
      }
    else
    {
      for(int i=2;i<=n/2;i++)
      {
        if(n%i==0)
        {
            isPrime=0;
            break;
        }
      }
    }
    if(isPrime==1)
    {
        printf("%d is Prime Number\n",n);
    }
    else{
        printf("%d is Not Prime Number\n",n);
    }
    return 0;
}