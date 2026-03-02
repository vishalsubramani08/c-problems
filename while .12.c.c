#include <stdio.h>

int main() { 
int n,km,max=0, count=0;
scanf("%d",&n);
while(n>0){
    scanf("%d",&km);
    if(km>max){
        max=km;
    }
    if(km>5){
        count++;
    }
    n--;
}
printf("Max usage:%d\n",max);
printf("surge hours:%d",count);
return 0;
}