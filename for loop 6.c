// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a,pro=1;
   scanf("%d",&a);
   for(int i=1;i<=a;i++){
       pro*=i;
     
   }
           printf("%d ",pro);

    return 0;
}