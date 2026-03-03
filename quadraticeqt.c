# include<stdio.h>
# include<math.h>
 void quadratic(float a,float b,float c){
      float D = b*b-4*a*c;
    if(D>0){
        printf("Roots are real and different\n");
        float root1= (-b+sqrt(D))/(2*a);
        float root2= (-b-sqrt(D))/(2*a);
        printf("Root1: %f and Root2: %f\n",root1,root2);
    }
    else if(D==0){
        printf("Roots are real and the same\n");
        float root1= -b/(2*a);
        printf("Root1: %f and Root2: %f\n",root1,root1);
    }
    else{
        printf("Roots are complex\n");
        float root1= -b/(2*a);
        float root2= sqrt(-D)/(2*a);
        printf("Root1 = %f + %fi\n and Root2 = %.2f - %.2fi\n",root1,root2,root1,root2);
    }
 }
int main()
{
    int a,b,c;
    printf("Enter the Values:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a==0){
        printf("NOt a quadratic eqation\n");
        return 0;
    }
  
    quadratic(a,b,c);
    return 0;
}