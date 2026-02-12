#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a%3==0 && a%7==0)
    printf("multiple by 3 and 7");
    else    
    printf("not multiple by 3 and 7");
    return 0;
}