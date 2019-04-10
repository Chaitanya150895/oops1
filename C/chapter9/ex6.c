#include<stdio.h>
void check (int); //need int instaed of void as we rae returning the value
int main()
{
    int k = 35, z;
    z = check (k);
    printf("%d\n", z);
    return 0;

}
void check (m) //variable declaration should be inside of the function  //need int instaed of void as we rae returning the value
{
    int m; //no need to declare rep[eatedly again as alreadfy declared 
    if (m>40)
        return (1);
    else 
        return (0);
}
