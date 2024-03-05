#include <iostream>

using namespace std;

class complex
{
    int real, imag;
    public:
        void entry();
        void display();

        complex sum(complex c)
        {
            complex temp;

            temp.real=real+c.real;
            temp.imag=imag+c.imag;

            return temp;
        }

        complex operator+(complex c)
        {
            complex temp;

            temp.real=real+c.real;
            temp.imag=imag+c.imag;

            return temp;
        }

        void operator++(int x)
        {
            real++;
            imag++;
        }
};

void complex::entry()
{
    cout<<"Enter real part: ";
    cin>>real;
    cout<<"Enter imaginary part: ";
    cin>>imag;
}

void complex::display()
{
    cout<<"The complex number is: "<<real<<" +i"<<imag<<endl;
}

int main()
{
    complex c1, c2, c3;
    c1.entry();
    c2.entry();
    c3=c1+c2; // c2->c, c1 != specify, c3 -> store
    c1++;
    c1.display();
    c2.display();
    c3.display();
}