#include<stdio.h>
#include<math.h>

void areaTriangle(int *);

int main()
{
	int area;
	
	areaTriangle(&area);
	printf("the area of triangle is %d\n", area);
	
	return 0;
}

void areaTriangle(int *area)
{
	int a, b, c, s;
	printf("Enter the 3 sides of triangle");
	scanf("%d%d%d", &a, &b, &c);
	s = (a + b + c) / 2;
	
	*area = sqrt(s*(s - a)*(s - b)*(s - c));

	/*
	return 0;
	*/
}
