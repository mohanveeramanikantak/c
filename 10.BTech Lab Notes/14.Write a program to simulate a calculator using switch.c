#include<stdio.h>
int main()
{
  	int a,b;
  	char ch;
  	printf("***Simple Calculator***\n");
  	printf("+ ---> Addition \n");
 	printf("- ---> Subtraction \n");
  	printf("* ---> Multiplication \n");
  	printf("/ ---> Division \n");
	printf("Enter your choice: ");
	scanf("%c",&ch);
	printf("Enter any two numbers: ");
	scanf("%d%d",&a,&b);
	switch(ch)
	{
		case '+': printf("a+b: %d",a+b);
		break;
		case '-': printf("a-b: %d",a-b);
		break;
		case '*': printf("a*b: %d",a*b);
		break;
		case '/': printf("a/b: %d",a/b);
		break;
		default: printf("Invalid choice.");
		break;
	}
}
