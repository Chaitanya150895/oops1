//pointers to object
#include<iostream>
using namespace std;

class c1{
    
    public:
    int i;
   
    c1(int j) {i = j;}
    
};

int main()

{
    c1 ob(1);
    int *p;
    

    p = &ob.i; //get address ob.i
    cout << *p; //access ob.i via p
    
    
    return 0;
}