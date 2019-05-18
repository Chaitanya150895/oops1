#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter the values of a and b \n";
	cin >> a;
	cin >> b;
	int x = a-b;
	try{
		if (x != a)
		{
			cout << "Result(a/x) = " << a/x < "\n";
		}
		else //there is an exeption
		{
			throw(x); //throw int object
		}
	}
	
	catch(int i) //catches the exception
	{
		cout << "Exeception caught : Divided by zero\n";
	}
	cout << "END";
	
	return 0;
}
