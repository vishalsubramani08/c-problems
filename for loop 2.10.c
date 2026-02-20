#include<stdio.h>
int main(){
     int c=0 ,a,b ;
     int count=0;
     scanf("%d",&a);
  for( int i =0;i<a;i++){
    scanf("%d",&b);
    c=c+b;
    if (b>2)
    count++;
}
printf(" total data:%d\n",c);
printf( "high usage data:%d",count);
return 0;
}


