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

        int Max()
        {
            Node *p=head;
            int max=p->data;

            while(p)
            {
                if(max<p->data)
                {
                    max=p->data;
                }
                p=p->next;
            }

            return max;
        }
        
        int Min()
        {
            Node *p=head;
            int min=p->data;

            while(p)
            {
                if(min>p->data)
                {
                    min=p->data;
                }
                p=p->next;
            }

            return min;
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
    cout<<"Maximum element in list is: "<<lst.Max()<<endl;
    cout<<"Minimum element in list is: "<<lst.Min();

    return 0;
}