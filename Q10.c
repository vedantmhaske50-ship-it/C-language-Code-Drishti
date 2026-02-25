#include<stdio.h>
   
  int main(){
    int n;
    printf("Enter A Nunber : ");
    scanf("%d",&n);

    if(n%2==0){
        printf("The Given Number Is Even.");
    }
    else if(n%2!=0){
        printf("The Given Number Is Odd.");
    }
    else{
        printf("Not A Valid Number.");
    }
    return 0;
  }