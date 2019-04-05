#include<stdio.h>
//below is the important line to use function
// we must declare the function name before main function
void printTable(); 
int main()
{
    printTable();

    return 0;

}

//definition of a function is must to use it
void printTable()
{
int i=0, num;

    num = 5;
    for(i=0;i<11;i++)
    {
        printf("%d x %d = %d\n",num, i, num * i);
    }
}