#include<stdio.h>

int power (int, int, int, int);

int main()
{
	int i,a,b,c=1;
	
	printf("Enter two numbers : ");
	scanf("%d%d",&a,&b);
	
	power (i, a, b, c);
	
	
	
	return 0;
}

int power (int i, int a, int b, int c)
{
	
for(i=1; i<=b; i++)
	{
		c = c * a; 
	}
	printf("%d to the power %d is %d", a, b, c);
}
