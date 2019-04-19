#include<stdio.h>
#include<string.h>

int main()
{
	char str1[] ="ORIGINAL";
	char str2[10];

	strcpy(str2, str1);

	printf("\n%s", str1);
	printf("\n%s", str2);
	
	return 0;
}