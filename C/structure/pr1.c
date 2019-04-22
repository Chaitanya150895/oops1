#include<stdio.h>
int main()
{
	struct book
	{
		char name;
		float price;
		int pages;
	};
	struct book b1,b2,b3;

	printf("Enter the name, price and pages for 3 books\n");
	scanf("%c%f%d", &b1.name, &b1.price, &b1.pages);
	scanf("%c%f%d", &b2.name, &b2.price, &b2.pages);
	scanf("%c%f%d", &b3.name, &b3.price, &b3.pages);

	printf("This is what you entered");
	scanf("%c%f%d\n", b1.name, b1.price, b1.pages);
	scanf("%c%f%d\n", b2.name, b2.price, b2.pages);
	scanf("%c%f%d\n", b3.name, b3.price, b3.pages);

	return 0;
}
