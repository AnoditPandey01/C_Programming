/*Sum of Natural Numbers: Given a positive integer n, write a program 
to calculate and return the sum of natural numbers up to n using loops. 
*/

#include<stdio.h>
int main(){

int n, i ,sum;

printf("Enter number :\n");
scanf("%d" , &n);

for(i=1 ; i<=n ; i++)
{
    sum+=i;
}
printf("the sum of natural number is: %d" , sum);
 return 0;
}