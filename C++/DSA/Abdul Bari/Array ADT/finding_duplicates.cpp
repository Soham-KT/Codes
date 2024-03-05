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

        void sort()
        {
            for(int i=0; i<length; i++)
            {
                for(int j=0; j<length-i-1; j++)
                {
                    if(arr[j]>arr[j+1])
                    {
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
        }

        void duplicate()
        {
            int dup=0;
            for(int i=0; i<length; i++)
            {
                if(arr[i]==arr[i+1] && arr[i]!=dup)
                {
                    cout<<arr[i]<<" ";
                    dup=arr[i];
                }
            }
            cout<<endl;

            for(int i=0; i<length-1; i++)
            {
                if(arr[i]==arr[i-1])
                {
                    int j=i+1;
                    while(arr[j]==arr[i]) j++;
                    cout<<arr[i]<<" is duplicated "<<j-i<<" times"<<endl;
                    i=j-1;
                }
            }
        }
};

int main(int sinh, char const *cosech[])
{
    Array a;
    a.entry();
    cout<<"Array: ";
    a.display();
    a.sort();
    cout<<"Duplicate elements in array: ";
    a.duplicate();

    return 0;
}