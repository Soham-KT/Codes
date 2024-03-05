#include <iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node *next;
        Node(){ next=nullptr; }
};

class LinkedList{
    Node *head=new Node;
    Node *tail=new Node;

    public:
        LinkedList(){
            head=nullptr;
            tail=nullptr;
            tail=head;
        }

        void insert_at_beginning(int ele){
            Node *temp=new Node;
            temp->data=ele;
            temp->next=head;
            head=temp;
        }

        void append(int ele){
            Node *temp=new Node;
            temp->data=ele;
            temp->next=nullptr;
            if(head==nullptr){
                head=temp;
                tail=head;
            }
            tail->next=temp;
            tail=temp;
        }

        void delete_last(){
            Node *p=head;
            Node *temp=new Node;
            
            while(p->next->next!=nullptr){
                p=p->next;
            }
            temp=p->next;
            p->next=nullptr;
            cout<<"Deleted element: "<<temp->data<<endl;
            delete temp;
        }

        void display(){
            Node *p=head;
            while(p!=nullptr){
                cout<<p->data<<" ";
                p=p->next;
            }
            cout<<endl;
        }

        ~LinkedList(){
            Node *temp=new Node;
            while(head!=nullptr){
                temp=head;
                head=head->next;

                delete temp;
            }
        }
};

int main(int sinh, char const *cosech[])
{
    LinkedList lst;
    int choice, ele;
    while(true){
        cout<<"1)Append\n2)Insert at beginning\n3)Delete from end\n4)Display\nEnter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter element: ";
                cin>>ele;
                lst.append(ele);
                break;
            
            case 2:
                cout<<"Enter element: ";
                cin>>ele;
                lst.insert_at_beginning(ele);
                break;

            case 3:
                lst.delete_last();
                break;

            case 4:
                cout<<"List: ";
                lst.display();
                break;
            
            default:
                cout<<"Invalid choice"<<endl;
                break;
        }

        char q;
        cout<<"Another choice?(y/n): ";
        cin>>q;

        if(q=='n') break;
    }

    return 0;
}