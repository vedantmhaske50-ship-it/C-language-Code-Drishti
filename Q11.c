#include<stdio.h>

   int main(){
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);

    if(n%5==0){
        printf("The Given Number Is Divisible By 5.");
    }
    else if(n%5!=0){
        printf("The Given Number Is Not Divisible By 5.");
    }
    else{
        printf("Not A Valid Number.");
    }
    return 0;
   }