#include<stdio.h>

int leapYear(int, int);

int main()
{
	int y, z;
	printf("Enter the the Year");
	scanf("%d",&y);

	leapYear(y,z);

	return 0;
}



int leapYear(int y, int z)

{	
	z = y % 4;

	if(z == 0)
	{
		printf("%d is a leap year",y);
	}
	else
	{
		printf("%d is a not leap year",y);
	}
	
}
