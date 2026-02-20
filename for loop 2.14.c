#include<stdio.h>
int main(){
     int c=0 ,a,b ;
     int count=0;
     scanf("%d",&a);
  for( int i =0;i<a;i++){
    scanf("%d",&b);
     c=c+b;
    if (b>50000)
    count++;
}
printf("total revenue:%d\n",c);
printf( "  target days:%d",count);
return 0;
}