#include<stdio.h>
int main()
{
    int a, next=0;
    scanf("%d",&a);
    int first=0;
    int second=1;
for(int i=1;i<=a;i++){
    printf("%d",first);
    next= first+second; 
    first= second ;
    second= next;
}
return 0;
}