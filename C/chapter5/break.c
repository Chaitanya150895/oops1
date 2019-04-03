#include<stdio.h>

int main()
{
    int i, j, num;

    

    for(i=1;i<=10;i++)
    {
        for(j=1; j<=10; j++)
        {
            if (i>=5)
            break;
            
            num = i * j;
                        
            printf("%d * %d = %d", i, j, num);
            printf("\n");

            


        }
            printf("\n\n");
    }
    return 0;
}