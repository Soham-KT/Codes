#include <iostream>
using namespace std;

class complex
{
    int a, b;
    public:
        complex()
        {
            a=5;
            b=3;
        }

        complex(int x, int y)
        {
            a=x;
            b=y;
        }

        complex(int z)
        {
            a=z;
            b=3;
        }

        void disp()
        {
            cout<<a<<" + "<<b<<"i"<<endl;
        }
};

int main()
{
    complex c1, c2, c3;
    c1.disp();
    c2.disp();
    c3.disp();

    complex c(4, 6); //implicit call
    c.disp();

    complex d=complex(5, 7); //explicit call
    d.disp();    

    complex f(10);
    f.disp();

    return 0;
}