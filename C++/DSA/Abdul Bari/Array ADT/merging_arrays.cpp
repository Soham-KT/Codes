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

        void merge(Array &a1, Array &a2)
        {
            length=a1.length+a2.length;
            size=a1.size+a2.size;

            int i=0;
            for(i; i<a1.length; i++)
            {
                arr[i]=a1.arr[i];
            }

            for(int j=0; j<a2.length; j++, i++)
            {
                arr[i]=a2.arr[j];
            }
        }
       
};


int main(int sinh, char const *cosech[])
{
    Array a1, a2, a;
    cout<<"Enter for Array 1:\n";
    a1.entry();
    cout<<"Array 1: ";
    a1.display();

    cout<<"\nEnter for Array 2:\n";
    a2.entry();
    cout<<"Array 2: ";
    a2.display();

    a.merge(a1, a2);
    cout<<"\nMerged Array: ";
    a.display();

    return 0;
}