#include<stdio.h>
int main()
{
	int i = 3, *x;
	float j = 1.5, *y;
	char k = 'c', *z;
	printf("Value of i = %d\n", i);
	printf("Value of j = %f\n", j);
	printf("Value of k = %c\n", k);
	
	x = &i; y =&j; z=&k;
	printf("Original Address in x = %d\n", x);
	printf("Original Address in y = %d\n", y);
	printf("Original Address in z = %d\n", z);
	
	x++;y++;z++;
	printf("New Address in x = %d\n", x);
	printf("New Address in y = %d\n", y);
	printf("New Address in z = %d\n", z);
	
	return 0;
}
