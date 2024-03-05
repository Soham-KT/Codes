#include <iostream>
using namespace std;

class base
{
    public:
        int base_int;
        void display()
        {
            cout<<"The Base integer is: "<<base_int<<endl;
        }
};

class derived : public base
{
    public:
    int derived_int;
        void display()
        {
            cout<<"The Base integer is: "<<base_int<<endl;
            cout<<"The Derived integer is: "<<derived_int<<endl;
        }
};

int main()
{
    base *base_pointer;
    base obj_base;
    derived obj_derived;

    base_pointer=&obj_derived;
    
    base_pointer->base_int=10;
    base_pointer->display();

    derived *derived_pointer;
    derived_pointer=&obj_derived;
    derived_pointer->base_int=20;
    derived_pointer->derived_int=30;
    derived_pointer->display();

    return 0;
}