# include<stdio.h>

int main()
{
    int ch;
    printf("Enter the number:\n");
    scanf("%d",&ch);
    //forward 
    for(int i=1;i<=ch;i++){
        for(int j=1;j<=i;j++){
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }
    printf("\n\n");
     //reverse
    for(int i=ch;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%c ",'A'+j-1);
        }
        printf("\n");
    }

    return 0;
}