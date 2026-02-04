# include<stdio.h>
int prime(int a){
    if(a<=1)
    {
      return 0;
     }
     for(int i=2;i*i<=a;i++){
            if(a%i==0){
                return 0; 
            }   
        }
     return 1;
}
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int p=prime(n);
    if(p==1){
        printf("given number is not prime number...!\n");
    }
    else{
        printf("given number is prime number...!\n");
    }
   return 0;

}