#include <iostream>
using namespace std;

class Array{
    int *arr, size, length;

    public:
        Array(){
            size=length=0;
        }

        Array(int size, int length){
            this->size=size;
            this->length=length;
            arr=new int[length];
        }

        void entry(){
            cout<<"Enter size of array: ";
            cin>>size;
            cout<<"Enter number of elements you want to enter in array(<=size): ";
            cin>>length;
            arr=new int[length];
            cout<<"Enter in array: ";
            for(int i=0; i<length; i++){
                cin>>arr[i];
            }
        }

        void display(){
            for(int i=0; i<length; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }

        void append(int x){
            if(length<size){
                arr[length]=x;
                length++;
            }
            else return;
        }

        void insert(int ind, int ele){
            if(ind>=0 && ind<length){
                for(int i=length; i>ind; i--){
                    arr[i]=arr[i-1];
                }
                arr[ind]=ele;
                length++;
            }

            else if(ind==length) append(ind);
            else return;
        }
};

int main(int sinh, char const *cosech[]){
    Array a;
    int app, ind, ele;

    a.entry();
    cout<<"Array: ";
    a.display();

    cout<<"Enter element to append: ";
    cin>>app;
    a.append(app);
    cout<<"After appending: ";
    a.display();
    
    cout<<"Enter element to insert and position: ";
    cin>>ele>>ind;
    a.insert((ind-1), ele);
    cout<<"After inserting: ";
    a.display();

    return 0;
}