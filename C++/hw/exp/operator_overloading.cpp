#include <iostream>
using namespace std;

class complex
{
    int real, imag;

    public:
        complex()
        {
            real=0;
            imag=0;
        }
        
        complex(int x, int y)
        {
            real=x;
            imag=y;
        }

        void disp()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

        friend complex operator+(complex c1, complex c2);
};

complex operator+(complex c1, complex c2)
{
    complex temp;
    
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;

    return temp;
}

int main()
{
    complex c1(2,3), c2(5,6), c3;
    c1.disp();
    c2.disp();
    c3=c1+c2;
    c3.disp();

    return 0;
}