// Find compound interest.
#include <stdio.h>
#include <math.h>
int main()
{
 // Declare variables
 float principal, rate, time, compoundInterest;
 // Input principal amount, rate, and time
 printf("Enter principal amount: ");
 scanf("%f", &principal);
 printf("Enter annual interest rate (in percentage): ");
 scanf("%f", &rate);
 printf("Enter time (in years): ");
 scanf("%f", &time);
 // Calculate compound interest
 compoundInterest = principal * pow(1 + rate / 100, time) - principal;
 // Display the result
 printf("Compound Interest: %.2f\n", compoundInterest);
 return 0;
}

