#include <stdio.h>
int main() {
int  capacity,n,hours, count=0,counts=0;
scanf("%d",&capacity);
scanf("%d",&n);
while (n>=1){
    scanf("%d",& hours);
    if (capacity>hours){
        count++;
    }
    if (capacity<hours){
        counts++;
            }
    n--;
}
printf("safe hours:%d\n",count);
printf("failure count:%d\n",counts);
return 0;
}