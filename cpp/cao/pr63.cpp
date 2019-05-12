//a safe array example
#include<iostream>
#include<cstdlib>
using namespace std;

class aType{
	int a[3];
	public:
		aType(int i, int j, int k) {
			a[0] = i;
			a[1] = j;
			a[2] = k;
		}
		int &operator[] (int i);
		
};

//provide range checking for aType.
int &aType::operator[](int i)
{
	if (i<0 || i>2){
		cout << "Boundary Error\n";
		exit(1);
	}
 } 

int main()
{
	aType ob(1, 2, 3);
	cout << " "; 
	
	ob[1]= 25; // [] appears on left	
	cout << ob[1]; // now displays 25
	
	ob[3] = 44; //generates (generates boundary error) runtime error, 3 out-of-range
	
	return 0;
}
