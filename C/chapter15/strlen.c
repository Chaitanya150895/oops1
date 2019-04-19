#include<stdio.h>
#include<stdio.h>
int main()
{
    char arr[] = "Bamboozled";
    int len1, len2;
    len1 = strlen(arr);
    len2 = strlen ("Humpty Dumpty");
    printf("string = %s length = %d\n", arr, len1);
    printf("string = %s length = %d\n", "Humpty Dumpty", len2);
    return 0;
}