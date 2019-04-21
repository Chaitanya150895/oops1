#include<stdio.h>
int main()
{
	char s[] = "No two viruses works similarly";
	int i=0;
	while(s[i] !=0)
	{
		printf("%c%c\n", s[i], *(s+i));
		printf("%c%c\n", i[s], *(i+s));
		i++;
	}
	return 0;
}
