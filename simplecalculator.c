# include<stdio.h>

int main()
{
    int c;
    float a,b,s;
    printf("Enter Choice: 1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n");
    scanf("%d",&c);
    printf("Enter two numbers:\n");
    scanf("%f %f",&a,&b);
    switch (c)
    {
    case 1:s=a+b;
        printf("The addition is:%.2f",s);
        break;
    case 2:s=a-b;
        printf("The sunstraction is:%f",s);
        break;
    case 3:s=a*b;
        printf("The multiplication is:%f",s);
        break;
    case 4:s=a/b;
        if(b!=0){
        printf("The division is:%f",s);}
        else{
        printf("The division is not allowed by zero..!");
        }
        break;
    default:
       printf("invalid input...!");
        break;
    }
    return 0;
}