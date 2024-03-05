#include <iostream>
using namespace std;

class base
{
    protected:
        int count=0;
    
    public:
        void display()
        {
            cout<<"This is base class and count = "<<count<<endl;
            count++;
        }
};

class derived : public base
{
    public:
        void display()
        {

            cout<<"This is derived class and count = "<<count<<endl;
        }
};

int main()
{
    base *pointer_base;
    derived obj_derived;
    
    pointer_base=&obj_derived;

    pointer_base->display();

    return 0;
}