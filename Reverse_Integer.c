#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int rev=0;
    if(n>0){
    for(int i=n;i>0;i/=10){
        int x=i%10;
        rev=rev*10+x;
    }
    printf("%d",rev);
    }
    if(n<0){
        n=n*(-1);
        for(int i=n;i>0;i/=10){
            int x=i%10;
             rev=rev*10+x;
        }
    printf("%d",rev*-1);
    }
}