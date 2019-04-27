#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    //define anonymous union
    union 
    {
        long l;
        double d;
        char s[4];    
    };

//now refrerence union elemnt directly
1 == 100000;
cout << 1 << " ";
d = 123.2342;
cout << d << " ";
strcpy(s, "hi ");
cout << s;

return 0; 
}