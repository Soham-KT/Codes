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
        
        void bubble_sort(){
            for(int i=0; i<size; i++){
                for(int j=0; j<size-i-1; j++){
                    if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
                }
            }
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
    Array arr1;
    cout<<"Enter in array: ";
    arr1.Entry();
    cout<<"Array: ";
    arr1.Display();
    cout<<"Selection sort: ";
    arr1.selection_sort();
    arr1.Display();

    Array arr2;
    cout<<"Enter in array: ";
    arr2.Entry();
    cout<<"Array: ";
    arr2.Display();
    cout<<"Bubble sort: ";
    arr2.bubble_sort();
    arr2.Display();

    Array arr3;
    cout<<"Enter in array: ";
    arr3.Entry();
    cout<<"Array: ";
    arr3.Display();
    cout<<"Insertion sort: ";
    arr3.insertion_sort();
    arr3.Display();

    return 0;
}