#include<stdio.h>

int factorial (int, int, int);

int main()
{
	int f=1, i, n;
	
    factorial (f, i, n);
    
	return 0;
}

int factorial(int f, int i, int n)
{
	printf("Enter any number:\n");
    scanf("%d",&n);
	
	for(i=n; i>=1; i--)
	{
        f = f * i;
	}
	
	printf ("factorial of %d is %d",n,f);
	
}
