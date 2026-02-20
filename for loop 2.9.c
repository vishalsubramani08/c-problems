#include<stdio.h>
int main(){
     int c=0 ,a,b ;
     int count=0;
     scanf("%d",&a);
  for( int i =0;i<a;i++){
    scanf("%d",&b);
    c=c+b;
    if (b<40)
    count++;
}
   c=c/a;
printf("average:%d\n",c);
printf( "failed subjects:%d",count);
return 0;
}


