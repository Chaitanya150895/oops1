#include<stdio.h>
int function (int *); //return type should be int as returning the int value instead of void which was already mentioned the programm

int main()
{
    int i = 35, *z;
    z = function (&i);
    printf("%d\n,z");
    return 0;
}

int function (int *m)
{                                 
    return (*m + 2);
}