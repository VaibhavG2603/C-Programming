# include<stdio.h>
# include<math.h>

int main(){
    int num,temp,digit,sum,digits;
    for(int i=1;i<=1000;i++){
        num=i;
        temp=num;
        digits=0;
        sum=0;
        while(temp!=0){
            digits++;
            temp=temp/10;
        }
        temp=num;

        while (temp!=0)
        {
            digit=temp%10;
            sum=sum+pow(digit,digits);
            temp=temp/10;
        }

       if(sum==num){
        printf("%d ",num);
       }
        
    }
     return 0;
}