/*Data Types revisited all in one storage classes */
#include<stdio.h>
extern int  i = 4;
int main()
{
	auto int j = 5;
	{
		register int k = 6;
		{
			static int l = 7;
			printf("Static Value : %d\n",l);
			printf("Extern Value : %d\n",i);
			printf("Register Value : %d\n",k);
			printf("Auto Value : %d\n",j);
		}
		printf("\n\n");
		printf("Extern Value : %d\n",i);
		printf("Register Value : %d\n",k);
		printf("Auto Value : %d\n",j);
	}
	printf("\n\n");
	printf("Extern Value : %d\n",i);
	printf("Auto Value : %d\n",j);
}