#include<stdio.h>
int main()
{

int big,a,b,c;

big = (a>b?(a>c?3:4):(
b>c?6:8));

printf("The biggest among them = %d",big);

return 0;
}
