#include <iostream>
using namespace std;

class employee
{
    int ecode, basic_salary, hra_percentage, da_percentage;

    public:
        void entry()
        {
            cout<<"Enter Employee code, basic salary, HRA percentage, DA percentage: ";
            cin>>ecode>>basic_salary>>hra_percentage>>da_percentage;
        }

        void show()
        {
            int total=basic_salary+hra_percentage+da_percentage;
            cout<<"Employee Code: "<<ecode<<endl<<"Total Salary: "<<total<<endl;
        }
};

int main()
{
    employee e1, *e;
    e=&e1;
    e->entry();
    e->show();

    return 0;
}