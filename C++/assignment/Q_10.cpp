#include <iostream>
using namespace std;

class dist
{
    int m, cm;

public:
    dist operator+(dist d)
    {
        dist res;

        res.m = m + d.m;
        res.cm = cm + d.cm;

        return res;
    }

    friend dist operator-(dist d1, dist d2);
    friend istream &operator>>(istream &input, dist &d);
    friend ostream &operator<<(ostream &output, dist &d);
};

dist operator-(dist d1, dist d2)
{
    dist d;
    d.m = d1.m - d2.m;
    d.cm = d1.cm - d2.cm;

    return d;
}

istream &operator>>(istream &input, dist &d)
{
    cout << "Enter distance in meter and in centimeter: ";
    input >> d.m >> d.cm;

    return input;
}

ostream &operator<<(ostream &output, dist &d)
{
    output << "Meters: " << d.m << " Centimeters: " << d.cm << endl;

    return output;
}

int main()
{
    dist d1, d2;
    char q = 'y';
    int op=0;

    cin >> d1;
    cin >> d2;

    while (q = 'y')
    {
        cout << "Enter your option: " << endl
             << "1)Add the distances" << endl
             << "2)Substract the distances" << endl
             << "3)Show the distances:" << endl;
        cout<<"Enter your choice: ";
        cin>>op;

        if(op==1)
        {
            dist sum;
            sum=d1+d2;
            cout<<sum;
        }

        else if(op==2)
        {
            dist sub;
            sub=d1-d2;
            cout<<sub;
        }

        else if(op==3)
        {
            cout<<d1;
            cout<<d2;
        }

        else
        {
            cout<<"Invalid Choice"<<endl;
        }

        cout<<"Another Choice?(y/n) ";
        cin>>q;

        if(q!='y')
        break;

    }

    return 0;
}