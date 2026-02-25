#include<stdio.h>

   int main(){
    int amount,rate,time,SI;
    printf("Enter Amount : ");
    scanf("%d",&amount);
    printf("Enter Rate : ");
    scanf("%d",&rate);
    printf("Enter Time : ");
    scanf("%d",&time);

    SI=((amount*rate*time)/100);
    printf("Simple Interest Is : %d",SI);

   }