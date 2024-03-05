#include <iostream>
using namespace std;

class complex;

class calculator
{
    public:
        int add(int a, int b)
        {
            return(a+b);
        }
        int realsum(complex, complex);
        int imagsum(complex, complex);
};

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
    friend class calculator;
};

int calculator::realsum(complex x, complex y)
{
    return(x.real+y.real);
}

int calculator::imagsum(complex x, complex y)
{
    return(x.imag+y.imag);
}

int main()
{
    complex c1, c2, c3;
    c1.setdata(1,3);
    c1.dispdata();
    c2.setdata(3,5);
    c2.dispdata();
    calculator ans;
    int res=ans.realsum(c1,c2);
    calculator anss;
    int ress=anss.imagsum(c1,c2);
    cout<<res<<" + "<<ress<<"i"<<endl;

    return 0;
}