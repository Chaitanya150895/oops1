
#include<iostream>
using namespace std;
class c1{
    int i;
    public:
    c1(int j) {i=j;} //constructor
    int get_i() {return i;}
};

int main()
{
    c1 ob[3] = {1,2,3}; //initialization
    int i;

    for (i=0; i<3; i++)
        cout << ob[i].get_i() << "\n";

        return 0;
}
