/*write a function that recieves 5 integers and returns the sum, average and 
standard deviation of these numbrs. Call this function from main() and print
the result in main().*/


#include<stdio.h>
#include <math.h>

int mathfun(int *sum,int *avg, int *stddev)
{
	int a,b,c,d,e, fun;
	printf("Enter the 5 integers\n");
	scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
	*sum = a + b + c + d + e;
	*avg = *sum / 5;
	fun = ((*sum - a)*(*sum - a)+(*sum - b)*(*sum - b)+(*sum - c)*(*sum - c)+(*sum - d)*(*sum - d)+(*sum - e)*(*sum - e))/5;
	*stddev = sqrt(fun);
	return 0;
}

int main()
{
	int sum, avg, stddev;
	mathfun(&sum, &avg, &stddev);
	
	printf("\n\nSum is %d\nAverage is %d and \nStandard deviation is %d", sum, avg, stddev);

	return 0;
}



