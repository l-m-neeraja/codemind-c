#include<stdio.h>
int search(int *arr,int sum,int n){
    int y;
    for(int i=0;i<n;i++){
        if(arr[i]==sum/n){
            y = 1;
            break;
        }
        else{
            y = 0;
        }
    }
    return y;
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int y=search(arr,sum,n);
    if(y==1){
        printf("True");
    }
    else{
        printf("False");
    }
}