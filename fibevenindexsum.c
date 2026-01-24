# include <stdio.h>

int main(){
    int n,a=0,b=1,sum=0,i,c;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(i==0){
            sum +=a;
        }
        else if(i==1){
            if(i%2==0){
                sum+=b;
            }
        }
        else{
            c=a+b;
            a=b;
            b=c;
            if(i%2==0){
                sum+=c;
            }
        }
    }
    printf("sum is %d",sum);
    return 0;
}