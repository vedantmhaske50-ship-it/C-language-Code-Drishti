#include<stdio.h>
  
  int main(){
    float f,c,k;

    printf("Enter Temperature In Fahrenheit : ");
    scanf("%d",&f);
    
    c=(5.0/9.0)*(f-32);
    k=c+273.15;

    printf("In Celsius = %f\n",c);
    printf("Kelvin = %f",k);

    return 0;
  }