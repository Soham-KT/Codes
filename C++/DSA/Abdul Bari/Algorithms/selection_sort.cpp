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

        void selection_sort(){
            for(int i=0; i<size-1; i++){
                for(int j=i+1; j<size; j++){
                    if(arr[i]>arr[j]) swap(arr[i], arr[j]);
                }
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
    cout<<"Selection sort: ";
    arr.selection_sort();
    arr.Display();

    return 0;
}