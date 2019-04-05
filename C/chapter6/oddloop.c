#include<stdio.h>
int main()

{

char another;
int num;
do
{
	printf("enter a number");
	scanf("%d",num);
	printf("square of %d is %d\n", num, num*num);
	printf("Want to enter another numbery/n \n");
	fflush(stdin);
	scanf("%c",&another);
}
while (another=='y');
return 0;
	
}
