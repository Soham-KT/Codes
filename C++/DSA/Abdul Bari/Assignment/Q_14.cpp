#include <iostream>
using namespace std;

class Queue
{
    int size, front=-1, end=-1, *queue;

    public:
        Queue(){
            cout<<"Enter size: ";
            cin>>size;
            queue=new int[size];
        }

        void enqueue(int ele){
            if(((end+1)%size==front) || (front==-1 && end==size-1)) cout<<"Queue is full"<<endl;
            else{
                end=(end+1)%size;
                queue[end]=ele;
            }
        }

        int dequeue(){
            int x=-1;
            if(front==end) cout<<"Queue empty"<<endl;
            else{
                x=queue[front];
                front=(front+1)%size;
            }

            return x;
        }

        void display(){
            int i = front;
            do{
                cout << queue[i] <<" ";
                i = (i + 1) % size;
            } while (i != (end + 1) % size);
            cout<<endl;
        }
};

int main(int sinh, char const *cosech[])
{
    Queue Q;
    int ele, op;
    char q; 
    
    do{
        cout<<"1)Enqueue\n2)Dequeue\n3)Display queue\nEnter your choice: ";
        cin>>op;
        
        switch(op){
            case 1:
                cout<<"Enter element to enqueue: ";
                cin>>ele;
                Q.enqueue(ele);
                break;
            
            case 2:
                ele=Q.dequeue();
                cout<<"element to be deleted: "<<ele<<endl;
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