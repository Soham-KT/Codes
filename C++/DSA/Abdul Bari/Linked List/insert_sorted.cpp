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

        void insert_sorted(int ele)
        {
            Node *p=head;
            Node *q=new Node;
            Node *t=new Node;
            
            t->data=ele;
            
            if(ele<head->data)
            {
                t->next=head;
                head=t;
            }

            else 
            {
                while(p && p->data<ele)
                {
                    q=p;
                    p=p->next;
                }
                t->next=q->next;
                q->next=t;
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
    int ele;

    lst.entry();
    cout<<"List: ";
    lst.display();
    cout<<"Insert element in sorted: ";
    cin>>ele;
    lst.insert_sorted(ele);
    cout<<"After insertion: ";
    lst.display();

    return 0;
}