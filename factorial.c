# include<stdio.h>
int fact(int num)
{  if(num ==1||num==0){
    return 1;
}
else{
    return (num*fact(num-1));
}
}
int main()
{
    int n;
    printf("enter the number:\n");
    scanf("%d",&n);
    int F = fact(n);
    printf("Factorial of %d is %d:\n",n,F);
    return 0;
}
