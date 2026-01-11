# include<stdio.h>

float F_conv(float n)
{
    return ((n-32)*5.0/9.0);
}
int main()
{
    float F,T;
    printf("Enter the temperature in Fahrenheit:\n");
    scanf("%f",&F);
    T=F_conv(F);
    printf("The Temperature in Celcius is: %f ",T);
    return 0;
}