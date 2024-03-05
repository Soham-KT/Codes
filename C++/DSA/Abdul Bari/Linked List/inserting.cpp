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

        void insert(int pos, int ele)
        {
            Node *p=head;
            Node *t=new Node;
            int count=1;
            t->data=ele;
            if(pos==1)
            {
                t->next=head;
                head=t;
            }

            else
            {
                while(p)
                {
                    count++;
                    if(pos==count)
                    {
                        t->next=p->next;
                        p->next=t;
                    }
                    p=p->next;
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
    int pos, ele;

    lst.entry();
    cout<<"List: ";
    lst.display();

    cout<<"Enter element and position of node to insert: ";
    cin>>ele>>pos;
    lst.insert(pos, ele);
    cout<<"After insertion: ";
    lst.display();

    return 0;
}