#include<stdio.h>
int main()
{
	int a = 0;
	char str1[100], str2[100];

	printf("Enter a string");
	gets(str1);

	for(;a =! '\0'; a++)
	{
		str2[a] = str1[a];
	}
	 str2[a] = '\0';
	printf("After copying, the string: %s\n", str2);
}