#include<iostream>
using namespace std;

class Samplecopyconstructor
{
    private:
    int x, y; //data member
    public:
    Samplecopyconstructor(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    /*Copy constructor*/
    Samplecopyconstructor ( Samplecopyconstructor &Sam)
    {
        x = Sam.x = 2;
        y = Sam.y = 5;
    }

    void display()
    {
        cout<< x << "  "<< y << endl;
    }
};

/*main function*/
int main()
{
    Samplecopyconstructor obj1(10, 15); //Normal constructor
    Samplecopyconstructor obj2 = obj1; //Copy constructor

    cout<< "Normal constructor: ";
    obj1.display();
    cout<< "Copy constructor: ";
    obj2.display();

    return 0;
}