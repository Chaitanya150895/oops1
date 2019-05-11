#include<iostream>
using namespace std;

class loc{
    int longitude, latitude;
public:
    loc () {}

    loc (int lg, int lt){
        longitude = lg;
        latitude = lt;
    }

    void show(){
    cout << longitude << " ";
    cout << latitude << "\n"; 
    }
    
    friend loc operator+(loc op1, loc op2); //now friend
    loc operator-(loc op2);
    loc operator=(loc op2);
    loc operator++();
 };

//now, + is overload using friend function.
loc operator+(loc op1, loc op2){

    loc temp;

    temp.longitude = op1.longitude + op2.longitude;
    temp.latitude = op1.latitude + op2.latitude;

return temp;
}

//overload - for loc.
loc loc::operator-(loc op2){

    loc temp;

    temp.longitude = longitude - op2.longitude;
    temp.latitude = latitude - op2.latitude;

return temp;
}

//overload assignment for loc
loc loc::operator=(loc op2){

    longitude = op2.longitude;
    latitude = op2.latitude;

return *this; //i.e, return object that generated call
}

//overload ++ for loc
loc loc::operator++(){

    longitude++;
    latitude++;

return *this;
}

int main(){
    loc ob1(20,30), ob2(40,50);

    ob1.show();
    ob2.show();

    ob1 = ob1 + ob2;
    ob1.show();

    return 0;
}