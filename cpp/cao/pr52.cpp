#include<iostream>
using namespace std;

int myfunc(int i);
int myfunc(int i, int j);

int main()
{
    int (*fp) (int i, int j); //pointer to f(int)

    fp =  myfunc; //points to myfunc(int)

    cout << fp(5, 7)<< endl;

    return 0;
}

int myfunc(int i)
{
    return i;
}

int myfunc(int i, int j) 
{
    return i*j;
}