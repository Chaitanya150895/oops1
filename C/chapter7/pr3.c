#include<stdio.h>
#include<stdlib.h>

int main()
{
	int goals;
	
	printf("Enter the number of goals scored against India");
	scanf ("%d", &goals);
	
	if (goals<=5)
		goto sos;
		
		else
		{
			printf("about time soccer players learn");
			
			printf("and said goodbuy adiue to soccer");
			
			exit (1); /*terminates program execution*/	
			
		}
		
		sos:
			printf("To err is human\n");
	
	return 0;
	
}
