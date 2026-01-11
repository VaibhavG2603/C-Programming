# include<stdio.h>
# include<math.h>

int main()
{
    float P,T,R,SI,CI;

    printf("Enter the Principle,Rate and Time:\n");
    scanf("%f %f %f",&P,&R,&T);
    SI=P*R*T;
    CI=P*((pow((1+R/100),T)));
    printf("Simple interest is:%5.2f\n",SI);
    printf("Compound interest is:%5.2f\n",CI);

    return 0;
}