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
int main()
{
    int n, r;
    printf("Enter the n and r:\n");
    scanf("%d %d", &n, &r);
    int ncr = comb(n) / (comb(r) * comb(n - r));
    printf("%d", ncr);
    return 0;
}