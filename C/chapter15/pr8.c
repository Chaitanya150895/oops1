#include<stdio.h>
int main()
{
	char str1[] = "Hello";
	char *p = "Hello";
	//str1 = "Bye";//err
	p = "Bye";//works
}