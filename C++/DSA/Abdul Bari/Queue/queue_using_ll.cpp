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
    Queue q;
    int res;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout<<"Queue: ";
    q.display();

    res=q.dequeue();
    cout<<"Dequed Element: "<<res<<endl;

    cout<<"Queue: ";
    q.display();

    res=q.dequeue();
    cout<<"Dequed Element: "<<res<<endl;

    cout<<"Queue: ";
    q.display();

    return 0;
}