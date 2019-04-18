#include<stdio.h>
int main()
{
    char name[] = "Klinsman";
    /*
    name[i]
    *(name + i)
    *(i + name)
    i[name]
    */
    char *ptr;
    ptr = name; //store base address of string
    for(;*ptr !='\0'; ptr++)
    {
        printf("%c", *ptr);
    }
    printf("\n");
    return 0;
}