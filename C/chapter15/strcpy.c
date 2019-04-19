#include<stdio.h>
#include<stdlib.h>

int main()
{
	char original[] ="ORIGINAL";
	char copy[10];

	strcpy(original, copy);

	printf("\n%s", original);
	printf("\n%s", copy);
	
	return 0;
}