#include<stdio.h>

int student(int *);

int main()
{
	
	int avg;
	student (&avg);
	printf("The average and percentage is %d", avg);
	return 0;
}

int student(int *avg)
{
	int s1, s2, s3;
	printf("Enter the marks in 3 subjets");
	scanf("%d%d%d", &s1, &s2, &s3);
	*avg = (s1 + s2 + s3)/3;
	
	return 0;
}
