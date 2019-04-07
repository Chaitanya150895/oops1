#include<stdio.h>

int multiplicationTable(int, int, int);

int main()
{
	int i, j, table;
	multiplicationTable(i, j, table);
	return 0;
}

int multiplicationTable(int i, int j, int table)
{

for(i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			table = i * j;
			printf("%d\n", table);
		}
		printf("\n\n\n");
	}
	
}
