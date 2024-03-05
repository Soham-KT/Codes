#include <iostream>
using namespace std;

class Node
{
    public: 
        int data;
        Node *next;
};

class Queue
{
    Node *head=new Node;
    Node *tail;

    public:
        Queue(){ head=nullptr; tail=nullptr; }

        void enqueue(int ele)
        {
            Node *temp=new Node;
            if(temp==nullptr) cout<<"Queue Full"<<endl;
            else
            {
                temp->data=ele;
                temp->next=nullptr;
                if(head==nullptr) head=tail=temp;
                else
                {
                    tail->next=temp;
                    tail=temp;
                }
            }
        }

        int dequeue()
        {
            int x=-1;
            Node *p=head;
            if(head==nullptr) cout<<"Queue Empty"<<endl;
            else
            {
                head=head->next;
                x=p->data;
                delete p;
            }

            return x;
        }

        void display()
        {
            for(Node *p=head; p; p=p->next)
            {
                cout<<p->data<<" ";
            }
            cout<<endl;
        }

};

int main(int sinh, char const *cosech[])
{
    Queue queue;
    int ele, ind;
    char q;
    int op;
    do
    {
        cout<<"1)Enqueue\n2)Dequeue\n3)Display queue\nEnter your choice: ";
        cin>>op;
        
        switch(op)
        {
            case 1:
                cout<<"Enter element to enqueue: ";
                cin>>ele;
                queue.enqueue(ele);
                break;
            
            case 2:
                ele=queue.dequeue();
                cout<<"Element popped: "<<ele<<endl;
                break;
            
            case 3:
                cout<<"Stack: ";
                queue.display();
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