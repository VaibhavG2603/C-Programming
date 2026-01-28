# include<stdio.h>

int main(){
    int rows;
    printf("enter the rows:\n");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=rows;j>=i;j--){
            printf(" ");
        }
        for (int k = 0; k <= 2*(i-1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i=rows;i>=1;i--){
        for(int j=rows;j>=i;j--){
            printf(" ");
        }
        for (int k = 0; k <= 2*(i-1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}