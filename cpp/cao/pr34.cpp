#include<iostream>
using namespace std;

class base{
    int i;
public:
    void set_i(int num) {i = num;}
    int get_i() {return i;}
};

class derived: public base{
    int j;
    public:
    void set_j (int num) {j = num;}
    int get_j() {return j;}
};

int main()
{
    base *bp;
    derived d;

    bp = &d; //base poniters points to derived object

    //access derived object using base poniters
    bp -> set_i(10);
    cout << bp ->get_i() << " ";
/*
    bp->set_j(88); //error
    cout<<bp->get_j(); //err
*/
    return 0;
}