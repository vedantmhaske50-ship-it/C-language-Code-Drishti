#include<stdio.h>

  int main(){
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);

    if(n>0){
        printf("The Given Number Is Positive");
    }
    else if(n<0){
        printf("The Given Number Is Negative");
    }
    else{
        printf("Not A Valid Number");
    }
  }