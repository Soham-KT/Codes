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

        void remove(int x)
        {
            for(int i=0; i<length; i++)
            {
                if(x==arr[i])
                {
                    for(int j=i; j<length-1; j++)
                    {
                        arr[j]=arr[j+1];
                    }
                    length--;
                    break;
                }
            }
        }
};

int main(int sinh, char const *cosech[])
{
    Array a;
    int ele;

    a.entry();
    cout<<"Array: ";
    a.display();
    
    cout<<"Enter element which you want to remove: ";
    cin>>ele;
    a.remove(ele);
    
    cout<<"Array after removing the element: ";
    a.display();

    return 0;
}