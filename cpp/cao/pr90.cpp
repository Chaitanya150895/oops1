//Testing through restriction
#include<iostream>
using namespace std;

void test(int x) throw(int, double)
{
    if(x==0) throw'x'; //char
    else
        if(x==1) throw x; //int
        else
            if(x== -1) throw 1.0; //double
            cout << "End of Function block \n";
}

int main()
{
    try{
        cout << "Testing throw restriction \n";
        cout << "x == 0 \n";
        test(0);
        cout << "x == 1 \n";
        test(1);
        cout << "x == -1 \n";
        test(-1);
        cout<<"x == 2 \n";
        test(2);
    }

    catch(char c)
    {
        cout << "Caught a character \n";
    }

    catch(int m)
    {
        cout << "Caught a integer \n";
    }

    catch(double d)
    {
        cout << "Caught a double \n";
    }

    cout<< "End of try-catch system \n\n";

    return 0;
}


/*RESULT

Testing throw restriction                                                                                                                   
x == 0                                                                                                                                      
terminate called after throwing an instance of 'char'                                                                                       
Aborted (core dumped)

*/