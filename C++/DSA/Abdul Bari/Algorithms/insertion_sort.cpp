#include <iostream>
using namespace std;

class Array{
    int *arr, size;

    public:
        Array(){
            cout<<"Enter size: ";
            cin>>size;
            arr=new int[size];
        }

        void Entry(){
            for(int i=0; i<size; i++){
                cin>>arr[i];
            }
        }

        void Display(){
            for(int i=0; i<size; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void insertion_sort(){
            for(int i=1; i<size; i++)
                for(int j=0; j<i; j++)
                    if(arr[i]<arr[j]){
                        int temp=arr[i];
                        for(int k=i; k>j; k--) arr[k]=arr[k-1];
                        arr[j]=temp;
                    }
        }
};

int main(int sinh, char const *cosech[])
{
    Array arr;
    cout<<"Enter in array: ";
    arr.Entry();
    cout<<"Array: ";
    arr.Display();
    cout<<"Insertion sort: ";
    arr.insertion_sort();
    arr.Display();

    return 0;
}