#include<iostream>
#include<string>
using namespace std;

class employee
{
    char name [80];  //private by default
public:
    void putname(char *n); //public
    void getname(char *n);
private:
    double wage; //now , private again 
public: 
void putwage(double w); //back to public
double getwage();
};

void employee::putname(char *n)
{
    strcpy(name, n);
}

void employee::getname(char *n)
{
    strcpy(n, name);
}

void employee::putwage(double w)
{
    wage = w;
}
double employee::getwage()
{
    return wage;
}

/* Herem all private element griouped together and all public grouped together

class employee{
    char name[80];
    double wage;
public:
    void putwage(char *n);
    void getname(char *n);
    void puteage(double w);
    double ghetwage();
};
*/


int main()
{
    employee ted;
    char name[80];

    ted.putname("Ted John");
    ted.putwage(75000);

    ted.getname(name);
    cout << name << " makes $";
    cout << ted.getwage() << " per year. ";

    return 0;
}