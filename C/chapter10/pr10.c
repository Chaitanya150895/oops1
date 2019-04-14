#include<stdio.h>
int i = 35;
int fun1();
int fun2();
int main ()
{
    printf("in main %d\n", i);
    fun1();
    fun2();
    return 0;
}