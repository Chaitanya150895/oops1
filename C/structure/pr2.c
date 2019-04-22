//Memory mapping of structure element
#include<stdio.h>
int main()
{
	struct book
	{
		char name;
		float price;
		int pages;
	};
	struct book b1 = {'B', 150.00, 450};

	printf("Address of name %u\n", &b1.name);
	printf("adress of price %u\n", &b1.price);
	printf("adress of pages %u\n", &b1.pages);

	return 0;
}
