// Evaluate the following expressions. 
#include <stdio.h>
int main() 
{
 // Declare variables
 int A, B, result;
 // Input values for A and B
 printf("Enter values for A and B: ");
 scanf("%d %d", &A, &B);
 // Evaluate the expression
 result = A++ + B-- - A;
 // Display the result
 printf("Result of the expression: %d\n", result);
 return 0;
}

