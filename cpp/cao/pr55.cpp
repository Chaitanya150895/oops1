#include<iostream>
using namespace std;

class loc{
    int longitude, latitude;
    public:
    loc() {}
    loc(int lg, int lt){
        longitude = lg;
        latitude = lt;
    }

    void updateLongLat(int lg, int lt){ //created function to take old values of the object1
        longitude = lg;
        latitude = lt;
    }

    void show(){
        cout << longitude << " ";
        cout << latitude << "\n"; 
    }

    loc operator+(loc op2);
    loc operator-(loc op2);
    loc operator*(loc op2);
    loc operator/(loc op2);
};

//Overload = for loc.
loc loc::operator+(loc op2)
{
    loc temp;

    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;

    return temp;
}

loc loc::operator-(loc op2)
{
    loc temp;

    temp.longitude = op2.longitude - longitude;
    temp.latitude = op2.latitude - latitude;

    return temp;
}

loc loc::operator*(loc op2)
{
    loc temp;

    temp.longitude = op2.longitude * longitude;
    temp.latitude = op2.latitude * latitude;

    return temp;
}

loc loc::operator/(loc op2)
{
    loc temp;

    temp.longitude = op2.longitude / longitude;
    temp.latitude = op2.latitude / latitude;

    return temp;
}

int main(){
    loc ob1(2, 20), ob2(4, 40);

    ob1.show(); //
    ob2.show(); //

    ob1 = ob1 + ob2;
    ob1.show(); //

    ob1.updateLongLat(2,20);  //function to take old values of the object1

    ob1 = ob1 - ob2;
    ob1.show(); 

    ob1.updateLongLat(2,20);  //function to take old values of the object1

    ob1 = ob1 * ob2;
    ob1.show(); 

    ob1.updateLongLat(2,20);  //function to take old values of the object1

    ob1 = ob1 / ob2;
    ob1.show(); 

    return 0;
}