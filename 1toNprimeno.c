# include<stdio.h>
int main()
{
    int N,count;
    printf("Enter The number:\n");
    scanf("%d",&N);
    printf("The Prime numbers from 1 to %d are:\n",N);
    for(int i=2;i<=N;i++)
    {
        count=0;
        for(int j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==2)
          { 
            printf("%d\n",i);
           }
        
    }
    return 0;
}