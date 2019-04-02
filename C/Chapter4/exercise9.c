#include <stdio.h>
int main()
{
	int a, b, c;
	
	printf("Enter the 3 sides of the triangle");
	scanf("%d%d%d", &a, &b, &c);
	
	if (a>b && a>c)
		{ 
		if (a < c+b)
		printf("The triangle is valid");
		}
		
	else if (b>a && b>c)
		{ 
		if (b < c+a)
		printf("The triangle is valid");
		}
		
	else if (c>b && c>a)
		{ 
		if (c < a+b)
		printf("The triangle is valid");
		}
		
	else
		{
		printf("The triangle is not valid");
		
		}
	
		return 0;	
			
}
