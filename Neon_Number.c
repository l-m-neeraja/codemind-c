#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int x=n*n;
    int sum=0;
    for(int i=x;i>0;i/=10){
        int y=i%10;
        sum+=y;
    }
    if(sum==n){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
}