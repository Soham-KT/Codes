#include <iostream>
using namespace std;

class Array{
    int *arr, size;

    public:
        Array(int size){
            this->size=size;
            arr=new int[size];
        }

        void entry(){

            cout<<"Enter in array: ";
            for(int i=0; i<size; i++) cin>>arr[i];
        }
        
        void display(){
            cout<<"Array: ";
            for(int i=0; i<size; i++) cout<<arr[i]<<" ";
            cout<<endl;
        }

        Array merge(Array a){
            Array a_(size+a.size);
            int i=0, j=0, k=0;
            while(i<size && j<a.size){
                if(arr[i]<=a.arr[j]){
                    a_.arr[k]=arr[i];
                    i++;
                    k++;
                }

                else{
                    a_.arr[k]=a.arr[j];
                    j++;
                    k++;
                }
            }
            for(; i<size; i++, k++) a_.arr[k]=arr[i]; 
            for(; j<a.size; j++, k++) a_.arr[k]=a.arr[j];

            return a_; 
        }

        void sort(){
            for(int i=0; i<size; i++){
                for(int j=0; j<size-i-1; j++){
                    if(arr[j]>arr[j+1]){
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                    }
                }
            }
        }
};

int main(int sinh, char const *cosech[])
{
    int size1, size2;
    cout<<"Enter size of array 1: ";
    cin>>size1;
    cout<<"Enter size of array 2: ";
    cin>>size2;

    Array a1(size1), a2(size2), a3(size1+size2);
    a1.entry();
    a2.entry();
    a1.sort();
    a2.sort();
    cout<<"Sorted array 1: ";
    a1.display();
    cout<<"Sorted array 2: ";
    a2.display();
    a3=a1.merge(a2);
    cout<<"Merged array: ";
    a3.display();

    return 0;
}