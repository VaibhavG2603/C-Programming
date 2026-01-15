# include<stdio.h>

int main()
{
    int a,b,M,LCM;
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    M = (a>b) ? a : b;
    while(1)
    {
        if(M % a == 0 && M % b == 0)
        {
            LCM=M;
            break;
        }
     M++;
    }
     printf("the LCM is %d \n",LCM);
    return 0;
}