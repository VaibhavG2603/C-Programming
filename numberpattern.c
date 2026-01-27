# include<stdio.h>
fornum(int num){
    for(int i=1;i<=num;i++){
        for(int k=num;k>=i;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
revnum(int num){
    for(int i=num;i>=1;i--){
        for(int k=num;k>=i;k--){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
}
int main(){
    int num, type;

    printf("Enter 0 for forward and 1 for reverse number pattern printting:\n");
    scanf("%d", &type);
    if (type == 0)
    {
        printf("Enter the row for forward number pattern printting:\n");
        scanf("%d", &num);
       fornum(num);
    }
    else if (type == 1)
    {
        printf("Enter the rows for reverse number pattern printting:\n");
        scanf("%d", &num);
       revnum(num);
    }
    else
    {
        printf("invalid choice input...!\n");
    }
    return 0;
}