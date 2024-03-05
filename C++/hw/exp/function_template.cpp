#include <iostream>
using namespace std;

template <class T>
class complex
{
    T real, imag;

    public:
        complex<T> operator+(complex<T> c)
        {
            complex<T> x;
            x.real=real+c.real;
            x.imag=imag+c.imag;

            return x;
        }
        template <class X>
        friend istream &operator>>(istream &in, complex<X> &c);
        template <class X>
        friend ostream &operator<<(ostream &out, complex<X> &c);
};

template <class X>
ostream &operator<<(ostream &out, complex<X> &c)
{
    out<<c.real<<" + "<<c.imag<<"i"<<endl;

    return out;
}

template <class X>
istream &operator>>(istream &in, complex<X> &c)
{
    cout<<"Enter real: ";
    in>>c.real;
    cout<<"Enter imag: ";
    in>>c.imag;

    return in;
}

int main()
{
    complex<int> c1, c2, c3;
    cin>>c1;
    cin>>c2;
    c3=c1+c2;
    cout<<c1;
    cout<<c2;
    cout<<c3;

    return 0;
}