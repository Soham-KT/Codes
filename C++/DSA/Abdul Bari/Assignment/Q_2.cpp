#include <iostream>
using namespace std;

class Array
{
    int *arr, size;

    public:
        Array()
        {
            cout<<"Enter size of array: ";
            cin>>size;
            arr=new int[size];
        }

        Array(int size){
            this->size=size;
            arr=new int[size];
        }

        void entry()
        {
            cout<<"Enter in array: ";
            for(int i=0; i<size; i++)
            {
                cin>>arr[i];
            }
        }

        void sort()
        {
            for(int i=0; i<size; i++)
            {
                for(int j=0; j<size-i-1; j++)
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

        void insert(int ind, int ele)
        {
            if(ind>=0 && ind<size)
            {
                for(int i=size; i>ind; i--)
                {
                    arr[i]=arr[i-1];
                }
                arr[ind]=ele;
                size++;
            }
        }

        Array insert_sorted(Array a1)
        {
            Array a3(size+a1.size);
            int i=0, j=0, k=0;
            for(i; i<size; i++, k++) a3.arr[k]=arr[i];
            for(j; j<a1.size; j++, k++) a3.arr[k]=a1.arr[j];
            a3.sort();
            return a3;
        }

        void display()
        {
            for(int i=0; i<size; i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
};

int main(int sinh, char const *cosech[])
{
    Array a1, a2;
    a1.entry();
    a2.entry();
    cout<<"Array 1: ";
    a1.display();
    cout<<"Array 2: ";
    a2.display();
    a1.sort();
    a2.sort();
    cout<<"Array 1 sorted: ";
    a1.display();
    cout<<"Array 2 sorted: ";
    a2.display();

    cout<<"Inserting sorted in array 1: ";
    a1=a1.insert_sorted(a2);
    a1.display();

    return 0;
}