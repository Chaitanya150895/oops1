//Returning object from a function

#include<iostream>
using namespace std;

class myclass {
    int i;
public:
    myclass ()
    {
        cout<< "I'm in constructor"<< endl;
    }

    ~myclass ()
  {
        i = 0;
        cout<< "I'm in destructor "<< endl;
        cout << "i = "<< i << endl; 
    }

    void set_i(int n) {i=n;}
    int get_i() {return i;}
};

myclass f(); //return object of type myclass
int main()
{
    myclass o;

    o = f();
    cout << "Object value returned" << o.get_i()<<"\n";
    
    return 0;
}

myclass f()
{
    myclass x;
    x.set_i(1);
    return x;
}