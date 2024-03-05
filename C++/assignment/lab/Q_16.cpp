#include <iostream>
using namespace std;

template <class T>
class exp
{
    T x;

    public:
        void entry()
        {
            cout<<"Enter parameter: ";
            cin>>x;
        }

        exp<T> operator+(exp<T> s)
        {
            exp<T> j;
            j.x=x+s.x;

            return j;
        }  

        void display()
        {
            cout<<"x: "<<x<<endl;
        }
};

int main()
{
    exp<int> n1, n2;
    n1.entry();
    n2.entry();
    exp<int> n3;
    n3=n1+n2;
    n1.display();
    n2.display();
    cout<<"After Addition: "<<endl;
    n3.display();
    
    exp<string> s1, s2;
    s1.entry();
    s2.entry();
    exp<string> s3;
    s3=s1+s2;
    s1.display();
    s2.display();
    cout<<"After Concatination: "<<endl;
    s3.display();

    return 0;
}