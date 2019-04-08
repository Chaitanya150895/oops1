#include<stdio.h>
int main()
{
	int i = 5, *p, *q;

	p = &i;
	
	q = &p;
	
	printf("%d %d %u %u %d %u %u", i, *p, &i, p, q, &p, q);
	
	//value of i assigning to p so i = p = 5
	//address of p and q is same as i so 2293432
	
	return 0;	
}
