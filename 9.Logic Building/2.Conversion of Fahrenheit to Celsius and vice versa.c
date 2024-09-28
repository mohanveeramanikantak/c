//Conversion of Fahrenheit to Celsius and vice versa
#include <stdio.h>
int main() 
{
 // Declare variables
 float temperature;
 char choice;
 // Menu for conversion selection
 printf("Choose conversion:\n");
 printf("1. Fahrenheit to Celsius\n");
 printf("2. Celsius to Fahrenheit\n");
 printf("Enter choice (1 or 2): ");
 scanf(" %c", &choice);
 // Input temperature
 printf("Enter temperature: ");
 scanf("%f", &temperature);
 // Perform conversion based on user choice
 switch (choice)
  {
	 case '1':
 	// Fahrenheit to Celsius conversion
 	temperature = (temperature - 32) * 5 / 9;
	 printf("Converted temperature: %.2f Celsius\n", temperature);
 	break;
 	case '2':
 	// Celsius to Fahrenheit conversion
 	temperature = (temperature * 9 / 5) + 32;
 	printf("Converted temperature: %.2f Fahrenheit\n", temperature);
	 break;
 	default:
	 printf("Invalid choice\n");
	
 }
}
