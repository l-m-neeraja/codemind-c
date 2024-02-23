#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            x+=arr[i];
        }
        else{
            y+=arr[i];
        }
    }
    if(x>y){
        printf("%d",x-y);
    }
    else{
        printf("%d",y-x);
    }
}