#include<stdio.h>
int main ()
{
	int hardness, ts;
	float cc;
	
	printf("Enter Hardness, carbon content, tensile strength");
	scanf ("%d%f%d", &hardness, &cc, &ts);
	
	if (hardness >50 && cc>0.7 && ts>5600)
	printf("the grade is 10");
	
	else if ((hardness >50 && cc>0.7))
	printf("the grade is 9");

	else if ((cc>0.7 && ts>5600))
	printf("the grade is 8");

	else if ((hardness >50 && ts>5600))
	printf("the grade is 7");
	
	else if ((hardness >50 || cc>0.7 || ts>5600))
	printf("the grade is 6");
	
	else
	printf("the grade is 5");

return 0;
}

