#include <iostream>
using namespace std;

class Stack
{
    int size, top=-1, *arr;

    public: 
        void enter_size()
        {
            cout<<"Enter size of stack: ";
            cin>>size;
            arr=new int[size];
        }

        bool is_full()
        {
            if(top==size-1) return true;
            else return false;
        }

        bool is_empty()
        {
            if(top==-1) return true;
            else return false;
        }

        void push(int ele)
        {
            if(is_full())
            {
                cout<<"Stack Overflow"<<endl;
                return;
            }
            top++;
            arr[top]=ele;
        }

        int pop()
        {
            int x;
            if(is_empty())
            {
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            x=arr[top];
            top--;

            return x;
        }

        void print_stack()
        {
            for(int i=top; i>=0; i--)
            {
                cout<<"\t"<<arr[i]<<"\n";
            }
        }

        int peek(int pos) {return arr[pos];}

        int stack_top() {return top+1;}
};

int main(int sinh, char const *cosech[])
{
    Stack stk;
    int ele, ind;
    char q;
    int op;
    stk.enter_size();
    do
    {
        cout<<"1)Push\n2)Pop\n3)Peek\n4)Stack Top\n5)Display stack\n6)Is full\n7)Is empty\nEnter your choice: ";
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
                stk.print_stack();
                break;
            
            case 6:
                if(stk.is_full()) cout<<"Stack is full"<<endl;
                else cout<<"Stack is not full"<<endl;
                break;
            
            case 7:
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