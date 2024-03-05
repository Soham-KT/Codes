#include <iostream>
using namespace std;

class Time
{
    int hr, min;

    public:
        Time operator+(Time t)
        {
            Time x;

            x.hr=hr+t.hr;
            x.min=min+t.min;

            if(x.min>=60)
            {
                x.hr++;
                x.min=x.min-60;
            }

            if(x.hr>12)
            x.hr=x.hr-12;

            return x;
        }

        bool operator>(Time t)
        {
            if(hr>t.hr && min>t.min)
            return true;

            else
            return false;
        }

        friend ostream &operator<<(ostream &output, Time &t);
        friend istream &operator>>(istream &input, Time &t);
};

istream &operator>>(istream &input, Time &t)
{
    cout<<"Enter time in hours and minutes: ";
    input>>t.hr>>t.min;

    return input;
}

ostream &operator<<(ostream &output, Time &t)
{
    output<<t.hr<<":"<<t.min<<endl;

    return output;
}

int main()
{
    Time t1, t2, t3;
    
    cin>>t1;
    cin>>t2;

    t3=t1+t2;
    
    cout<<t1;
    cout<<t2;
    cout<<t3;

    if(t1>t2==true)
    cout<<t1<<" > "<<t2;

    else
    cout<<t1<<" < "<<t2;
    

    return 0;
}