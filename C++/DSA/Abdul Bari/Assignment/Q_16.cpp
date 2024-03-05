#include <iostream>
using namespace std;

class DEqueue{
    int front=-1, rear=-1, *arr, size;

    public:
        DEqueue(){
            cout<<"Enter size of queue: ";
            cin>>size;
            arr=new int[size];
        }

        bool is_full(){ return (rear==size-1)?true:false; }
        bool is_empty(){ return (front==rear)?true:false; }

        void entry_rear(int ele){
            if(is_full()) cout<<"Queue full"<<endl;
            else{
                rear++;
                arr[rear]=ele;
                if(front==-1) front++;
            }
        }

        void entry_front(int ele){
            if(front==0) cout<<"Queue full"<<endl;
            else{
                front--;
                arr[front]=ele;
            }
        }

        void delete_front(){
            if(is_empty()) cout<<"Queue empty"<<endl;
            else{
                cout<<"Element dequeued: "<<arr[front]<<endl;
                front++;
            }
        }
        
        void delete_rear(){
            if(rear==-1) cout<<"Queue empty"<<endl;
            else{
                cout<<"Element dequeued: "<<arr[rear]<<endl;
                rear--;
            }
        }

        void display(){
            if(front!=-1){
                for(int i=front; i<=rear; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }

            else{
                for(int i=0; i<=rear; i++){
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
};

int main(int sinh, char const *cosech[])
{
    DEqueue deq;
    int op, ele;
    bool x=true;
    char choice;

    do{
        cout<<"1)Entry rear\n2)Entry front\n3)Delete rear\n4)Delete front\n5)Display\nEnter your choice: ";
        cin>>op;
        
        switch (op)
        {
        case 1:
            cout<<"Enter element: ";
            cin>>ele;
            deq.entry_front(ele);
            break;

        case 2:
            cout<<"Enter element: ";
            cin>>ele;
            deq.entry_rear(ele);
            break;

        case 3:
            deq.delete_front();
            break;

        case 4:
            deq.delete_rear();
            break;

        case 5:
            deq.display();
            break;
        
        default:
            cout<<"Invalid option"<<endl;
            break;
        }

        cout<<"Another choice?(y/n): ";
        cin>>choice;

    }while(choice=='y');

    return 0;
}