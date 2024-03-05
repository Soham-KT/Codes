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

        int remove(int pos)
        {
            Node *p=head;
            Node *q=nullptr;
            int val;
            
            if(pos==1)
            {
                tail->next=head->next;
                val=head->data;
                delete head;
                head=tail->next;
            }

            else
            {
                for(int i=0; i<pos-2; i++)
                {
                    p=p->next;
                }
                q=p->next;
                p->next=q->next;
                val=q->data;
                delete q;
            }

            return val;
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
    int ind, res;
    lst.entry();
    cout<<"List: ";
    lst.display();
    cout<<"Enter index of value to delete: ";
    cin>>ind;
    res=lst.remove(ind);
    cout<<"List after deletion: ";
    lst.display();
    cout<<"Element removed: "<<res;

    return 0;
}