#include <iostream>
using namespace std;

class student
{
    int roll_no;
    string name;

    public:
        student()
        {
            name="Soham";
            roll_no=69;
        }

        friend istream &operator>>(istream &input, student &s);
        friend ostream &operator<<(ostream &output, student &s);
    
};

istream &operator>>(istream &input, student &s)
{
    input>>s.name>>s.roll_no;
    return input;
}

ostream &operator<<(ostream &output, student &s)
{
    output<<"Name is: "<<s.name<<endl<<"Roll No is: "<<s.roll_no<<endl;
    return output;
}

int main()
{
    student s1, s2;
    cout<<"Enter name and roll no:";
    cin>>s2;
    cout<<s1;
    cout<<s2;

    return 0;
}