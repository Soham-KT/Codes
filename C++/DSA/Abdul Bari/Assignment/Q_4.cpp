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

        int leniar_search(int ele){
            for(int i=0; i<size; i++){
                if(ele==arr[i]) return i;
            }

            return -1;
        }

        int binary_search_iterative(int ele){
            int low=0, high=size-1;
            while(low!=high){
                int mid=(low+high)/2;
                if(ele==arr[mid]) return mid;
                else if(ele<mid) high=mid-1;
                else if(ele>mid) low=mid+1;
            }

            return -1;
        }

        void position(int res){
            if(res!=-1) cout<<"The element found at position: "<<res+1<<endl;
            else cout<<"Element not found"<<endl;
        }

        friend int binary_search_recursive(Array array, int ele, int low, int high);

        int Size(){ return size; }
};

int binary_search_recursive(Array array, int ele, int low, int high){
    if(low!=high){
        int mid=(low+high)/2;
        if(ele==array.arr[mid]) return mid;
        else if(ele<array.arr[mid]) binary_search_recursive(array, ele, low, mid-1);
        else if(ele>array.arr[mid]) binary_search_recursive(array, ele, mid+1, high); 
    }

    else return -1;
}

int main(int sinh, char const *cosech[])
{
    Array arr;
    int ele, res=-1;

    cout<<"Enter in array: ";
    arr.Entry();
    cout<<"Array: ";
    arr.Display();
    arr.sort();
    cout<<"Sorted array: ";
    arr.Display();
    
    cout<<"Enter element to search: ";
    cin>>ele;
    
    cout<<"Leniar search:"<<endl;
    res=arr.leniar_search(ele);
    arr.position(res);
    
    cout<<"Binary (iterative) search: "<<endl;
    res=arr.binary_search_iterative(ele);
    arr.position(res);

    int high=arr.Size();
    cout<<"Binary (recursive) search: "<<endl;
    res=binary_search_recursive(arr, ele, 0, high-1);
    arr.position(res);

    return 0;
}