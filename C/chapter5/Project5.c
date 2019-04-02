#include<stdio.h>
int main ()
{
	int i, f;
	
	printf ("Enter a number");
	scanf("%d",&i);
	
	while (i <= 1)
	{
		f = i * i;
			
		i = i - 1;
	}
	printf("%d", f);
}
