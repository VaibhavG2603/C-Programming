#include <stdio.h>
int comb(int n)
{
    int mul = 1;
    for (int i = 2; i <= n; i++)
    {
        mul = mul * i;
    }
    return mul;
}
int combination(int a,int b){
     int ncr = comb(a) / (comb(b) * comb(a - b));
     return ncr;
}
int main()
{
    int n;
    printf("Enter the n and r:\n");
    scanf("%d", &n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
    
    return 0;
}