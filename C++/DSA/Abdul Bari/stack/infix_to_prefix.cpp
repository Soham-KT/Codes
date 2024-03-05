#include <iostream>
#include <cstring>
using namespace std;

class Node
{
    public: 
        int data;
        Node *next;
};

template <class T>
class Stack
{
    Node *top=nullptr;

    public:
        bool is_empty()
        {
            if(top==nullptr) return true;
            return false;
        }

        void push(T ele)
        {
            Node *temp=new Node;
            if(temp==nullptr) cout<<"Stack overflow"<<endl;
            temp->data=ele;
            temp->next=top;
            top=temp;
        }

        T pop()
        {
            Node *temp;
            T x;
            x=top->data;
            temp=top;
            top=top->next;
            delete temp;

            return x;
        }

        T stack_top() {return top->data;}
};

char *rec(char *str){
    int len=strlen(str), i=0;
    char *str_=new char[len];
    for(int x=len-1; x>=0; x--, i++) str_[i]=str[x];
    str_[i++]='\0';
    return str_;
}

int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/') return 0;
    else return 1;
}

int pre(char x){
    if(x=='+' || x=='-') return 1;
    else if(x=='*' || x=='/') return 2;
    return 0;
}

char *convert(char *infix){
    Stack<char> stk;
    stk.push(' ');
    char *post=new char[strlen(infix)+2];
    char *post_=new char[strlen(infix)+2];
    char *infix_=new char[strlen(infix)];
    infix_=rec(infix);
    int i=0, j=0;
    while(infix_[i]!='\0'){
        if(isOperand(infix_[i])) post[j++]=infix_[i++];
        else{
            if(pre(infix_[i])>pre(stk.stack_top())) stk.push(infix_[i++]);
            else post[j++]=stk.pop();
        }
    }
    while(!(stk.is_empty())){
        post[j++]=stk.pop();
    }

    post[j]='\0';
    post_=rec(post);

    return post_;
}

int main(int sinh, char const *cosech[])
{
    char *inf="a+b*c-d/e";
    cout<<"Infix: "<<inf<<endl;
    char *post;
    post=convert(inf);
    cout<<"Prefix: "<<post;

    return 0;
}