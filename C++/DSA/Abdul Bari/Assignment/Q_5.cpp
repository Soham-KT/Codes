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

        void sort(){
            for(int i=0; i<size; i++){
                for(int j=0; j<size-i-1; j++){
                    if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
                }
            }
        }

        int count_ele(int ele){
            int count=0;
            for(int i=0; i<size; i++){
                if(ele==arr[i]) count++;
            }

            return count;
        }

        int first_occurance(int ele){
            for(int i=0; i<size; i++){
                if(ele==arr[i]) return i;
            }

            return -1;
        }

        bool position(int res){ return (res!=-1)?true:false; }
};

int main(int sinh, char const *cosech[])
{
    Array arr;
    cout<<"Enter in array: ";
    arr.Entry();
    cout<<"Array: ";
    arr.Display();
    cout<<"Sorted array: ";
    arr.sort();
    arr.Display();

    int ele, res;
    cout<<"Enter element: ";
    cin>>ele;
    res=arr.first_occurance(ele);

    if(!arr.position(res)){
        cout<<"Element not found"<<endl;
        return 0;
    }

    cout<<"First occurance of element: "<<arr.first_occurance(ele)+1<<endl;
    cout<<"Number of times element reapeated: "<<arr.count_ele(ele)<<endl;

    return 0;
}