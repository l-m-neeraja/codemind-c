#include<stdio.h>
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
    int avg=sum/n;
    int res=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=avg){
            res++;
        }
    }
    printf("%d",res);
}