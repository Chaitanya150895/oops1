#include<stdio.h>
int main ()
{
	
	int i, f = 1, num;
	
	printf ("Enter a number");
	scanf("%d",&num);

	for (i = num; i>= 1; i--)
	{
		f = f * i;
			
	}
	printf("%d", f);
	
	/*	
	
	int i, f = 1;
	
	printf ("Enter a number");
	scanf("%d",&i);
	
	
	while (i >= 1)
	{
		f = f * i;
			
		i = i - 1;
	}
	printf("%d", f);
	
	*/
}
