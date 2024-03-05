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

        bool is_loop()
        {
            Node *p=head, *q=head;

            do
            {
                p=p->next;
                q=q->next;
                q=q?q->next:q;
            } while (p && q && p!=q);
            
            if(p==q) return true;
            else return false;
        }

        void setloop()
        {
            tail->next=head;
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
    cout<<"Checking for loop: ";
    if(lst.is_loop()) cout<<"Is loop\n";
    else cout<<"Not loop\n";
    cout<<"After setting list to loop:\n";
    lst.setloop();
    cout<<"Checking for loop: ";
    if(lst.is_loop()) cout<<"Is loop\n";
    else cout<<"Not loop\n";

    return 0;
}