/* Find the maximum of three numbers using conditional operato4*/
#include <stdio.h>
int main() 
{
 // Declare variables
 int num1, num2, num3, max;
 // Input values for num1, num2, and num3
 printf("Enter three numbers: ");
 scanf("%d %d %d", &num1, &num2, &num3);
 // Find the maximum using the conditional operator
 max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > 
num3) ? num2 : num3);
 // Display the result
 printf("Maximum number: %d\n", max);
 return 0;
}

