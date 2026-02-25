#include<stdio.h>

     int main(){
        int a,b,c;

        printf("Enter First Number : ");
        scanf("%d",&a);
        printf("Enter Second Number : ");
        scanf("%d",&b);
        printf("Enter Third Number : ");
        scanf("%d",&c);

        if(a>b && a>c){
            printf("%d Is Grater Than %d and %d.",a,b,c);
        }
        else if(b>a && b>c){
            printf("%d is Grater Than %d and %d.",b,a,c);
        }
        else if(c>a && c>b){
            printf("%d Is Grater Than %d and %d.",c,a,b);
        }
        else {
            printf("Thank you!!");
        }
        return 0;
     }