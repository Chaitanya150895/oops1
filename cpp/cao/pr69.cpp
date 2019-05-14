#include<iostream>
using namespace std;

class base
{
    protected:
    int i, j; //private to base and accissible by deerived
    public:
    void setij(int a, int b)
    {
        i=a;
        j=b;
    }
    
    
    void showij() {
        cout << i << " "<< j<< "\n";
    }
};

//inherite base as protected
class derived : protected base{
    int k;
    public:
    //derived may access base's i and j and setij().
        void setk() {setij(10,12); k=i*j;} //legal

        //may access showij() here
    void showall() {cout << k << " "; showij();}
};

int main()
{
    derived ob;
  
    ob.setij(2,3); //illegal, setij() is protected member of derived
    ob.setk(); // ok, public member of derived
    ob.showall(); // ok, public member of derived

    ob.showij(); //illegal, showij() is protectyed member of deliverd
   
    return 0;
}