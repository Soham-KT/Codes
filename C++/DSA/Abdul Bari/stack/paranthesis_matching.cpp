#include <iostream>
using namespace std;

class Stack
{
    int size, top=-1, *arr;

    public: 
        bool is_empty()
        {
            (top==-1)?true:false;
        }

        bool is_full()
        {
            (top==size-1)?true:false;
        }

        void enter_size(string s)
        {
            size=s.length();
        }

        void push(char x)
        {
            if(is_full()) cout<<"Stack overflow\n";
            else
            {
                top++;
                arr[top]=x;
            }
        }

        char pop()
        {
            char x;
            if(is_empty()) cout<<"Stack underflow\n";
            else
            {
                x=arr[top];
                top--;
                return x;
            }
        }
};

bool is_balanced(string &str)
{
    Stack stk;
    stk.enter_size(str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='(') stk.push('(');
        else if(str[i]==')')
        {
            if(stk.is_empty()) return false;
            else stk.pop();
        }
    }

    return stk.is_empty()?true:false;
}

int main(int sinh, char const *cosech[])
{
    string str;
    bool res;

    cout<<"Enter a mathematical expression(a simple one pls): ";
    cin>>str;
    res=is_balanced(str);
    if(res) cout<<"The expression has balanced paranthesis"<<endl;
    else cout<<"The expression does not have balanced paranthesis"<<endl;

    return 0;
}