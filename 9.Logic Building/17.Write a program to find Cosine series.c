#include<stdio.h>
int main()
{
	int i,n,temp=1;
	float x,deg,nr,dr,term,sum=0;
	printf("Enter x value in degrees: ");
	scanf("%f",&deg);
	printf("Enter n value: ");
	scanf("%d",&n);
	x=deg*3.14159/180;
	nr=1;
	dr=1;
	sum=1;
	for(i=2;i<=n;i++)
	{
		nr=nr*x*x;
		dr=dr*(i*2-3)*(i*2-2);
		temp=temp*(-1);
		term=nr/dr*temp;
		sum=sum+term;
	}
	printf("cos(%f): %f",deg,sum);
}
