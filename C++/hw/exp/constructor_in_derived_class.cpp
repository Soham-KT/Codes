#include <iostream>
using namespace std;

class base1
{
    int no_b1=0;

    public:
        base1(int a)
        {
            no_b1=a;
            cout<<"Base 1 constructor called"<<endl;
        }

        void show_b1()
        {
            cout<<"Base 1: "<<no_b1<<endl;
        }
};

class base2
{
    int no_b2=0;

    public:
        base2(int b)
        {
            no_b2=b;
            cout<<"Base 2 constructor called"<<endl;
        }

        void show_b2()
        {
            cout<<"Base 2: "<<no_b2<<endl;
        }
};

class derived : public base1, public base2
// public base1, public base2 --> base 1 will be called first
// public base2, public base1 --> base 2 will be called first
// public base2, virtual public base1 --> base 1 will be called first because virtual has priority
{
    int no_d=0;

    public:
        derived(int a, int b, int c) : base1(a), base2(b)
        {
            cout<<"Constructor of derived called"<<endl;
            no_d=c;
        }

        void show_d()
        {
            cout<<"Derived: "<<no_d<<endl;
        }
};

int main()
{
    derived d1(1,2,3);

    d1.show_b1();
    d1.show_b2();
    d1.show_d();

    return 0;
}