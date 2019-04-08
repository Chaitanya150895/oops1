#include<stdio.h>
//below is the important line to use function
// we must declare the function name before main function
void printTable(int); 
int main()
{
    int num;
    printf("Enter the value to print table");
    scanf("%d",&num);

    printTable(num);

    return 0;
++++.
}

//definition of a function is must to use it
void printTable(int a)
{
int i=0;

   
    for(i=0;i<11;i++)
    {
        printf("%d x %d = %d\n",a, i, a * i);
    }
}