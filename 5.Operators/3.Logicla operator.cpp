//Logicla operator
#include<stdio.h>
int main()
{
	int a=5,b=10;
	printf("\n A less than b and and a grater than b : %d",a<b && a>b);
	printf("\n A less than b or or  a grater than b : %d",a<b || a>b);
	printf("\n not A less than b and and a grater than b : %d",!(a<b && a>b));
	return 0;
}
