#include<stdio.h>
int main()
{
    int avg, sum = 0;
    int i;
    int marks[5]; //array declaration
    for (i =0; i<=4; i++)
    {
        printf("Enter marks");
        scanf("%d", &marks[i]); //store data in array
    }

    for (i = 0; i <= 4; i++)
    sum = sum + marks[i]; //read data from an array
    avg = sum/5;
    printf("Avarage marks = %d\n", avg);
    return 0;
    }