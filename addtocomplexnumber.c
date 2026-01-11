# include<stdio.h>

struct complex{
    float real;
    float img;
 };
int main()
{
    struct complex c1, c2 ,sum;
    printf("enter the real and imaginary part of first complex number:\n");
    scanf("%f %f",&c1.real,&c1.img);
     printf("enter the real and imaginary part of second complex number:\n");
    scanf("%f %f",&c2.real,&c2.img);
    sum.real=c1.real+c2.real;
    sum.img=c1.img+c2.img;
    printf("The sum of real and imaginary part of complex number is :%.1f + %.1fi\n",sum.real,sum.img);

    return 0;
} 