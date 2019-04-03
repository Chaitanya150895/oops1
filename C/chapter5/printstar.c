#include<stdio.h>

int main()
	
{
	int i, j, k, num, temp;

    printf("Enter the number of rows");
    scanf("%d",&num);
    temp = num;
	for (i=1; i<=num; i++)
	{

        for (k=temp; k>=i; k--)
        {
            printf(" ");

        }
       

		for (j=1; j<=i; j++)
        {
		printf("*");
        }
        printf("\n");
	}

	

	return 0;

} 