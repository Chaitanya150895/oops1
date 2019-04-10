#include<stdio.h>
int check (int); //need int instaed of void as we rae returning the value ->solved
int main()
{
    int k = 45, z;
    z = check (k);
    printf("%d\n", z);
    return 0;

}
int check (int m) //variable declaration should be inside of the function  //need int instaed of void as we rae returning the value ->solved
{
     
    if (m>40)
        return (1);
    else 
        return (0);
}
