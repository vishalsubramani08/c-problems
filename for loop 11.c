



#include <stdio.h>
int main() {
    int a,b,c=0;
     scanf("%d",&a);
for (;a!=0;a/=10){
    b=a%10;
    c=c+b;
}         
printf("%d",c);
return 0;
     }