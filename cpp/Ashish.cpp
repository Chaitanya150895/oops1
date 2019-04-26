#include<iostream>
using namespace std;
//base class
class base
{
    public:
        char *p;
        base()
        {
                p = (char *) malloc(50 * sizeof(char));
                cout<<"Enter the name= "<<p;
                cin>>p;
                cout<<"The name is = "<<p;

        }
};

int main()
{
base p;
return 0;

}

