#include <iostream>
using namespace std;

class complex
{
    float real, imag;

    public:
        void set(float a, float b)
        {
            real=a;
            imag=b;
        }
        
        void disp()
        {
            cout<<real<<" + "<<imag<<"i"<<endl;
        }

        complex sum(complex c)
        {
            complex temp;
            
            temp.real=real+c.real;
            temp.imag=imag+c.imag;

            return temp;
        }

};

int main()
{
    complex c1, c2, c3;
    
    c1.set(1.5, 2);
    c1.disp();
    c2.set(5, 7);
    c2.disp();
    c3=c1.sum(c2);
    c3.disp();

    return 0;
}