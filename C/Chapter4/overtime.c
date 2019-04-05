#include <stdio.h>

int main()
{
	int emp=10,hrs,ot=0;

	printf("Enter the number of extra hours worked");
	scanf ("%d", &hrs);
	
	if (hrs<=40)
	{
		printf("no overtime");
	}

	else
	{
			ot = (ot + 12)*emp;
			printf("%d",ot);
		

	}
	
	return 0;
}