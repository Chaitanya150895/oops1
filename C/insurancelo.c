#include<stdio.h>
int main ()
{
	char sex, ms;
	int age;
	
	printf ("Enter the age, sex(m/f), marital status(m/u)");	
	scanf ("%d%c%c",&age, &sex, &ms);
	
	if((ms=='m')||(ms=='u'&& sex=='m'&&age>30)||(ms=='u'&&sex=='f'&&age>25))
	printf("The driver should be insured\n");
	else
	printf("The driver should not be insured\n");
	
	return 0;	
}
