#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

    public:
        void entry()
        {
            cout<<"Enter employee ID: ";
            cin>>id;
            count++;
        }
        void display()
        {
            cout<<"ID is : "<<id<<" and ID no. is: "<<count<<endl;
        }
};

int employee:: count=100;  //count can only be initialized here

int main()
{
    employee soham, tanishq, akshat;
    soham.entry();
    soham.display();
    tanishq.entry();
    tanishq.display();
    akshat.entry();
    akshat.display();
}