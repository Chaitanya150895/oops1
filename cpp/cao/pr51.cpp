//Allowing both initilized and uninitialized objects

#include<iostream>
#include<new>
using namespace std;

class powers{
    int x;
    public:
    //overloading constructor two ways
    powers() {x = 0;} //no initializer
    powers(int n) {x = n;} //initilizer


int getx() {return x;}
void setx(int i) {x = i;}

};

int main (){
    powers ofTwo[] = {1,2,4,8,16}; //initialized
    powers ofThree[5]; //uninitializedpowers *p;
    powers *p;
    int i;


//show powers of two
cout << "Powers of two: ";
for(i=0; i<5; i++) {
    cout << ofTwo[i].getx() <<" ";
}
cout << "\n\n";

//set powers of three
ofThree[0].setx(1);
ofThree[1].setx(3);
ofThree[2].setx(9);
ofThree[3].setx(27);
ofThree[4].setx(81);

//show powers of three
cout << "Power of three: ";
for(i=0; i<5; i++) {
    cout << ofThree[i].getx() <<" ";
}
cout << "\n\n";


//dynalically allocate an array
try {
    p = new powers [5]; // no initization
}
catch (bad_alloc xa) {
    cout<< "Allcation failure\n";
    return 1;
}

//initialize dynamic array woith power of two 
for (i =0; i<5; i++){
    p[i].setx(ofTwo[i].getx());
}

//show powers of two
cout << "Power of two: ";
for(i=0; i<5; i++) {
    cout << p[i].getx()<< " ";
}    
cout << "\n\n";
delete [] p;
return 0;
}