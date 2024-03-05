#include <iostream>
using namespace std;

class array
{
    int *arr, size;

    public:
        array(int n)
        {
            cout<<"Constructor called"<<endl;
            size=n;
            arr=new int[size];
        }

        array()
        {
            cout<<"Constructor called"<<endl;
            size=0;
            arr=new int[size];
        }

        array(array &obj)
        {
            size=obj.size;
        }

        int operator[](int x)
        {
            return arr[size];
        }

        ~array()
        {
            cout<<"Destructor called"<<endl;
        }

        friend istream &operator>>(istream &input, array &a);
        friend ostream &operator<<(ostream &output, array &a);
};

istream &operator>>(istream &input, array &a)
{
    cout<<endl<<"Enter array: "<<endl;
    for(int i=0; i<a.size; i++)
    {
        input>>a.arr[i];
    }

    return input;
}

ostream &operator<<(ostream &output, array &a)
{
    cout<<endl;
    for(int i=0; i<a.size; i++)
    {
        output<<a.arr[i]<<" ";
    }
    cout<<endl;

    return output;
}

int main()
{
    array a1(5), a2(3);
    cin>>a1;
    cin>>a2;
    cout<<a1;
    cout<<a2;

    return 0;
}