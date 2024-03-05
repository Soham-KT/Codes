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

        int is_sorted()
        {
            Node *p=head;
            int x=head->data;
            while(p)
            {
                if(p->data<x) return 0;
                x=p->data;
                p=p->next;
            }

            return 1;
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
    int res; 

    lst.entry();
    cout<<"List: ";
    lst.display();
    cout<<"Checking if list is sorted or not: ";
    res=lst.is_sorted();
    if(res==1) cout<<"Is sorted"<<endl;
    else cout<<"Is not sorted"<<endl;

    return 0;
}