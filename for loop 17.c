#include <stdio.h>

int main() {
    int a,c=0, f=1, sum=0;
    scanf("%d",&a);
     int temp=a;
    for( int i=1;a>0;a=a/10){
        c=a%10;
        for( int j=1;j<=c;j++){
            f*=j;
        }
        sum+=f;
        f=1;
    }
    if (temp==sum)
    printf("strong number");
    else 
    printf("not a strong number");
    
    return 0;
    
}