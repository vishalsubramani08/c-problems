#include <stdio.h>

int main() {

    char a;
    scanf("%c",&a);
    if(a>=48 && a<=57){
        printf("digits");
    }
else if ((a>=65&& a<=122)){
    printf("alphabet");
}
else{
     printf("special character");
 }    
    return 0;
}