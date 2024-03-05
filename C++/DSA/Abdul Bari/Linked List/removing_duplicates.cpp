#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
};

class LinkedList
{
    int data;
    Node *head=new Node;
    Node *tail, *temp;

    public:
        void entry()
        {
            bool x=true;

            cout<<"Enter elements in list : ";
            cin>>data;
            head->data=data;
            head->next=nullptr;
            tail=head;

            while(x)
            {
                temp=new Node;
                cin>>data;
                temp->data=data;
                temp->next=nullptr;
                tail->next=temp;
                tail=temp;
                if(cin.get()=='\n') x=false;
            }  
        }

        void display()
        {
            Node *p=head;
            while(p!=nullptr)
            {
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<endl;
        }

        void duplicate()
        {
            Node *p=head;
            Node *q=head->next;

            while(q)
            {
                if(p->data!=q->data)
                {
                    p=q;
                    q=q->next;
                }
                
                else
                {
                    p->next=q->next;
                    delete q;
                    q=p->next;
                }
            }
        }

        ~LinkedList(){
            Node *temp=new Node;
            while(head){
                temp=head;
                head=head->next;
                delete temp;
            }
        }
};

int main(int sinh, char const *cosech[])
{
    LinkedList lst;
    lst.entry();
    cout<<"List: ";
    lst.display();
    cout<<"List after removing duplicate elements: ";
    lst.duplicate();
    lst.display();

    return 0;
}