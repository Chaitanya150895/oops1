//structure and classes are related

#include<iostream>
#include<cstring>
using namespace std;

class mystr //replaced the structure by class
{
    //by default private
    char str[255];
    
    public:
    void buildstr(char *s); //public
    void showstr();
};

void mystr:: buildstr(char *s)
{
    if(!*s) *str = '\0'; //initialize string
    else strcat(str, s);
}

void mystr::showstr()
{
    cout << str << "\n";
}

int main()
{
    mystr s;

    s.buildstr(" "); //init
    s.buildstr("Hello ");
    s.buildstr("there!");

    s.showstr();

    return 0;
}