#include <iostream>
using namespace std;

class area
{
    int len, wid;

    public:
        void entry()
        {
            cout<<"Enter length of rectagle: ";
            cin>>len;
            cout<<"Enter width of rectagle: ";
            cin>>wid;
        }
        void disp()
        {
            cout<<"The area is: "<<len*wid;
        }
};

int main()
{
    area a;
    a.entry();
    a.disp();

    return 0;
}