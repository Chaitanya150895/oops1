#include<iostream>
using namespace std;

class loc
{
    int longitude, latitude;
    public:
        loc(){}
    
        loc (int lg, int lt){
        longitude = lg;
        latitude = lt;
    }

    void updateValues (int lg, int lt){
        longitude = lg;
        latitude = lt;
    }

    void show(){
        cout <<  longitude << " ";
        cout <<  latitude << "\n";
    }

    loc operator+(loc op2);
    loc operator-(loc op2);
    loc operator*(loc op2);
    loc operator/(loc op2);
};

loc loc::operator+(loc op2){

    loc temp;

    temp.longitude = op2.longitude + longitude;
    temp.latitude = op2.latitude + latitude;

    return temp; 
}

loc loc::operator-(loc op2){

    loc temp;

    temp.longitude = op2.longitude - longitude;
    temp.latitude = op2.latitude - latitude;

    return temp; 
}

loc loc::operator*(loc op2){

    loc temp;

    temp.longitude = op2.longitude * longitude;
    temp.latitude = op2.latitude * latitude;

    return temp; 
}

loc loc::operator/(loc op2){

    loc temp;

    temp.longitude = op2.longitude / longitude;
    temp.latitude = op2.latitude / latitude;

    return temp; 
}

int main(){

    loc ob1(10, 20), ob2(2,5);

    ob1.show();
    ob2.show();

    ob1 = ob1 + ob2;
    ob1.show();

ob1.updateValues (10, 20);

    ob1 = ob1 - ob2;
    ob1.show();

ob1.updateValues (10, 20);

    ob1 = ob1 * ob2;
    ob1.show();

ob1.updateValues (10, 20);

    ob1 = ob1 / ob2;
    ob1.show();

    return 0;
}


