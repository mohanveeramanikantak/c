//Area of a triangle using heron’s formulae.
#include <stdio.h>
#include <math.h>
int main() 
{
 // Declare variables
 float side1, side2, side3, semiPerimeter, area;
 // Input the lengths of the sides
 printf("Enter the length of side 1: ");
 scanf("%f", &side1);
 printf("Enter the length of side 2: ");
 scanf("%f", &side2);
 printf("Enter the length of side 3: ");
 scanf("%f", &side3);
 // Calculate semi-perimeter
 semiPerimeter = (side1 + side2 + side3) / 2;
 // Calculate area using Heron's formula
 area = sqrt(semiPerimeter * (semiPerimeter - side1) * (semiPerimeter - side2) * (semiPerimeter -
side3));
 // Display the result
 printf("Area of the triangle: %.2f\n", area);
 return 0;
}
