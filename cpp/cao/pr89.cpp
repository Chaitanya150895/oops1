#include<iostream>
using namespace std;

void divide(double x, double y){
    cout << "Inside function \n";
    try
    {
        if(y==0.0)
        throw y; //throwing double
        try{
            if(y==0.0)
            throw y; //throwing double
            else
            cout<< "Division = " << x/y << "\n";
        }

        catch(double) //catch a double
        {
        cout<< "Cought double inside function \n";
        throw; //rethrowing double
    }
    cout << "End of function \n\n";
}

	int main()
	{
	    cout<< "inside main \n";
	    try{
	        divide(10.5, 2.0);
	        divide(20.0, 0.0);
	    }
	
	    catch (double)
	    {
	        cout << "Cought double inside main \n"
	    }
	    cout << "End of main \n";

    return 0;
}
