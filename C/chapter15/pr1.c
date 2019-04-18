#include<stdio.h>
int main()
{
    int i;
    char name[] = {'H','A','E','S','L','E','R','\0'};
    for(i=0; i<=7; i++)
    {
        printf("%c\n", name[i]);
    }
    printf("\n");
    return 0;
}