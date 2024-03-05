#include <iostream>
using namespace std;

class Queue
{
    int size, front=-1, end=-1, *queue;

    public:
        void enter_size()
        {
            cout<<"Enter size: ";
            cin>>size;
        }

        void enqueue(int ele)
        {
            if(end==size-1) cout<<"Queue is full"<<endl;
            else
            {
                end++;
                queue[end]=ele;
            }
        }

        int dequeue()
        {
            int x=-1;
            if(front==end) cout<<"Queue empty"<<endl;
            else
            {
                front++;
                x=queue[front];
            }

            return x;
        }

        void display()
        {
            for(int i=front+1; i<=end; i++)
            {
                cout<<queue[i]<<" ";
            }
            cout<<endl;
        }
};

int main(int sinh, char const *cosech[])
{
    Queue q;
    int ele;

    q.enter_size();// enter 5
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

    return 0;
}