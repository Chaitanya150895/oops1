#include<stdio.h>
#include<math.h>

int areaTriangle(int, int, int, int, int);

int main()
{
	int a, b, c, s, area;
	
	printf("Enter the 3 sides of triangle");
	scanf("%d%d%d", &a, &b, &c);
	
	areaTriangle(a, b, c, s, area);
	
	return 0;
}

int areaTriangle(int a, int b, int c, int s, int area)
{
	s = (a + b + c) / 2;
	
	area = sqrt(s*(s - a)*(s - b)*(s - c));
	printf("the area of triangle is %d", area);
	
	return 0;
}
