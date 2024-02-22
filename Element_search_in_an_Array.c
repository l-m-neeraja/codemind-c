#include<stdio.h>
int search(int *arr,int n,int key){
    int y;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            y=1;
            break;
        }
        else{
            y=0;
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
    int x;
    scanf("%d",&x);
    int res=search(arr,n,x);
    if(res==1){
        printf("True");
    }
    else{
        printf("False");
    }
}