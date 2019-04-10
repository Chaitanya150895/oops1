#include<stdio.h>
void jiaayjo (int *, int *); //added *
int main ()
{
    int p =23 , f =24;
    jiaayjo (&p, &f);
    printf("%d %d\n", p, f);
    return 0;
}
void jiaayjo (int *q, int *g) //added * *
{
        *q = *q + *q; //added * * *
        *g = *g + *g; //added * * *
}