# include<stdio.h>
int fib_ric(int num)
{
    if(num==1||num==2){
        return num-1;
    }
    else{
        return (fib_ric(num-1)+fib_ric(num-2));
    }
}

/*int fib_itr(int num)
{
    int a=0;
    int b=1;
    for(int i=0;i<=num-1;i++)
    {
        b = a+b;
        a = b-a;
    }
    return a;
    
}*/

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    int s=fib_ric(n);
    //int sc=fib_itr(n);
    printf("%d\n",s);
    //printf("%d ",sc);
    return 0;
}