#include <iostream>
using namespace std;

class complex
{
    int real, imag;

    public:
        void setdata(int n1, int n2)
        {
            real=n1;
            imag=n2;
        }   
        void dispdata()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

        friend complex sumcomp(complex x, complex y);
};

complex sumcomp(complex x, complex y)
{
    complex z;
    z.setdata(x.real+y.real, x.imag+y.imag);

    return z;
}

int main()
{
    complex c1, c2, c3;
    c1.setdata(1,3);
    c1.dispdata();
    c2.setdata(5,8);
    c2.dispdata();
    c3=sumcomp(c1, c2);
    c3.dispdata();

    return 0;
}