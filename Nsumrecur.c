# include<stdio.h>
 int natural(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+natural(n-1);
    }
 }
int main(){
    int N;
    printf("Enter the number:\n");
    scanf("%d",&N);
    if(N<0){
        printf("Enter Positive number\n");
    }
   int sum= natural(N);
    printf("Sum is: %d",sum);
    return 0;
}