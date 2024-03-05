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

            head->prev=tail;
            tail->next=head;
        }

        void display_from_head()
        {
            Node *p=head;
            do
            {
                cout<<p->data<<" ";
                p=p->next;
            } while (p!=head);
            
            cout<<endl;
        }

        void display_from_tail()
        {
            Node *p=tail;
            do
            {
                cout<<p->data<<" ";
                p=p->prev;
            } while (p!=tail);
            
            cout<<endl;
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

    return 0;
}