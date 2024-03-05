#include <iostream>
using namespace std;

class Array
{
    int *arr, size, length;

    public:
        Array()
        {
            size=length=0;
        }

        Array(int size, int length)
        {
            this->size=size;
            this->length=length;
            arr=new int[length];
        }

        void entry()
        {
            cout<<"Enter size of array: ";
            cin>>size;
            cout<<"Enter number of elements you want to enter in array(<=size): ";
            cin>>length;
            arr=new int[length];
            cout<<"Enter in array: ";
            for(int i=0; i<length; i++)
            {
                cin>>arr[i];
            }
        }

        void display()
        {
            for(int i=0; i<length; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void reverse()
        {
            for(int i=0; i<length/2; i++)
            {
                int temp=arr[i];
                arr[i]=arr[length-i-1];
                arr[length-i-1]=temp;
            }
        }
};


int main(int sinh, char const *cosech[])
{
    Array a;
    a.entry();
    cout<<"Array: ";
    a.display();
    
    cout<<"Reversed Array: ";
    a.reverse();
    a.display();

    return 0;
}