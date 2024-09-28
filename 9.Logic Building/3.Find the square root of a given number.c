//Find the square root of a given number
#include <stdio.h>
#include <math.h>
int main()
{
 // Declare variables
 double number, squareRoot;
 // Input the number
 printf("Enter a number: ");
 scanf("%lf", &number);
 // Check for negative input
 if (number < 0) 
{
 printf("Square root is not defined for negative numbers.\n");
 } 
else 
{
 // Calculate square root
 squareRoot = sqrt(number);
 // Display the result
 printf("Square root of %.2lf is %.2lf\n", number, squareRoot);
 }
 return 0;
}

