# include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the the values of a and b:\n");
    scanf("%d %d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("The swap numbers are a: %d and b: %d\n",a,b);
    return 0;
}