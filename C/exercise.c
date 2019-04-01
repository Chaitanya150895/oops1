#include<stdio.h>
int main()
{
	int r,c,sum;
	for(r=1; r<=5; r++) /*outer loop*/
	{	
		for (c=1; c<=4; c++) /*inner loop*/
		{
			sum = r + c;
			printf("r=%d c=%d sum =%d\n",r,c,sum);
		}
	}
	return 0;	
}
