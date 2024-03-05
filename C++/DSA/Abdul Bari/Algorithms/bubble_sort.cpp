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
        
        void bubble_sort(){
            for(int i=0; i<size; i++){
                for(int j=0; j<size-i-1; j++){
                    if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
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
    cout<<"Bubble sort: ";
    arr.bubble_sort();
    arr.Display();


    return 0;
}