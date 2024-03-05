#include <iostream>
using namespace std;

class student
{
    int roll_no;
    string name;

    public:
        void entry()
        {
            cout<<"Enter name and roll number: ";
            cin>>name>>roll_no;
        }

        void show()
        {
            cout<<"Name: "<<name<<endl<<"Roll number: "<<roll_no<<endl;
        }
};

int main()
{
    student s1, *s;
    s=&s1;

    s->entry();
    s->show();

    return 0;
}