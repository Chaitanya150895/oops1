//inherit multiple base class

#include<iostream>
using namespace std;

class base1{
    protected:
    int i;
    public:
    base1(int x) 
    {
        i = x;
        cout << "Constructing base\n";
    }

    ~base1() 
    {
        cout << "Distructing base\n";
    }
};

class base2{
    protected:
    int k;
    public:
    base2(int x) 
    {
        k = x;
        cout << "Constructing base\n";
    }

    ~base2() 
    {
        cout << "Distructing base\n";
    }
};


class derived : public base1, public base2
{
    public:
    /* 
    Derived constructor uses no parameter,
    but still must be used as taking them to pass them
    along to base classes
    */
    derived(int x, int y): base1(x), base2(y)
    {
        cout << "Constructing derived\n";
    }

    ~derived() 
    {
        cout << " Destructing Derived\n";
    }

    void show()
    {
        cout << i << " " << k << "\n";
    }
};

int main ()
{
    derived ob(3,4);
    ob.show(); // displays  3 4
    
    return 0;
}