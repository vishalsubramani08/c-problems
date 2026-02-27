
#include <stdio.h>
int main() {
    int a,b,c,d=0;
    int count=0;
    scanf("%d%d" ,&a,&b);
    while(a>0)
{
    scanf("%d",&c);
    b=b+c;
    if(b<2000)
    count++;
    
    a--;
}
printf("final balanc:%d\n",b);
printf("low balance days:%d",count);

    return 0;
}