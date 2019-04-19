#include<stdio.h>
int main()
{
	char str1[] = "Hello";
	char str2[10];
	char *s = "Good Morning";
	char *q;
	//str2 = str1;//err
	q = s; //works
	return 0;

}