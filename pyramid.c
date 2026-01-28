# include<stdio.h>

int main(){
    int rows;
    printf("enter the rows:\n");
    scanf("%d",&rows);
    for(int i=0;i<rows;i++){
        for(int j=rows;j>=i;j--){
            printf(" ");
        }
        for (int k = 0; k <= 2*i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}