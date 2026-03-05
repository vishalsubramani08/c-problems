#include<stdio.h>
int main(){
    int a,min=-1,i;
    scanf("%d",&a);
    int arr[a];
for ( int i=0;i<a;i++)
    scanf("%d",&arr[i]);
for (i=0;i<a;i++){
    if (arr[i]>0){
        if (min==-1|| arr[i] < min)
        min=arr[i];
    }
}    
if(min==-1)
printf("No positive");
else
printf("%d",min);
return 0;
}
