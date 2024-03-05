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

        int remove(int pos)
        {
            int ele;
            Node *p=head;
            Node *q=nullptr;

            if(pos==1)
            {
                q=head;
                ele=head->data;
                head=head->next;
                delete q;

                return ele;
            }

            else
            {
                for(int i=0; i<pos-1; i++)
                {
                    q=p;
                    p=p->next;
                }
                q->next=p->next;
                ele=p->data;
                delete p;
            }

            return ele;
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
    int pos, res;

    lst.entry();
    cout<<"List: ";
    lst.display();

    cout<<"Enter index of element to delete: ";
    cin>>pos;
    res=lst.remove(pos);
    cout<<"List after deletion: ";
    lst.display();
    cout<<"Element removed: "<<res;
    
    return 0;
}