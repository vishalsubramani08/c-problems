
#include <stdio.h>
int main() {
    int a,b;
    int c=0,d=0;
    scanf("%d" ,&a);
    while(a>0){
    scanf("%d" ,&b);
    if(b==0){
        c++;
    }
      else  if(b==1){
            d++;
        }

    a--;
}
printf(" successful:%d\n",d);
printf("cancelled:%d\n",c);
 if(c>3){
     printf("status:risk");
 }
 else
 printf("status: safe");
 
    return 0;
}