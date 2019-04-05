#include<stdio.h>

int main()


{
	int num, num1, num2, num3, num4;

	for (num; num <= 500 ; num++ )
	{

		num1 = num % 10;
		num2 = num1 % 10;
		num3 = num2 % 10;

		num4 = (num1 * num1 * num1) + (num2 * num2 * num2) + (num3 * num3 * num3);

		if(num = num4)
		
		printf("%d is Armstrong number", num);

		else 	
		{

		 printf("%d is not a Armstrong number", num);
		 
		 }

	}

	return 0;
}