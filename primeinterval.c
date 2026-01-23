# include<stdio.h>

int main()
{
    int start,end,count;
    printf("enter the numbers:\n");
    scanf("%d %d",&start,&end);
    if(start<2){
        start=2;
    }
    for(int i=start;i<=end;i++){
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
            printf(" %d ",i);
           }
        }
    return 0;
    
}