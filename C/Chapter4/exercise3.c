#include<stdio.h>
int main()
{
	int x, y, z;
	
	printf("Enter 3 numbers");
	scanf("%d%d%d", &x,&y,&z);	
	
	if(x>y && x>z) 
	printf("biggest = %d\n", x);
	if(y>x && y>z) 
	printf("biggest = %d\n", x);
	else if (z>x && z>y)
	printf("biggest = %d\n",z);
	return 0;	
}
