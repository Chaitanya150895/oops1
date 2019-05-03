#include<iostream>
using namespace std;

int m = 10; //global m

int main()
{
	int m = 20; //m redeclaration, local to main
	
	{
		int k = m;
		int m = 30; // m declared again local to iiner bloack
		
		cout << "we are in inner block \n";
		cout << "k = "<< k << "\n";
		cout << "m = "<<m << "\n";
		cout << "::m = " << ::m << "\n";	
	}
	
	cout << "\n we are in outer block \n";
	cout << "m = " << m << "\n";
	cout << "::m =" << ::m << "\n";
	
	return 0;
}
