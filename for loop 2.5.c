#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    for ( int i=1;i<=b;i++){
      scanf("%d",&c);
      a=a-c;
    }
    printf("%d",a);
    return 0;
}