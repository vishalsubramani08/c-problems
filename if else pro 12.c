#include <stdio.h>
int main() {
int grade;
scanf ("%d",&grade);
if (grade>100||grade<0){
printf("invalid input");
}
else if (grade >=90){
    printf("grade A");
    
}

else if (grade>=75 ){
    printf("grade B");
}
else {
    printf("grade c");
}
    return 0;
}