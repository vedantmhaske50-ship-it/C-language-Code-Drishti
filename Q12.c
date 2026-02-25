#include<stdio.h>

    int main(){
        int year;
        printf("Enter Year : ");
        scanf("%d",&year);

        if((year%4==0 && year%100!=0) || (year%400==0)){
            printf("The Given Year Is Leap Year.");
        }
        else{
            printf("Not A Leap Year.");
        }
        return 0;
    }