#include <iostream>
using namespace std;

int count=0;

class num
{
    public:
        num()
        {
            count++;
            cout<<"This is constructor called for obj: "<<count<<endl;
        }

        ~num()
        {
            cout<<"This is destructor called for obj: "<<count<<endl;
            count--;
        }
};

int main()
{
    cout<<"Entering main"<<endl;
    num n1;
    {
        cout<<"Entering block"<<endl;
        cout<<"Creating 2 more objects"<<endl;
        num n2, n3;
        cout<<"Exiting block"<<endl;
    }
    cout<<"Out of block"<<endl;

    return 0;
}