#include <stdio.h>
int main() { 
int max, n, weight,sum=0,count=0;
scanf("%d",&max);
scanf("%d",&n);
while(n>0){
    scanf("%d",& weight);
if(sum+weight<=max){
    sum+=weight;
    count++;
}
else{
    sum+=weight;
}
    n--;
}
    printf("people enterted:%d\n",count);
    if (sum>max){
        printf("overload status:yes\n");
    }
    else{
    printf(" overload status:No\n");
    }
}