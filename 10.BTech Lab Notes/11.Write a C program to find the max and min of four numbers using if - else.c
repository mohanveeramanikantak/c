//Write a C program to find the max and min of four numbers using ifelse.
#include <stdio.h>
int main()
{
 int a, b, c, d;
 printf("Enter First Number : ");
 scanf("%d", &a);
 printf("Enter Second Number : ");
 scanf("%d", &b);
 printf("Enter Third Number : ");
 scanf("%d", &c);
 printf("Enter Fourth Number : ");
 scanf("%d", &d);
 int max = a, min = a;
 if (b > max) max = b;
 if (c > max) max = c;
 if (d > max) max = d;
 if (b < min) min = b;
 if (c < min) min = c;
 if (d < min) min = d;
 printf("Max is %d and Min is %d\n", max, min);
 return 0;
}
