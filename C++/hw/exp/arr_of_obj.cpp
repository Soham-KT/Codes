#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

    public:
        void entry()
        {
            salary=150;
            cout<<"Enter id of employee: ";
            cin>>id;
        }
        void display()
        {
            cout<<"ID of this employee is: "<<id<<endl;
        }
        
};

int main()
{
    employee google[4];

    for (int i = 0; i < 4; i++)
    {
        google[i].entry();
        google[i].display();
    }
    

    return 0;
}