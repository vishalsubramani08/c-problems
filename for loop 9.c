#include<stdio.h>
int main(){
    int a;
    
    
 scanf("%d",&a);
 int count=0;
 for(int i=1;a!=0;a=a/10){
     count++;
 }
 printf("%d",count);
return 0;
} 
 
