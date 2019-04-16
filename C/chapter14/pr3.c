#include<stdio.h>

int main()
{
	int s[4][2] =
	{
		{2134, 22},
		{3214, 21},
		{2143, 24},
		{3421, 23}
	};
	int i, j;
	for (i=0; i<=3; i++)
	{
		for(j=0; j<=3; j++)
		{
			printf("%d %d\n", *(s+i)+j);
		}
	}
	return 0;
}