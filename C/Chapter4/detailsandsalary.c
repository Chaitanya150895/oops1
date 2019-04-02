#include<stdio.h>
int main()
{

char g;
int y, q, s;

printf("Enter Gender, Years of services, Qualification of the Employee");
scanf("%c%d%d", &g, &y, &q);

if (g=='m')
{
	if(y>=10)
	{
		if(q=='pg')
		s = 15000;
		else
		s = 10000;
	}
	else
	{
		if(q=='pg')
		s = 10000;
		else
		s = 7000;
	}
}

else
{
	if(y>=10)
	{
		if(q=='pg')
		s = 12000;
		else
		s = 9000;
	}
	else
	{
		if(q=='pg')
		s = 9000;
		else
		s = 6000;
	}
}

printf("Salary of the Employee = %d", s);

return 0;
}
