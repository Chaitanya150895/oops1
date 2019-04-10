#include<stdio.h>
int pass(int, int); //declared the function as int instead of void  and needed semicolon
int main()
{
    int i = 135, a = 135, k;
    k = pass (i, a);
    printf("%d\n", k);
    return 0;   
}
int pass(int j, int b)
{
    int c;
    c = j + b;
    return (c);
} 