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

        void concatenate(LinkedList lst1, LinkedList lst2)
        {
            Node *first=lst1.head;
            Node *second=lst2.head;
            Node *third=nullptr, *last=nullptr;

            if(first->data < second->data)
            {
                third=last=first;
                first=first->next;
                third->next=nullptr;
            }

            else
            {
                third=last=second;
                second=second->next;
                third->next=nullptr;
            }

            while(first && second)
            {
                if(first->data < second->data)
                {
                    last->next=first;
                    last=first;
                    first=first->next;
                    last->next=nullptr;
                }
            
                else
                {
                    last->next=second;
                    last=second;
                    second=second->next;
                    last->next=nullptr;
                }
            }

            if(first) last->next=first;
            if(second) last->next=second;

            head=third;
            tail=last;
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
    LinkedList lst1, lst2, lst3;

    cout<<"Enter for list 1(sorted):\n";
    lst1.entry();
    cout<<"List 1: ";
    lst1.display();

    cout<<"Enter for list 2(sorted):\n";
    lst2.entry();
    cout<<"List 2: ";
    lst2.display();

    cout<<"The concatenated list is: ";
    lst3.concatenate(lst1, lst2);
    lst3.display();

    return 0;
}