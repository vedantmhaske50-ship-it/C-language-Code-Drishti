#include<stdio.h>

         int main(){
            float h,b,area;
            printf("Enter Height : ");
            scanf("%f",&h);
            printf("Enter Base : ");
            scanf("%f",&b);

            area=0.5*h*b;
            printf("Area Of Triangle : %f",area);

            return 0;
         }