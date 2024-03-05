#include <iostream>
using namespace std;

class Array
{
    int *arr, size, length;

    public:
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

        int search(int ele)
        {
            for(int i=0; i<length; i++)
            {
                if(ele==arr[i])
                {
                    int temp=arr[i];
                    arr[i]==arr[0];
                    arr[0]==temp;

                    return (i+1);
                }
            }
            return -1;
        }
};

int main(int sinh, char const *cosech[])
{
    Array a;
    int ele, res;
    a.entry();
    cout<<"Array: ";
    a.display();

    cout<<"Enter element to search for: ";
    cin>>ele;
    res=a.search(ele);
    if(res!=-1) cout<<"Element found at: "<<res;
    else cout<<"Element not found";

    return 0;
}