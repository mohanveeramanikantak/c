// Evaluate the following expressions. 
#include <stdio.h>
int main() 
{
 // Declare variables
 float A, B, C, D, result;
 // Input values for A, B, C, D
 printf("Enter values for A, B, C, D: ");
 scanf("%f %f %f %f", &A, &B, &C, &D);
 // Evaluate the expression
 result = (A / B) * C - B + (A * D) / 3;
 // Display the result
 printf("Result of the expression: %.2f\n", result);
 return 0;
}
