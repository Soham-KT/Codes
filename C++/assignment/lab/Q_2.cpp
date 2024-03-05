#include <iostream>
using namespace std;

class simple
{
    int prin, time;
    float rate;

    public:
        void entry()
        {
            cout<<"Enter principal, time, rate: ";
            cin>>prin>>time>>rate;
        }
        
        void disp()
        {
            cout<<"The simple intrest is: "<<(prin*time*rate)/100;
        }
};

int main()
{
    simple s;
    s.entry();
    s.disp();

    return 0;
}