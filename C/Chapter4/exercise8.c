#include<stdio.h>
int main()
{
	char x;
	
	printf("Enter a character");
	scanf("%c",&x);
	ss
	if ((x >= 65 && x <= 90)) 
	printf("%c is a Capital Alphabet", x);
	
	else if ((x >= 97 && x <= 122)) 
	printf("%c is a small Alphabet", x);
	
	else if((x >= 48 && x <= 57)) 
	printf("%c is a number", x);
	
	else if((x >= 0 && x <= 47) || (x>=58 && x<=64) || (x>=91 && x<=96) || (x>=123 && x<=127))
	printf("%c is Special Symbol", x);
	
	return 0;
}
