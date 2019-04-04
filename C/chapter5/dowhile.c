#include<stdio.h>

int main()
{
    int i,num;
    int yes_or_no = 1;

    do{

        printf("Please enter a number to print table");
        scanf("%d",&num);

        for(i=1;i<11;i++)
        {
            printf("%d x %d = %d\n",num, i, (num*i));
        }

        printf("Do you want to print another table");
    
        scanf("%d",&yes_or_no);

       //getchar();
        


    }while(yes_or_no == 1);

return 0;
}