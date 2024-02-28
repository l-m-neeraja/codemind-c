#include<stdio.h>
int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    int k;
    if(m<n&&n%m==0){
        k=n;
    }
    else if(n<m&&m%n==0){
        k=m;
    }
    else{
        k=m*n;
    }
    printf("%d",k);
}