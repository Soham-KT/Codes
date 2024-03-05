#include <iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node *next, *prev;
};

class DoublyLinkedList
{
    Node *head=new Node;
    Node *tail=new Node;

    public:
        void entry()
        {
            int data;
            bool x=true;
            cout<<"Enter in list: ";
            cin>>data;
            head->data=data;
            head->next=head->prev=nullptr;
            tail=head;

            while(x)
            {
                Node *temp=new Node;
                cin>>data;
                temp->data=data;
                temp->next=tail->next;
                temp->prev=tail;
                tail->next=temp;
                tail=temp;
                
                if(cin.get()=='\n') x=false;
            }
        }

        void display_from_head()
        {
            Node *p=head;
            while(p!=nullptr)
            {
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<endl;
        }

        void display_from_tail()
        {
            Node *p=tail;
            while(p!=nullptr)
            {
                cout<<p->data<<" ";
                p=p->prev;
            }
            cout<<endl;
        }

        void reverse()
        {
            Node *p=head;
            Node *temp;

            while(p!=nullptr)
            {
                temp=p->next;
                p->next=p->prev;
                p->prev=temp;
                p=p->prev;
            }
            
            temp=head;
            head=tail;
            tail=temp;
        }

        ~DoublyLinkedList(){
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
    DoublyLinkedList dlst;
    dlst.entry();
    cout<<"List from head: ";
    dlst.display_from_head();
    cout<<"List from tail: ";
    dlst.display_from_tail();

    cout<<"After reversing the list:\n";
    dlst.reverse();
    cout<<"List from head: ";
    dlst.display_from_head();
    cout<<"List from tail: ";
    dlst.display_from_tail();


    return 0;
}