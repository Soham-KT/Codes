#include <iostream>
#include <cstring>
using namespace std;

// --------------------------------- making a node for linked list
class Node
{
    public: 
        int data;
        Node *next;
};

// --------------------------------- making a stack using linked list and a template
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

// --------------------------------- checking if the given character is operand
int isOperand(char x){
    if(x=='+' || x=='-' || x=='*' || x=='/') return 0;
    else return 1;
}

// --------------------------------- returning the priority of operand
int pre(char x){
    if(x=='+' || x=='-') return 1;
    else if(x=='*' || x=='/') return 2;
    return 0;
}

// -------------------------------- function to convert infix expression to postfix expression
char *convert(char *infix){
    Stack<char> stk;  // creating a character stack 
    stk.push(' ');  // pusing a dummy character
    // a dummy character is pushed to compare it to first operand from infix array
    
    char *post=new char[strlen(infix)+2];  // creating an array to store postfix notations
    
    // +2 iss liye ho raha hai kyuki stack me ek ' ' (space) push kiya hai aur ek end me \0 lagane ke liye hai taki string ko end kar sake

    int i=0, j=0;
    
    // going till the end of string
    while(infix[i]!='\0'){
        
        // if the character is not an operand then we simply add it to the array
        if(isOperand(infix[i])) post[j++]=infix[i++];
        
        // if the character is an operand then we compare it to the top of stack
        else{

            // if the priority of operand in infix array is higher then we push in into the stack
            if(pre(infix[i])>pre(stk.stack_top())) stk.push(infix[i++]);

            // if the priority operand is <= the operand in infix array then we pop the element from stack
            else post[j++]=stk.pop();
        }
    }

    // the remaining operands are being added to the end of postfix array in order
    while(!(stk.is_empty())){
        post[j++]=stk.pop();
    }

    // ending the postfix array with a \0 like in any other string
    post[j]='\0';

    return post;
}

int main(int sinh, char const *cosech[])
{
    char *inf="a+b*c-d/e";
    cout<<"Infix: "<<inf<<endl;
    char *post;
    post=convert(inf);
    cout<<"Postfix: "<<post;

    return 0;
}