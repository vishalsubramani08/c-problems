#include<stdio.h>
int main(){
    int r,c, count =0 ;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int i,j,k;
    for ( i=0;i<r;i++){
        for( j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for ( i=0;i<r;i++){
        int min=arr[i][0];
        int col =0;
        for (j=1;j<c;j++){
            if (arr[i][j] <min){
                min=arr[i][j];
                col=j;
            }
        }
        int isSaddle =1;
        for (k=0;k<r;k++){
            if(arr[k][col]>min){
                isSaddle=0;
                break;
            }
        }
        if (isSaddle){
            count++;
        }
            }
        printf("%d",count);
        return 0;
}
