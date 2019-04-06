
#include<stdio.h>
int main()
{
	char ch;
	
	printf("Enter any one of the alphabet a, b, c");
	scanf("%c",&ch);
	
	switch (ch)
	{
		case 'a':
		case 'A':
			printf("i'm in case a,A\n");
			break;
			
		case 'b':
		case 'B':
			printf("i'm in case b,B\n");
			break;
		
		case 'c':
		case 'C':
			printf("i'm in case c,C\n");
			break;
		
		default:
			printf("Wish you know what are alphabets\n");
			break;
		
		return 0;
	}
	
}

