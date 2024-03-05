#include <iostream>
using namespace std;

class simple
{
    int a;

public:
    simple()
    {
        a = 0;
    }

    simple(int x)
    {
        a = x;
    }

    simple(simple &obj)
    {
        cout << "Copy constructor called " << endl;
        a = obj.a;
    } 

    void showdata()
    {
        cout << "The number is: " << a << endl;
    }
};

int main()
{
    simple a, b, c(3), z2;
    a.showdata();
    b.showdata();
    c.showdata();
    simple z1(c); // copy constructor invoked
    z1.showdata();

    z2 = c; // copy constructor not invoked
    z2.showdata();

    simple z3 = c; // copy constructor invoked
    z3.showdata();

    return 0;
}