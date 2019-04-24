#include<stdio.h>

struct time
{
	int hours; int minutes; int seconds;
};

void sTime(struct time *);

int main()
{
	struct time t = {11, 45, 14};
	sTime(&t);

	return 0;
}


void sTime(struct time *pt)
{
	printf("%d",pt->seconds); //using arrow operator
}