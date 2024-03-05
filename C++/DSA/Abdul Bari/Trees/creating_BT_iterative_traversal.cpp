#include <iostream>
using namespace std;

class Node_Tree
{
    public:
        Node_Tree *l_child, *r_child;
        int data;
};

class Node
{
    public: 
        Node_Tree *data;
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

        void push(Node_Tree *ele)
        {
            Node *temp=new Node;
            if(temp==nullptr) cout<<"Stack overflow"<<endl;
            temp->data=ele;
            temp->next=top;
            top=temp;
        }

        Node_Tree *pop()
        {
            Node *temp;
            Node_Tree *x;
            x=top->data;
            temp=top;
            top=top->next;
            delete temp;

            return x;
        }
};

class Queue
{
    Node *head=new Node;
    Node *tail;

    public:
        Queue(){ head=nullptr; tail=nullptr; }

        void enqueue(Node_Tree *ele)
        {
            Node *temp=new Node;
            if(temp==nullptr) cout<<"Queue Full"<<endl;
            else
            {
                temp->data=ele;
                temp->next=nullptr;
                if(head==nullptr) head=tail=temp;
                else
                {
                    tail->next=temp;
                    tail=temp;
                }
            }
        }

        Node_Tree *dequeue()
        {
            Node_Tree *x=nullptr;
            Node *p=head;
            if(head==nullptr) cout<<"Queue Empty"<<endl;
            else
            {
                head=head->next;
                x=p->data;
                free(p);
            }

            return x;
        }

        bool isEmpty() 
        {
            return (head==nullptr)?true:false;
        }
};

class Tree
{
    Node_Tree *ptr, *temp;
    int data;
    Queue q;

    public:
        Node_Tree *root;

        void create_tree()
        {
            cout<<"Enter root node: ";
            cin>>data;
            root=new Node_Tree;
            root->data=data;
            root->l_child=root->r_child=0;
            q.enqueue(root);
            while(!q.isEmpty())
            {
                ptr=q.dequeue();
                cout<<"Enter left child of "<<ptr->data<< "(-1 if not): ";
                cin>>data;
                if(data!=-1)
                {
                    temp=new Node_Tree;
                    temp->data=data;
                    temp->l_child=temp->r_child=0;
                    ptr->l_child=temp;
                    q.enqueue(temp);
                }
                
                cout<<"Enter right child of "<<ptr->data<< "(-1 if not): ";
                cin>>data;
                if(data!=-1)
                {
                    temp=new Node_Tree;
                    temp->data=data;
                    temp->l_child=temp->r_child=0;
                    ptr->r_child=temp;
                    q.enqueue(temp);
                }
            }
        }

};

void display_preorder(Node_Tree *ptr)
{
    Stack stk;
    while(ptr || !stk.is_empty())
    {
        if(ptr)
        {
            cout<<ptr->data<<" ";
            stk.push(ptr);
            ptr=ptr->l_child;
        }
        else
        {
            ptr=stk.pop();
            ptr=ptr->r_child;
        }
    }
}

void display_inorder(Node_Tree *ptr)
{
    Stack stk;
    while(ptr || !stk.is_empty())
    {
        if(ptr)
        {
            stk.push(ptr);
            ptr=ptr->l_child;
        }
        else
        {
            ptr=stk.pop();
            cout<<ptr->data<<" ";
            ptr=ptr->r_child;
        }
    }
}

int count_node(Node_Tree *ptr)
{
    int x, y;
    if(ptr)
    {
        x=count_node(ptr->l_child);
        y=count_node(ptr->r_child);
        return x+y+1;
    }
    return 0;
}

int main()
{
    Tree tr;
    tr.create_tree();
    cout<<"Pre order: ";
    display_preorder(tr.root);
    cout<<"\nIn order: ";
    display_inorder(tr.root);
    cout<<"\nNumber of nodes in tree: "<<count_node(tr.root);

    return 0;
}