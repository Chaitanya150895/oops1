#include<stdio.h>
int main()
{
	int i = 1, table;
	while(i <= 10 )
	{
		int j = 1;
		while(j <= 10 )
		{
			table = i * j;
			printf("%d\n", table);
			j++;
		}
		printf("\n\n\n");
		i++;
	}
	
}


