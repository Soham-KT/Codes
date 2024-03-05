#include <iostream>
using namespace std;

class Queue{
    int size, front=-1, end=-1, *queue;

    public:
        void enter_size(){
            cout<<"Enter size: ";
            cin>>size;
        }

        void enqueue(int ele){
            if(end==size-1) cout<<"Queue is full"<<endl;
            else{
                end++;
                queue[end]=ele;
            }
        }

        int dequeue(){
            int x=-1;
            if(front==end) cout<<"Queue empty"<<endl;
            else{
                front++;
                x=queue[front];
            }

            return x;
        }

        void display(){
            for(int i=front+1; i<=end; i++){
                cout<<queue[i]<<" ";
            }
            cout<<endl;
        }
};

int main(int sinh, char const *cosech[])
{
    Queue Q;
    int ele, op;
    char q;
    Q.enter_size();
    do{
        cout<<"1)Enter\n2)Delete\n3)Display queue\nEnter your choice: ";
        cin>>op;
        
        switch(op){
            case 1:
                cout<<"Enter element to enqueue: ";
                cin>>ele;
                Q.enqueue(ele);
                break;
            
            case 2:
                ele=Q.dequeue();
                cout<<"Element to dequeue: "<<ele<<endl;
                break;
            
            case 3:
                cout<<"Queue: ";
                Q.display();
                break;
            
            default:
                cout<<"Invalid option"<<endl;
                break;
        }

        cout<<"Another entry?(y/n):";
        cin>>q;
    } while (q=='y');

    return 0;
}