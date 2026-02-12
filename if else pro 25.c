#include<stdio.h>
int main() 
{
    
    int a,b,c;
    scanf("%d%d%d",&c,&a,&b);
    switch (c){
    case 1 :
        printf("result=%d",a+b);
        break;
    case 2:
        printf("result=%d" ,a-b);
        break;
    case 3:
        printf("result=%d",a*b);
        break;
    case 4:
    printf("result=%d",a/b);
    break;
    default:
 
    return 0;
}
}