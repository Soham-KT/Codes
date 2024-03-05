#include <iostream>
using namespace std;

class Node{
    public:
        int ele, priority;
};

class Priority_Queue{
    Node *queue;
    int front=-1, rear=-1, size;

    public:
        Priority_Queue(){
            cout<<"Enter size: ";
            cin>>size;
            queue=new Node[size];
        }

        bool is_full(){ return (rear==size-1)?true:false; }

        bool is_empty(){ return (front==rear)?true:false; }

        void enqueue(int ele, int prio){
            if(is_full()){
                cout<<"Queue overflow"<<endl;
                return;
            }
            rear++;
            queue[rear].ele=ele;
            queue[rear].priority=prio;
        }

        void dequeue(){
            if(is_empty()){
                cout<<"Queue underflow"<<endl;
                return;
            }

            cout<<"Dequeued element: "<<queue[front].ele;
            front++;
        }

        void priority_sort(){
            for(int i=front+1; i<size; i++)
                for(int j=front; j<i; j++)
                    if(queue[i].priority<queue[j].priority){
                        Node temp=queue[i];
                        for(int k=i; k>j; k--) queue[k]=queue[k-1];
                        queue[j]=temp;
                    }
        }

        void display(){
            cout<<"(Element, Priority): ";
            if(front==-1){
                for(int i=0; i<=rear; i++)
                    cout<<"("<<queue[i].ele<<", "<<queue[i].priority<<")";
                cout<<endl;
            }
            else{
                for(int i=0; i<=rear; i++)
                    cout<<"("<<queue[i].ele<<", "<<queue[i].priority<<")";
                cout<<endl;
            }
        }
};

int main(int sinh, char const *cosech[])
{
    Priority_Queue Q;
    int ele, op, prio;
    char q; 
    
    do{
        cout<<"1)Enqueue\n2)Dequeue\n3)Priority sort\n4)Display queue\nEnter your choice: ";
        cin>>op;
        
        switch(op){
            case 1:
                cout<<"Enter element and priority: ";
                cin>>ele>>prio;
                Q.enqueue(ele, prio);
                break;
            
            case 2:
                Q.dequeue();
                break;

            case 3:
                Q.priority_sort();
                cout<<"sorted"<<endl;
                break;
            
            case 4:
                Q.display();
                break;
            
            default:
                cout<<"Invalid option"<<endl;
                break;
        }

        cout<<"Another entry?(y/n): ";
        cin>>q;
    } while (q=='y');

    return 0;
}