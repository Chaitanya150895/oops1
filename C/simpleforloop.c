/*calculation of simple iterest for 3 set of p, n and r using for loop*/

#include<stdio.h>
int main()
{
	int p,n, count;
	float r, si;
	
	for (count = 1; count <= 3; count = count + 1)
	{
		
		printf("\n enter value of p, n, r");
		scanf("%d%d%f",&p, &n, &r);
		si=p * n * r / 100;
		printf("So simple interset is = %f", si);
		
		count = count + 1;		
	}
	
	return 0;	
	
}




