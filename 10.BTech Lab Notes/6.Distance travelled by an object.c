//Distance travelled by an object
#include <stdio.h>
int main() 
{
 // Declare variables
 float initialVelocity, time, acceleration, distance;
 // Input initial velocity, time, and acceleration
 printf("Enter initial velocity: ");
 scanf("%f", &initialVelocity);
 printf("Enter time: ");
 scanf("%f", &time);
 printf("Enter acceleration: ");
 scanf("%f", &acceleration);
 // Calculate distance
 distance = initialVelocity * time + 0.5 * acceleration * time * time;
 // Display the result
 printf("Distance traveled: %.2f\n", distance);
 return 0;
}

