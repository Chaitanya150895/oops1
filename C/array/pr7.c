//passing array to a function
#include<stdio.h>
void display1(int *, int);
void display (int [], int);
int main()
{
	int num[] = {24, 34, 12, 44, 56, 17};
	display1 (&num[0], 6);
	display2 (&num[0], 6);
	return 0;
}

void display1 (int *j, int n)
{
	int i;
	for (i = 0; i <= n-1; i++)
	{
		printf("element = %d\n", *j);
		j++; //increament pointer ti point next element
	}
	printf("\n");
}

void display2 (int j[], int n)
{
	int i;
	for (i = 0; i <= n-1; i++)
	{
		printf("element = %d\n", j[i]);
	}
}
	

