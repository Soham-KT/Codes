#include <iostream>
#include <fstream>
using namespace std;

class EMP
{
    string name, address, dep;
    int id, no, yr_of_joi;

    public:
        void entry()
        {
            ofstream out("lol.txt");
            EMP emp;
            
            cout<<"Enter employee name and id: ";
            cin>>emp.name>>emp.id;
            cout<<"Enter number and address: ";
            cin>>emp.no>>emp.address;
            cout<<"Enter department and year of joining: ";
            cin>>emp.dep>>emp.yr_of_joi;

            out<<"Name: "<<name<<endl<<"id: "<<id;
        }

        void display()
        {
            string str;
            ifstream in("lol.txt");
            while(in.eof()==0)
            {
                getline(in, str);
                cout<<str<<endl;
            }

            in.close();
        }
};

int main(int sinh, char const *cosech[])
{
    EMP ell[3];
    for(int i=0; i<3; i++)
    {
        ell->entry();
    }

    ell->display();

    return 0;
}