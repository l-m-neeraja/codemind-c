#include<stdio.h>
int count(int *arr,int n,int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
    }
    return count;
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
    int res = count(arr,n,key);
    printf("%d",res);
}