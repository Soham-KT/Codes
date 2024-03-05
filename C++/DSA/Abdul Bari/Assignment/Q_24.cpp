#include <iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node *next;
        Node(){ next=nullptr; }
};

class CircularLinkedList{
    Node *head=new Node;
    Node *tail=new Node;

    public:
        CircularLinkedList(){
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
            }
            tail->next=temp;
            tail=temp;
            tail->next=head;
        }

        void insert(int ind, int ele){
            Node *p=head, *temp=new Node;
            int count=0;
            if(ind==1){
                temp->data=ele;
                temp->next=head;
                head=temp;
            }
            while(p!=nullptr){
                count++;
                if(ind==count){
                    temp->data=ele;
                    temp->next=p->next;
                    p->next=temp;
                    break;
                }
                p=p->next;
            }
        }
        
        void remove(int ind){
            Node *p=head, *temp=new Node, *q=nullptr;
            int count=0;
            if(ind==1){
                temp=head;
                head=head->next;
                tail->next=head;
                cout<<"Deleted element: "<<temp->data;
                delete temp;
            }
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

        void count_nodes(){
            Node *p=head;
            int count=0;
            do{
                count++;
                p=p->next;
            }while(p!=head);
            
            cout<<"Number of nodes: "<<count<<endl;
        }

        void display(){
            Node *p=head;
            do{
                cout<<p->data<<" ";
                p=p->next;
            }while(p!=head);
            cout<<endl;
        }

        ~CircularLinkedList(){
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
    CircularLinkedList lst;
    int choice, ele, ind;
    while(true){
        cout<<"1)Append\n2)Insert\n3)Delete\n4)Number of nodes\n5)Display\nEnter your choice: ";
        cin>>choice;
        
        switch(choice){
            case 1:
                cout<<"Enter element: ";
                cin>>ele;
                lst.append(ele);
                break;
            
            case 2:
                cout<<"Enter element and index: ";
                cin>>ele>>ind;
                lst.insert(ind, ele);
                break;
            
            case 3:
                cout<<"Enter index of element to delete: ";
                cin>>ind;
                lst.remove(ind);
                break;
            
            case 4:
                lst.count_nodes();
                break;
            
            case 5:
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