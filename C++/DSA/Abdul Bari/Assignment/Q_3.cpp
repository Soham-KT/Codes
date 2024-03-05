#include <iostream>
using namespace std;

class Array{
    int *arr, size;

    public:
        Array(int size){
            this->size=size;
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

        void Sort(){
            for(int i=0; i<size; i++){
                for(int j=0; j<size-i-1; j++){
                    if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
                }
            }
        }

        Array merge(Array arr1){
            Array arr_(size+arr1.size);
            
            int i=0, j=0, k=0;
            while(i<size) arr_.arr[k++]=arr[i++];
            while(j<arr1.size) arr_.arr[k++]=arr1.arr[j++];
            arr_.Sort();

            return arr_;
        }
};

int main(int sinh, char const *cosech[])
{
    int s1, s2;
    cout<<"Enter size of array 1: ";
    cin>>s1;
    cout<<"Enter size of array 2: ";
    cin>>s2;

    Array arr1(s1), arr2(s2), arr3(s1+s2);
    cout<<"Enter in array 1: ";
    arr1.Entry();
    cout<<"Enter in array 2: ";
    arr2.Entry();
    cout<<"Array 1: ";
    arr1.Display();
    cout<<"Array 2: ";
    arr2.Display();
    arr1.Sort();
    arr2.Sort();
    arr3=arr1.merge(arr2);
    cout<<"Merge of sorted arrays: ";
    arr3.Display();

    return 0;
}