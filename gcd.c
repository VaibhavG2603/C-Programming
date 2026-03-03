# include<stdio.h>
int rec_gcd(int a,int b){
    if(b==0){
        return a;
    }
    else{
        return rec_gcd(b,a%b);
    }
}
int main(){
    int a,b;
    printf("Enter a and b:\n");
    scanf("%d %d",&a,&b);
    int gcd=rec_gcd(a,b);
    printf("gcd is %d",gcd);
    return 0;
}