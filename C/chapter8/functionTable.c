#include<stdio.h>

int multiplicationTable(int);

int main()
{
	int table;
	multiplicationTable(table);
	
}

int multiplicationTable(int table)
{
int i, j;
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
