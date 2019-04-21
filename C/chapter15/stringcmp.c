#include<stdio.h>

void strcmp(char*, char*);
int main()
{
    char str1[20];
    printf("\nEnter the new string");
    scanf("%s, str2");

    char str2[20];
    printf("\nEnter the new string");
    scanf("%s, str2");

    strcmp(str1, str2);

    return 0;
}

void strcmp(char *str1, char* str2)
{
    int i,j;
    for(i= 0,j=0; str1[i]!='\0',str2[j]!='\0'; i++, j++)
    {
        if (str1[i] > str2[j])
        {
            printf("str1 is greater than str2");
            
        }

        else if (str1[i] == str2[j])
        {
            printf("str1 is equals to str2");
            
        }

        else 
        {
            printf("str1 is smaller than str2");
        }
        
    }
}