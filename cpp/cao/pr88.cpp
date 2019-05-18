#include<iostream>
using namespace std;

class Error
{
    int err_code;
    char *err_desc;

    public:
    Error(int c, char *d)
    {
        err_code=c;
        err_desc=new char[strlen(d)];
        strcpy(err_desc, d);
    }

    void err_display(void)
    {
        cout<<"\nError code: " << err_code<<"\n"<<"Error Description: " << err_desc;
    }
};

int main()
{
    try{
        cout << "Press any key to throw a test exception.";
        getch();
        throw Error(99, "Test Exception");
    }

    catch(Error e)
    {
        cout<< "\nException caugh successfully.";
        e.err_display();
    }

    getch();
    return 0;
}
