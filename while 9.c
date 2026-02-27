#include <stdio.h>

int main() {
int a,b,c,e=0;
int d=0;
int count=0;
scanf("%d",&a);
scanf("%d",&b);
while(b>0){
    scanf("%d",&c);
    d=d+c;
    if(d<=a){
        count++;
    }
    if (d>a){
        break;
    }
    b--;
}
e=d-a;
printf(" completed tripes:%d\n",count);
printf("remaning fules:%d",e);

    return 0;
}