//Write a program that uses two functions to convert temperature from Celsius to Fahrenheit and vice versa, respectively and return the converted values.//
#include<stdio.h>
int main(){
    float f, c;
    printf("Enter temp in (f):\n");
    scanf("%f" , &f);

    c = (f-32.0)*(5.0/9.0);
    printf("The temp in (c) is :%.2f\n" , c);
 
 return 0;
}