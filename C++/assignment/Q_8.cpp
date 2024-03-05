#include <iostream>
using namespace std;

class date
{
    int dd, mm, yy;

    public:
        void entry()
        {
            cout<<"Enter the date(dd/mm/yy): ";
            cin>>dd>>mm>>yy;
        }

        void display()
        {
            cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
        }

        void operator++(int x)
        {
            dd++;

            if(dd>30 && (mm==4 || mm==6 || mm==9 || mm==11 ))
            {
                dd=dd-30;
                mm++;
            }

            if(dd>31 && (mm==1 || mm==3 || mm==5 || mm==7 || mm==8 || mm==10))
            {
                dd=dd-31;
                mm++;
            }

            if(dd>31 && mm==12)
            {
                dd=dd-31;
                mm=1;
                yy++;
            }
        }
};

int main()
{
    date d;
    d.entry();
    d.display();
    d++;   
    d.display();   

    return 0;
}