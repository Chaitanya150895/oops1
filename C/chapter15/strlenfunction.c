#include<stdio.h>

int main()
{
	char str[] = ("To find the length of this");
	int i;
	for (i =0 ; str[i] !='\0'; i++ )
	{
	    i = i+1;
	}
	
	//len1 = strlen(str);
	printf("\nstring = %slength = %d ", str,i);
	
	return 0;
}