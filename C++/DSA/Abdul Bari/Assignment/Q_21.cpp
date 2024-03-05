#include <iostream>
using namespace std;

class Node
{
    public: 
        int data;
        Node *next;
};

class Stack
{
    Node *top=nullptr;

    public:
        bool is_empty()
        {
            if(top==nullptr) return true;
            return false;
        }

        void push(int ele)
        {
            Node *temp=new Node;
            if(temp==nullptr) cout<<"Stack overflow"<<endl;
            temp->data=ele;
            temp->next=top;
            top=temp;
        }

        int pop()
        {
            Node *temp;
            int x;
            x=top->data;
            temp=top;
            top=top->next;
            delete temp;

            return x;
        }

        void display_stack()
        {
            Node *temp=top;
            while(temp)
            {
                cout<<"\t"<<temp->data<<"\t\n";
                temp=temp->next;
            }
        }

        int peek(int ind)
        {
            Node *temp=top;
            for(int i=0; i<ind-2; i++)
            {
                temp=temp->next;
            }

            return temp->data;
        }

        int stack_top() {return top->data;}
};

int main(int sinh, char const *cosech[])
{
    Stack stk;
    int ele, ind;
    char q;
    int op;
    do
    {
        cout<<"1)Push\n2)Pop\n3)Stack Top\n4)Display stack\nEnter your choice: ";
        cin>>op;
        
        switch(op)
        {
            case 1:
                cout<<"Enter element to push: ";
                cin>>ele;
                stk.push(ele);
                break;
            
            case 2:
                ele=stk.pop();
                cout<<"Element popped: "<<ele<<endl;
                break;
            
            case 3:
                cout<<"Stack top: "<<stk.stack_top()<<endl;
                break;
            
            case 4:
                cout<<"Stack: ";
                stk.display_stack();
                break;
            
            default:
                cout<<"Invalid option"<<endl;
                break;
        }

        cout<<"Another entry?(y/n):";
        cin>>q;
    } while (q=='y');

    return 0;
}