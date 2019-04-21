#include<stdio.h>
#include<string.h>

void strrev(char*);

int main()
{
    char str1[25];
    printf("Enter the string: \n");
    scanf("%s", str1);
    strrev(str1);
    printf("reversed string %s\n", str1);
    return 0;
}

void strrev(char* str1)
{
    int i, len, count;
    len = strlen(str1);
    char str2[25];
    strcpy(str2,str1);
    for(i=0, count = len - 1; str1[i] !=0; i++, count--)
    {
           str1[i] = str2[count];
   } 
}