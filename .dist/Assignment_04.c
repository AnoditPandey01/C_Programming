/*Check Even or Odd Number: Write a program that takes n
 as user input and determines if it is even or odd. 
*/

#include<Stdio.h>
int main(){
int n;
printf("Enter number :");
scanf("%d" , &n );

if(n%2==0)
{
    printf("The number is even");
}

else
{
    printf("the number is odd");
}
    return 0;
}