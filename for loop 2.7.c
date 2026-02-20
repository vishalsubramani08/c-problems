#include<stdio.h>
int main(){
     int c=0 ,a,b ;
     int count=0;
     scanf("%d",&a);
  for( int i =0;i<a;i++){
    scanf("%d",&b);
    c=c+b;
    if (b>50)
    count++;
}
printf("total rainfall:%d\n",c);
printf( "heavy rain days:%d",count);
return 0;
}


