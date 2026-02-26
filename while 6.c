#include <stdio.h>
int main() 
{
    int a,b,c;
    int count =0;
    int d=0;
    scanf("%d",&a);
     scanf("%d",&b);
    while(b>0){
        scanf("%d",&c);
        d=d+c;
        if (d<=a){
    count++;
} 
b--;
}
printf("passenger Alloweded:%d\n", count);
if (d>=a){
    printf("over loaded :yes");
}
else
printf("over loaded:no");
return 0;
}