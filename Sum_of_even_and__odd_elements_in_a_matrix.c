#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    int a=0,b=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]%2==0){
               a+=mat[i][j]; 
            }
            else if(mat[i][j]%2!=0){
                b+=mat[i][j];
            }
        }
    }
    printf("%d %d",a,b);
}