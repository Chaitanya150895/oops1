//bounds checking
#include<stdio.h>
int main()
{
    int num [4], i;

    printf("Enter num");      
    for (i = 0; i <= 7; i++)
    {
        scanf("%d", &num[i]);
    }
    
    num [i] = i;
       for (i = 0; i <= 7; i++)
    {
        printf("%d\n", num[i]);
    }

    return 0;
}
