# include<stdio.h>
int primecheck(int x){
    if(x<2){ 
        return 0;
    }
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            return 0;
        }
    }
  return 1;
}

int main(){
    int N ,found=0;
    printf("Enter the NUmber:\n");
    scanf("%d",&N);
   for(int i = 2; i <= N/2; i++)
    {
        if(primecheck(i) && primecheck(N - i))
        {
            printf("Yes, %d = %d + %d\n", N, i, N - i);
            found = 1;
            break;
        }
    }

    if(!found)
        printf("No, it cannot be expressed as sum of two prime numbers\n");

   
return 0;
}