# include<stdio.h>

int main(){
    int num,squre,temp,digit,sum=0;
    printf("enter the number:\n");
    scanf("%d",&num);
    squre=num*num;
    temp=squre;
    while (temp!=0)
    {
        digit=temp%10;
        sum=sum+digit;
        temp=temp/10;
    }
    if(num==sum){
        printf("given number is Neon Number..!\n");
    }
    else{
         printf("given number is not Neon Number..!\n");
    }
   return 0; 
}