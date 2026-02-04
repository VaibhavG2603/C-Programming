# include <stdio.h>

int main(){
    int n;
    
    printf("Enter the number:\n");
    scanf("%d",&n);
    int c =n*(n+1)/2;
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j<=i;j++)
        {  
            printf("%d ",c);
            c--;
           
        }
        printf("\n");
        
    }
    return 0;
    
}