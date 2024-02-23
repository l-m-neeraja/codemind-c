#include<stdio.h>
int search(int *arr,int n,int x){
    int y;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
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
    int key;
    scanf("%d",&key);
    int res = search(arr,n,key);
    if(res==1){
        printf("True");
    }
    else{
        printf("False");
    }
}