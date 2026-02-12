#include <stdio.h>
int main (){
int units, v, s;                    
scanf("%d",&units);
 if ( units>=50&& units<=100){
    v=units*3;
    printf("bill amount =rs.%d",v);
    
}
 else if (units>=100&& units<=500){
    s=units*5;
    printf("bill amount =rs.%d",s);
}
return 0;
}