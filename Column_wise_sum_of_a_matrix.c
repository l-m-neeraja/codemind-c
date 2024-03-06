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
    int sum;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
          sum+=mat[i][j];
        }
        printf("%d ",sum);
        sum=0;
    }
}