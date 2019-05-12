#include<iostream>
using namespace std;

class aType{
	int a[3];
	public:
		aType(int i, int j, int k) {
			a[0] = i;
			a[1] = j;
			a[2] = k;
		}
		int operator[] (int i) {return a[i];
		}
};

int main()
{
	aType ob(1, 2, 3);
	cout << " "; //displays 2
	
	ob[1]= 25; // [] on left of =, assigning a new value but not working
	
	cout << ob[1]; // now displays 25
	
	return 0;
}
