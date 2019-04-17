#include<stdio.h>
int main()
{
	int a,b,i,j, matrix[4][4], transpose[4][4];
	
	printf("Enter the matrix element for 4x4 matrix");
	scanf("%d %d", &a, &b);
	
	for(i=0; i<=a; i++)
	{
		for(j=0; j<=b; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	
	
	for(i=0; i<=a; i++)
	{
		for(j=0; j<=b; j++)
		{
			transpose[j][i] = matrix[i][j] ;
		}
	}
	
	printf("Transpose of the matrix  \n");
	
	for(i=0; i<=a; i++)
	{
		for(j=0; j<=b; j++)
		{
			printf("%d\n", transpose[i][j]);
		}
	}
	
	return 0;
}
