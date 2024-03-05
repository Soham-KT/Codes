#include <iostream>
using namespace std;

class Queue
{
    int size, front=-1, end=-1, *queue;

    public:
        Queue()
        {
            cout<<"Enter size: ";
            cin>>size;
            queue=new int[size];
        }

        void enqueue(int ele)
        {
            if(((end+1)%size==front) || (front==-1 && end==size-1)) cout<<"Queue is full"<<endl;
            else
            {
                end=(end+1)%size;
                queue[end]=ele;
            }
        }

        int dequeue()
        {
            int x=-1;
            if(front==end) cout<<"Queue empty"<<endl;
            else
            {
                front=(front+1)%size;
                x=queue[front];
            }

            return x;
        }

        void display()
        {
            int i = front + 1;
            do
            {
                cout << queue[i] <<" ";
                i = (i + 1) % size;
            } while (i != (end + 1) % size);
            cout<<endl;
        }
};

int main(int sinh, char const *cosech[])
{
    Queue q;
    int ele;

    cout<<"Enter elements: ";
    for(int i=0; i<5; i++)
    {
        cin>>ele;
        q.enqueue(ele);
    }

    cout<<"Queue: ";
    q.display();

    ele=q.dequeue();
    cout<<"Dequeued element: "<<ele<<endl;
    cout<<"Queue: ";
    q.display();
    
    ele=q.dequeue();
    cout<<"Dequeued element: "<<ele<<endl;
    cout<<"Queue: ";
    q.display();
    
    ele=q.dequeue();
    cout<<"Dequeued element: "<<ele<<endl;
    cout<<"Queue: ";
    q.display();

    cout<<"Enter 2 elements: ";
    for(int i=0; i<2; i++)
    {
        cin>>ele;
        q.enqueue(ele);
    }
    cout<<"Queue: ";
    q.display();


    return 0;
}