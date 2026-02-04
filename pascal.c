# include<stdio.h>
int comb(int n)
{
    int mul = 1;
    for (int i = 1; i <= n; i++)
    {
        mul = mul * i;
    }
    return mul;
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for (int i  = 0; i < n; i++)
    {
        for (int j = n; j>i; j--)
        {
           printf(" ");
        }
        for (int k = 0; k <=i; k++)
        {
           int ncr = comb(i) / (comb(k) * comb(i - k));
            printf("%d ",ncr);
        }
        printf("\n");
        
    }
    
    return 0;

}