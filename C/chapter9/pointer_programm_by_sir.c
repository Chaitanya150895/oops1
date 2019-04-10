
//What is the output of following program?

#include<stdio.h>
int fun(int x)
{
	x = 30;
	return (x);
}


int main()
{
	int y = 20, x;
	x = fun(y);
	printf("%d %d", y, x);
	return 0;
}


//The output is 20 30
