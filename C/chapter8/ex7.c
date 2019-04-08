#include<stdio.h>

void printIt (float, char);

int main ()
{
    float a = 15.5;
    char ch = 'C';
    printIt (a, ch);

    return 0;
}

void printIt (float a, char ch)
{
printf("%f %c\n", a, ch);
}