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

        int search(int ele)
        {
            Node *p=head;
            int count=0;

            while(p)
            {
                if(ele==p->data)
                {
                    count++;
                    return count;
                }
                count++;
                p=p->next;
            }

            return -1;
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
    int ele, res;

    lst.entry();
    lst.display();
    cout<<"Enter element to search: ";
    cin>>ele;
    res=lst.search(ele);
    if(res!=-1) cout<<"Element found at index: "<<res;
    else cout<<"Element not found";

    return 0;
}