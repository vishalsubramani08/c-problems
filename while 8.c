#include <stdio.h>
int main() 
{
    int a,b;
    int c=0;
    int d=0;
    scanf("%d",&a);
     while(a>0){
     scanf("%d",&b);
     if (b==0){
        c++;
        if (c>d){
    d=c;
} 
}
else
c=0;
a--;
}
printf("longest default streak:%d\n",d);
return 0;
}