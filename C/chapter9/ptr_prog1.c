#include<stdio.h>

int main ()

{
    int a,b,*p;

    a=  10, b = 20;

    p = &a;
     printf ("%d %d %u %u\n", a,*p,&a,p);

     return 0;
}
