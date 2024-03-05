#include <iostream>
using namespace std;

class DEqueue
{
    int front=-1, rear=-1, *arr, size;

    public:
        DEqueue()
        {
            cout<<"Enter size of queue: ";
            cin>>size;
            arr=new int[size];
        }

        bool is_full(){ return (rear==size-1 && front==0)?true:false; }
        bool is_empty(){ return (front==rear && rear==-1)?true:false; }

        void entry_rear(int ele)
        {
            if(is_full()) cout<<"Queue full"<<endl;
            else
            {
                rear++;
                arr[rear]=ele;
                if(front==-1) front++;
            }
        }

        void entry_front(int ele)
        {
            if(is_full()) cout<<"Queue full"<<endl;
            else
            {
                front--;
                arr[front]=ele;
            }
        }

        void delete_front()
        {
            if(is_empty()) cout<<"Queue empty"<<endl;
            else
            {
                cout<<"Element dequeued: "<<arr[front]<<endl;
                front++;
            }
        }
        
        void delete_rear()
        {
            if(is_empty()) cout<<"Queue empty"<<endl;
            else
            {
                cout<<"Element dequeued: "<<arr[rear]<<endl;
                rear--;
            }
        }

        void display()
        {
            if(front!=-1)
            {
                for(int i=front; i<=rear; i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }

            else
            {
                for(int i=0; i<=rear; i++)
                {
                    cout<<arr[i]<<" ";
                }
                cout<<endl;
            }
        }
};

int main(int sinh, char const *cosech[])
{
    DEqueue deq;
    int op;
    bool x=true;
    char choice;

    cout<<"Do you want I/P restricted queue or O/P restricted queue?(1/2): ";
    cin>>op;

    switch(op)
    {
        case 1:
            while(x==true)
            {
                cout<<"\n1)Entry from rear\n2)Deletion from rear\n3)Deletion from front\n4)display\nEnter your option: ";
                cin>>op;
                switch(op)
                {
                    case 1:
                        cout<<"Enter element: ";
                        cin>>op;
                        deq.entry_rear(op);
                        cout<<"Element entered"<<endl;
                        break;
                    
                    case 2:
                        deq.delete_rear();
                        break;

                    case 3:
                        deq.delete_front();
                        break;

                    case 4:
                        cout<<"Queue: ";
                        deq.display();
                        break;
                    
                    default:
                        cout<<"Wrong choice"<<endl;
                        break;
                }

                cout<<"Another Choice?(y/n):";
                cin>>choice;
                if(choice=='n') x=false;
            }
        
        case 2:
            while(x==true)
            {
                cout<<"\n1)Entry from rear\n2)Entry from front\n3)Deletion from front\n4)display\nEnter your option: ";
                cin>>op;
                switch(op)
                {
                    case 1:
                        cout<<"Enter element: ";
                        cin>>op;
                        deq.entry_rear(op);
                        cout<<"Element entered"<<endl;
                        break;
                    
                    case 2:
                        cout<<"Enter element: ";
                        cin>>op;
                        deq.entry_front(op);
                        cout<<"Element entered"<<endl;
                        break;

                    case 3:
                        deq.delete_front();
                        break;

                    case 4:
                        cout<<"Queue: ";
                        deq.display();
                        break;
                    
                    default:
                        cout<<"Wrong choice"<<endl;
                        break;
                }

                cout<<"Another Choice?(y/n):";
                cin>>choice;
                if(choice=='n') x=false;
            }

        default:
            cout<<"Wrong choice"<<endl;
            break;
    }

    return 0;
}