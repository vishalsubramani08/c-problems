#include <stdio.h>
int main() { 
int n,gb,dd;
int day=0;
int exhaustedDay =-1;
int overused =1;
scanf("%d",&gb);
scanf("%d",&n);
while(day<n){
    scanf("%d",&dd);
    day++;
        gb -=dd;
        if (gb < 0 && exhaustedDay==-1){
            exhaustedDay=day;
            overused=-gb;
        }
    }
    if(exhaustedDay ==-1){
        printf("Exahausted Day :Not Exhausted\n");
        printf("overused Data:0\n");
    }
    else{
        printf("Exhausted day :%d\n",exhaustedDay);
        printf("overused Dta:%d\n", overused);
    }
return 0;
}