#include<stdio.h>


void strcat(char*, char*);

int main()
{
	char str1[30];
	char str2[10];

	printf("Enter the string\n");
	scanf("%s", str1);

	printf("Enter the string\n");
	scanf("%s", str2);

	strcat(str1, str2);

	printf("After concatenation %s\n", str1);
	return 0;
}

void strcat(char* str1, char* str2)
{
	int i, j;
	
	for(i=0; str1[i] !='\0'; i++)
	{
		;
	}

	for(j=0; str2[j] !='\0'; j++)
	{
		str1[i] = str2[j];	
		i++;
	}
	
}
