//programm to demonstrate printing of a string
#include<stdio.h>
int main()
{
    char name[] = "Klinsman";
    int i = 0;
    for(;i<=7;i++)//when the size of string is known
    {
        printf("%c", name[i]);
    }

    printf("\n");
    i=0;
    for(;name[i] !='\0'; i++) //when size of string is unknown
    {
        printf("%c", name[i]);
    }
    printf("\n");
    return 0;
}
