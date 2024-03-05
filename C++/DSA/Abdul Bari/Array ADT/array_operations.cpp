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

        int get(int x)
        {
            if(x>=0 && x<length) return arr[x];
            return -1;
        }

        void set(int pos, int ele)
        {
            if(pos>=0 && pos<length) arr[pos]=ele;
        }

        int max()
        {
            int max=arr[0];
            for(int i=0; i<length; i++)
            {
                if(max<arr[i]) max=arr[i];
            }

            return max;
        }
        
        int min()
        {
            int min=arr[0];
            for(int i=0; i<length; i++)
            {
                if(min>arr[i]) min=arr[i];
            }

            return min;
        }
        
        int sum()
        {
            int sum=0;
            for(int i=0; i<length; i++)
            {
                sum+=arr[i];
            }

            return sum;
        }
        
        float avg()
        {
            int sum=0;
            float avg;

            for(int i=0; i<length; i++)
            {
                sum+=arr[i];
            }

            avg=(float)sum/(float)length;

            return avg;
        }
};

int main(int sinh, char const *cosech[])
{
    Array a;
    int ind, pos, ele;
    a.entry();
    a.display();
    cout<<"Enter the index: ";
    cin>>ind;
    cout<<"Element at index "<<ind<<" is: "<<a.get(ind-1)<<endl;
    cout<<"Enter new element and index of element you want to swap: ";
    cin>>ele>>pos;
    a.set(pos-1, ele);
    cout<<"After swapping ";
    a.display();
    cout<<"Maximum element in array: "<<a.max()<<endl;
    cout<<"Minimum element in array: "<<a.min()<<endl;
    cout<<"Sum of elements in array: "<<a.sum()<<endl;
    cout<<"Average of elements in array: "<<a.avg()<<endl;

    return 0;
}