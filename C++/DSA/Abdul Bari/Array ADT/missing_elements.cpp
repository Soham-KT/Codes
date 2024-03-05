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

        void missing_ele()
        {
            int diff=arr[0];
            for(int i=0; i<length; i++)
            {
                if(diff!=arr[i]-i)
                {
                    while(diff<arr[i]-i)
                    {
                        cout<<diff+i<<" ";
                        diff++;
                    } 
                }
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
};

int main(int sinh, char const *cosech[])
{
    Array a;
    a.entry();
    cout<<"Array: ";
    a.sort();
    cout<<"Missing elements in array: ";
    a.missing_ele();

    return 0;
}