//Nested Structure
#include<stdio.h>

int main()
{
	struct address
	{
		char phone[15];
		char city[25];
		int pin;
	};
	
	struct emp
	{
		char name[25];
		struct address a; //called first sructure inside this struture
	};
	
	struct emp e ={"Chaitanya", "9837531046", "Nagpur", 440010};
	printf("name = %s \nphone= %s\ncity = %s \npin = %d\n", e.name, e.a.phone, e.a.city, e.a.pin);
	
	return 0;
}
