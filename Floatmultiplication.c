//Multiply two Floating Point Numbers
# include<stdio.h>
int main()
{
    float a,b,Product;
    printf("Enter a and b:\n");
    scanf("%f %f",&a,&b);
    Product = a*b;
    printf("Multiplication is:%6.4f\n",Product);
    return 0;

}