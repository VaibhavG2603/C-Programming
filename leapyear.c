# include<stdio.h>
int main()
{
    int year;
    printf("enter the YYYY year:\n");
    scanf("%d",&year);
    if(year % 400 == 0){
        printf("%d is Leap Year..!",year);
    }
    else if(year % 100 ==0){
        printf("%d is not Leap Year..!",year);
    }
    else if(year % 4 == 0){
        printf("%d is Leap Year..!",year);
    }
    else{
        printf("Not a leap year..!");
    }
    return 0;
}