#include<stdio.h>
int main(){
    int  b,c;
    int sum=0;
    scanf("%d",&b);
    for ( int i=1;i<=b;i++){
      scanf("%d",&c);
     sum+=c;
    }
    printf("%d",sum);
    return 0;
}
