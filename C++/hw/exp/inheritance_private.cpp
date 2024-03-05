#include <iostream>
using namespace std;

class base
{
    int data1, data2;
    public:
        void setdata()
        {
            data1=10;
            data2=20;
        }

        int getdata1()
        {
            return data1;
        }

        int getdata2()
        {
            return data2;
        }
};

class derived : private base
{
    int data3;
    public:
        void mul()
        {
            setdata(); //only change is here
            data3=getdata1()*getdata2();
        }

        void display()
        {
            cout<<"Data 1 is: "<<getdata1()<<endl;
            cout<<"Data 2 is: "<<getdata2()<<endl;
            cout<<"Data 3 is: "<<data3<<endl;
        }
};

int main()
{
    derived der;
    der.mul();
    der.display();

    return 0;
}