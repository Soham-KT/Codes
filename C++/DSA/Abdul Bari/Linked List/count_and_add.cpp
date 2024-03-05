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

        int count()
        {
            int count=0;
            Node *p=head;
            while(p!=nullptr)
            {
                count++;
                p=p->next;
            }

            return count;
        }

        int sum()
        {
            int sum=0;
            Node *p=head;
            while(p!=nullptr)
            {
                sum+=p->data;
                p=p->next;
            }

            return sum;
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
    lst.display();
    cout<<"Number of nodes: "<<lst.count()<<endl;
    cout<<"Sum of elements in nodes: "<<lst.sum()<<endl;

    return 0;
}