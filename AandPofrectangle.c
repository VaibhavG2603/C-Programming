# include<stdio.h>

int main()
{
    float L,W,A,P;
    printf("Enter the Lenght and Width of Rectangle:\n");
    scanf("%f %f",&L,&W);
    A=L*W;
    P=2*(L+W);
    printf("The Area is: %.1f and Perimeter is: %.1f of Rectanble\n",A,P);
    return 0;
}
