//inherit multiple base class

#include<iostream>
using namespace std;

class base{
    protected:
    int i;
    public:
    base(int x) 
    {
        i = x;
        cout << "Constructing base\n";
    }

    ~base() 
    {
        cout << "Distructing base\n";
    }
};

//Inherit multiple base classes.
class derived : public base
{
    int j;
    public:
    //derived uses s; y is passses long to base.
    derived(int x, int y): base(y)
    {
        j = x;
        cout << "Constructing derived\n";
    }

    ~derived() 
    {
        cout << " Destructing Derived\n";
    }

    void show()
    {
        cout << i << " " << j << "\n";
    }
};

int main ()
{
    derived ob(3,4);
    ob.show(); // displays  4 3
    
    return 0;
}