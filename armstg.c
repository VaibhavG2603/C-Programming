#include <stdio.h>
#include <math.h>

int main()
{
    int n, temp, digit, sum = 0, count = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;
    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + pow(digit, count);
        temp = temp / 10;
    }
    if (sum == n){
        printf("Armstrong number\n");}
    else{
        printf("Not an Armstrong number\n");
    }
    return 0;
}
