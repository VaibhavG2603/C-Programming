# include<stdio.h>
int interval(int x,int y){
    if(x<2){
        x=2;
    }
      for(int i=x;i<=y;i++){
        int count=0;
        for(int j=1;j<=i;j++){
            if(i%j==0){
                count++;
            }
        } 
         if(count==2){
                printf("%d\n",i);
          }      
      }
}
int main(){
   int start , end;
   printf("Enter the Starting and Ending Number:\n ");
   scanf("%d %d",&start,&end);
   interval(start,end);
  
   return 0;
}