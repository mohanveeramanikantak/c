//8.3
#include <stdio.h>
int main() 
{
 int i, J;
 printf("Enter a number : ",i);
 scanf("%d",&i);
 J = (i++) + (++i);
 printf("Result: %d\n", J);
 return 0;
}
