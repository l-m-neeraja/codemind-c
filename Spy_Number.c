#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sum=0,product=1;
    for(int i=n;i>0;i/=10){
        int x=i%10;
        sum+=x;
    }
    for(int i=n;i>0;i/=10){
        int x=i%10;
        product*=x;
    }
    if(sum==product){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
}