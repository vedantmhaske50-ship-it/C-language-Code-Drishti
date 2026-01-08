#include<stdio.h>

     int main(){
        int l,b,rec;
        printf("Enter Length : ");
        scanf("%d",&l);
        printf("Enter Breath : ");
        scanf("%d",&b);

        rec=l*b;
        printf("Area Of Rectangle : %d",rec);

        return 0;
     }