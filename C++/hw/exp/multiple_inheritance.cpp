#include <iostream>
using namespace std;

class base1
{
    protected:
        int base1int;
    
    public:
        void setbase1int(int x)
        {
            base1int=x;
        }
};

class base2
{
    protected:
        int base2int;
    
    public:
        void setbase2int(int x)
        {
            base2int=x;
        }
};

class derived : public base1, public base2
{
    public:
        void show_res()
        {
            cout<<"Base 1: "<<base1int<<endl;
            cout<<"Base 2: "<<base2int<<endl;
            cout<<"Sum of these is : "<<base1int+base2int<<endl;
        }
};

int main()
{
    derived d1;
    d1.setbase1int(25);
    d1.setbase2int(10);
    d1.show_res();
    
    return 0;
}