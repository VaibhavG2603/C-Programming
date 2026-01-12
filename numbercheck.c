# include<stdio.h>

int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n>0)
    {
        printf("%d is Psitive",n);
    }
    else if(n<0){
        printf("%d is negative",n);
    }
    else{
        printf("Given input is Zero...!");
    }

    return 0;
}