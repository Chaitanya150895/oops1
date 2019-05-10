#include<iostream>
using namespace std;

float myfunc(float i);
double myfunc(double i);
int main(){
    cout << myfunc(10.1) << " "; //unambigous, calls myfunc(double)
    cout << myfunc(10); //ambigous

    return 0;
}

float myfunct(float i)
{
    return i;
}

double myfunctio(double i)
{
    return -i;
}