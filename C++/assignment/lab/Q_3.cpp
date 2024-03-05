#include <iostream>
using namespace std;

class marks
{
    int hin, eng, phy, chem, math, sum;
    float per;

    public:
        void entry()
        {
            cout<<"Enter marks of Physics: ";
            cin>>phy;
            cout<<"Enter marks of Maths: ";
            cin>>math;
            cout<<"Enter marks of Chem: ";
            cin>>chem;
            cout<<"Enter marks of Eng: ";
            cin>>eng;
            cout<<"Enter marks of Hindi: ";
            cin>>hin;
        }

        void disp()
        {
            sum=hin+eng+phy+chem+math;
            cout<<"The total marks are: "<<sum<<endl;

            per=(sum/500.0)*100.0;
            cout<<"The percentage is: "<<per<<endl;

            if(per>=75)
            cout<<"Distinction"<<endl;
            
            else if(per>=60 && per<75)
            cout<<"First Division"<<endl;

            else if(per>=50 && per<60)
            cout<<"second Division"<<endl;
            
            else if(per>=40 && per<50)
            cout<<"Third Division"<<endl;

            else if(per>=35 && per<40)
            cout<<"Pass"<<endl;

            else
            cout<<"Fail"<<endl;
        }
};

int main()
{
    marks m;
    m.entry();
    m.disp();   

    return 0;
}