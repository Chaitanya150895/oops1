
#include<stdio.h>
int main()
{
	char name[25];
	printf("Enter your name");
	scanf("%[^\n]s", name);
	printf("Hello %s!", name);
	//gets(name);
	//puts("Hello!");
	//puts(name);
	return 0;
}