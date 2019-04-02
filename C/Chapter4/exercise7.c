#include<stdio.h>
int main()
{
	int y, z;
	printf("Enter the the Year");
	scanf("%d",&y);
	
	z = y % 4;
	
	if(z == 0)
	{
		printf("%d is a leap year",y);
	}
	else
	{
		printf("%d is a not leap year",y);
	}
		
	return 0;
}
