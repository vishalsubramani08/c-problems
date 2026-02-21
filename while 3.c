#include <stdio.h>
int main() {
    int a,b,c,d=0,e=0;
    int count=0;
    scanf("%d" ,&a);
    scanf("%d" ,&b);
    while(b>0)
{
    scanf("%d",&c);
    d=d+c;
    if(b<=a)
    count++;
    if (d>a)
    break;
    b--;
}
printf("days  used :%d\n",count);
if(a<d){
printf("remaning data =0GB");
}
else
printf("remaning data :%",a-d);

    return 0;
}