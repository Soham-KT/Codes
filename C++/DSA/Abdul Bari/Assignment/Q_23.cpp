#include <iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node *next, *prev;
        Node(){ next=prev=nullptr; }
};

class DoublyLinkedList{
    Node *head=new Node;
    Node *tail=new Node;

    public:
        DoublyLinkedList(){
            head=nullptr;
            tail=head;
        }

        void append(int ele){
            if(head==nullptr){
                head->data=ele;
                head->prev=nullptr;
                head->next=nullptr;
                tail=head;
            }
            else{
                Node *temp=new Node;
                temp->data=ele;
                temp->next=nullptr;
                temp->prev=tail;
                tail->next=temp;
                tail=temp;
            }
        }

        void add_at_beginning(int ele){
            Node *temp=new Node;
            temp->data=ele;
            temp->prev=nullptr;
            temp->next=head;
            head->prev=temp;
            head=temp;
        }

        void add_after(int ele, int ind){
            Node *p=head;
            int count=0;
            while(count<ind){
                p=p->next;
                count++;
            }
            Node *temp=new Node;
            temp->data=ele;
            temp->next=p;
            temp->prev=p->prev;
            p->prev->next=temp;
            p->prev=temp;
        }

        int count(){
            int count=0;
            for(Node *p=head; p!=nullptr; p=p->next) count++;
            return count;
        }

        void display(){
            for(Node *p=head; p!=nullptr; p=p->next) cout<<p->data<<" ";
            cout<<endl;
        }

        void remove(int ind){
            Node *p=head, *temp=new Node;
            int count=0;
            while(count<ind){
                p=p->next;
                count++;
            }
            temp=p;
            p->prev->next=p->next;
            p->next->prev=p->prev;
            cout<<"Deleted element: "<<temp->data<<endl;
            delete temp;
        }

        void reverse(){
            Node *current_node=head, *next_node=head->next, *previous_node=nullptr;

            while(current_node!=nullptr){
                current_node->prev=current_node->next;
                current_node->next=previous_node;
                previous_node=current_node;
                current_node=next_node;
                next_node=next_node->next;
            }     
        }
};

int main(int sinh, char const *cosech[])
{
    DoublyLinkedList dll;
    int choice, ele, ind;
    while(true){
        cout<<"1)Append\n2)Add at beginning\n3)Insert\n4)Number of elements\n5)Remove\n6)Reverse\n7)Display\nEnter your choice: ";
        cin>>choice;

        switch(choice){
            case 1:
                cout<<"Enter element: ";
                cin>>ele;
                dll.append(ele);
                break;

            case 2:
                cout<<"Enter element: ";
                cin>>ele;
                dll.add_at_beginning(ele);
                break; 

            case 3:
                cout<<"Enter element and index: ";
                cin>>ele>>ind;
                dll.add_after(ele, ind);
                break;

            case 4:
                cout<<"The number of elements in list: "<<dll.count()<<endl;
                break;

            case 5:
                cout<<"Enter index: ";
                cin>>ind;
                dll.remove(ind-1);
                break;

            case 6:
                dll.reverse();
                cout<<"List reversed"<<endl;

            case 7:
                cout<<"List: ";
                dll.display();
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