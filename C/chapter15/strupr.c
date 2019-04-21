#include<stdio.h>

void strupr(char *);


int main()
{
    char str[30];
    printf("Enter a string\n");
    scanf("%s", str);
    //gets(string1);
    strupr(str);
    printf("UPPER case is %s\n", str);
   
    return 0;
}

void strupr(char* str)
{
    int i;
     for(i =0; str[i] !='\0'; i++)
	{
		
        str[i] = str[i] - 32;
	}
}