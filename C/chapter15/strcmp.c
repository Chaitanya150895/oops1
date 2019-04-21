#include<stdio.h>
#include<string.h>
int main()
{
    char string1[] = "Jerry";
    char string2[] = "Ferry";
    int i,j,k;
    i = strcmp(string1,"Jerry");
    j = strcmp(string1, string2);
    k = strcmp(string1,"Jerry boy");//the null character at the end of Jerry doesn't match the blank in the Jerry boy the value returned uis -32 which is the value of null character minus the ASCII value of the space.
    printf("%d%d%d\n",i,j,k);
  
    return 0;
}
