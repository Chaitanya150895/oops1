#include <stdio.h>
#include <string.h>

int main()
{
    char str[25] = "Jerry";

    printf("original = %s", str);  
    printf("reversed = %s", strrev(str));

    return 0;
}
