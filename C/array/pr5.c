#include<stdio.h>
int main()
{
	int arr[] = {10, 20 , 30, 45, 67, 56, 74};
	int i = 4, *k, *j, *x, *y;
	j = &i;
	j = j + 9; //pointer plus number
	k = k - 3; //pointer minus number
	x = &arr[1];
	y = &arr[5];
	printf("%d\n", y - x);
	j = &arr[4];
	k = (arr + 4);
	if (j==k)
	printf("the two pointers points to same location\n");
	else
	printf("the tw pointers points to diff location\n");
	return 0;
	}
