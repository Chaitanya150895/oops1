#include<stdio.h>

/*int main()
	
	
{
	int i,j;

	for (i=1;i>=6; i++)
	{
		for (j=1;j>=6; j++)

		printf("* ");

	}

	printf("\n");

	return 0;

} */


#include<stdio.h>
int main()
{
	int i, p, b, n=1;

	printf("Enter the base and power");
	scanf("%d%d",&b, &p);

	for(i = 1; i<=p; i++)
	{
	n = n * b;
	}
	
	printf("%d ^ %d = %d", b,p,n);

	return 0;

}