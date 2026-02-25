#include<stdio.h>
  
 int main(){
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);

    if(n>100){
        printf("%d Is Grater Than 100",n);
    }
    else if(n<100){
        printf("%d Is Less than 100",n);
    }
    else{
        printf("Not A Number.");
    }
    return 0;

 }