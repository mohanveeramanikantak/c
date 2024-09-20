/*Assingnment operator*/
#include<stdio.h>
int main()
{
	int a=5,b=10;
	
	a+=b; // a=a+b
	printf("\n a+b is : %d",a);
	
	a-=b; // a=a-b
	printf("\n a-b is : %d",a);
	
	a*=b; // a=a*b
	printf("\n a*b is : %d",a);
	
	a /=b; // a=a/b
	printf("\n a/b is : %d",a);
	
	a %=b; // a=a%b
	printf("\n a%b is : %d",a);
	
	a &=b; // a=a&b
	printf("\n a&b is : %d",a);
	
	a |=b; // a=a|b
	printf("\n a|b is : %d",a);
	return 0;
}
	
