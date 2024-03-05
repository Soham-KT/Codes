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

        void insert(int ele, int pos)
        {
            Node *p=head;
            Node *t=new Node;
            t->data=ele;
            if(pos==1)
            {
                t->prev=nullptr;
                t->next=head;
                head->prev=t;
                head=t;
            }

            else
            {
                for(int i=0; i<pos-2; i++) p=p->next;
                t->prev=p;
                t->next=p->next;
                if(p->next)p->next->prev=t;
                p->next=t;
            }
        }

        int remove(int pos)
        {
            Node *p=head;
            int ele;

            if(pos==1)
            {
                ele=p->data;
                head=head->next;
                delete p;
                if(head) head->prev=nullptr;
            }

            else
            {
                for(int i=0; i<pos-1; i++) p=p->next;
                ele=p->data;
                p->prev->next=p->next;
                if(p->next) p->next=p->prev;
                delete p;
            }

            return ele;
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
    int ele, pos, res;

    dlst.entry();
    cout<<"List from head: ";
    dlst.display_from_head();
    cout<<"List from tail: ";
    dlst.display_from_tail();
    
    cout<<"Enter element and position to insert into: ";
    cin>>ele>>pos;
    dlst.insert(ele, pos);
    cout<<"List after inserting: ";
    dlst.display_from_head();

    cout<<"Enter position of element to delete: ";
    cin>>pos;
    res=dlst.remove(pos);
    cout<<"List after deleting element: ";
    dlst.display_from_head();
    cout<<"Element removed: "<<res<<endl;

    return 0;
}