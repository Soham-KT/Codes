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
        cout<<"1)Push\n2)Pop\n3)Peek\n4)Stack Top\n5)Display stack\n6)Is empty\nEnter your choice: ";
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
                cout<<"Enter index of element to peek: ";
                cin>>ind;
                cout<<"Element :"<<stk.peek(ind)<<endl;
                break;
            
            case 4:
                cout<<"Stack top: "<<stk.stack_top()<<endl;
                break;
            
            case 5:
                cout<<"Stack: ";
                stk.display_stack();
                break;
            
            case 6:
                if(stk.is_empty()) cout<<"Stack is empty"<<endl;
                else cout<<"Stack is not empty"<<endl;
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