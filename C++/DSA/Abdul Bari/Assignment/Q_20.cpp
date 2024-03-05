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

        void append(int ele){
            Node *temp=new Node;
            temp->data=ele;
            temp->next=nullptr;
            if(head==nullptr){
                head=temp;
                tail=head;
                return;
            }
            tail->next=temp;
            tail=temp;
        }

        void remove(int ind){
            Node *p=head, *q=nullptr, *temp=new Node;
            int count=0;
            while(count<ind){
                q=p;
                p=p->next;
                count++;
            }
            q->next=p->next;
            temp=p;
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

        void insert_sorted(int ele){
            if(head==nullptr){
                head->data=ele;
                head->next=nullptr;
                tail=head;
            }
            for(Node *p=head; p!=nullptr; p=p->next){
                if(ele>p->data){
                    Node *temp=new Node;
                    temp->next=p->next;
                    temp->data=ele;
                    p->next=temp;
                    break;
                }
            }
        }

        int occurance(int ele){
            int occ=0;
            for(Node *p=head; p!=nullptr; p=p->next) if(ele==p->data) occ++;
            return occ; 
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
    int choice, ele, ind;
    while(true){
        cout<<"1)Append\n2)Remove\n3)Insert in sorted\n4)Display\nEnter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter element: ";
                cin>>ele;
                lst.append(ele);
                break;
            
            case 2:
                cout<<"Enter index: ";
                cin>>ind;
                lst.remove(ind-1);
                break;

            case 3:
                cout<<"Enter element: ";
                cin>>ele;
                lst.insert_sorted(ele);
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