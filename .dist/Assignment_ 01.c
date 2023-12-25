//Simple Interest Calculation: Write a program that uses a function tocalculate and return simple interest with given principal, rate, and time//

#include
<stdio.h>
int main(){
   
 int p,t,r ; 
 printf("Enter Principle amount :\n" );  
 scanf("%d" , &p);

 printf("Enter Time period :\n"); 
 scanf("%d" , &t); 

 printf("Enter Rate of interst:\n" );  
 scanf("%d" , &r);
  
  int S_I =(p*t*r)/100;
  printf("The S.I is :%d\n", S_I );

return 0;
}