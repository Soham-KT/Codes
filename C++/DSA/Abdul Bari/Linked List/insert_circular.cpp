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
    int count=0;
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
            count++;

            while(x)
            {
                temp=new Node;
                cin>>data;
                temp->data=data;
                temp->next=nullptr;
                tail->next=temp;
                tail=temp;
                count++;
                if(cin.get()=='\n') x=false;
            } 

            tail->next=head; 
        }

        void display()
        {
            Node *p=head;
            do
            {
                cout<<p->data<<" ";
                p=p->next;
            } while (p!=head);
            cout<<endl;
        }

        void insert(int pos, int ele)
        {
            Node *p=head;
            Node *t=new Node;
            t->data=ele;
            int count_=1;

            if(pos==1)
            {
                t->next=tail->next;
                tail->next=t;
                head=t;
            }

            else if(pos==count)
            {
                t->next=tail->next;
                tail->next=t;
                tail=t;
            }

            else
            {
                do
                {
                    count_++;
                    if(pos==count_)
                    {
                        t->next=p->next;
                        p->next=t;
                    }
                    p=p->next;
                }while(p!=tail->next);

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
    cout<<"Enter element and position to insert in the list: ";
    cin>>ele>>pos;
    lst.insert(pos, ele);
    cout<<"List after insertion: ";
    lst.display();

    return 0;
}