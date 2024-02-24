#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            x=0;
            break;
        }
        else{
            x=1;
        }
    }
    if(x==1){
        printf("True");
    }
    else{
        printf("False");
    }
}