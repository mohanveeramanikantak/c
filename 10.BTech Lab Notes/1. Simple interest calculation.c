//Simple interest calculation
#include <stdio.h>
int main()
{
 // Declare variables
 float principal, rate, time, simpleInterest;
 // Input principal amount, rate, and time
 printf("Enter principal amount: ");
 scanf("%f", &principal);
 printf("Enter annual interest rate (in percentage): ");
 scanf("%f", &rate);
 printf("Enter time (in years): ");
 scanf("%f", &time);
 // Calculate simple interest
 simpleInterest = (principal * rate * time) / 100;
 // Display the result
 printf("Simple Interest: %.2f\n", simpleInterest);
 return 0;
}

