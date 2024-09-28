//Write a C program to generate electricity bill
#include <stdio.h>
int main() 
{
 // Declare variables
 float units, totalBill;
 // Input the consumed units
 printf("Enter the consumed units: ");
 scanf("%f", &units);
 // Calculate total bill based on a simple example tariff rate
 if (units <= 50) {
 totalBill = units * 0.50; // Rs. 0.50 per unit for the first 50 units
 } else if (units <= 150) {
 totalBill = 50 * 0.50 + (units - 50) * 0.75; // Rs. 0.75 per unit for units beyond 50 up to 150
 } else if (units <= 250) {
 totalBill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20; // Rs. 1.20 per unit for units beyond 150 up to 250
 } else {
 totalBill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50; // Rs. 1.50 per unit for units beyond 250
 }
 // Additional charges or taxes can be added here
 // Display the total bill
 printf("Total Electricity Bill: Rs. %.2f\n", totalBill);
 return 0;
}
