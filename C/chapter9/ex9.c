#include<stdio.h>

int student(int, int, int, int);

int main()
{
	int s1, s2, s3, avg;
	
	printf("Enter the marks in 3 subjets");
	scanf("%d%d%d", &s1, &s2, &s3);
	
	avg = student (s1, s2, s3, avg);
		
	return 0;
}

int student(int s1, int s2, int s3, int avg)
{
	avg = (s1 + s2 + s3)/3;
	printf("The average and percentage is %d", avg);
	return 0;
}
